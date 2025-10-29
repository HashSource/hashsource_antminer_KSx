int __fastcall callapi(const char *a1, char *name, unsigned int a3)
{
  struct hostent *v6; // r7
  int v7; // r0
  int v8; // r4
  int v9; // r3
  int v10; // r5
  size_t v11; // r0
  ssize_t v12; // r7
  int *v14; // r0
  char *v15; // r0
  int *v16; // r0
  char *v17; // r0
  int *v18; // r0
  char *v19; // r0
  int *v20; // r0
  char *v21; // r0
  int *v22; // r0
  char *v23; // r0
  int *v24; // r0
  char *v25; // r0
  char *v26; // r8
  int v27; // r6
  int v28; // r9
  int v29; // r7
  char *v30; // r10
  int v31; // r11
  ssize_t v32; // r0
  size_t v33; // r1
  int v34; // r3
  int *v35; // r0
  char *v36; // r0
  _DWORD optval[2]; // [sp+10h] [bp-24h] BYREF
  _DWORD v38[2]; // [sp+18h] [bp-1Ch] BYREF
  struct sockaddr addr; // [sp+20h] [bp-14h] BYREF

  v6 = gethostbyname(name);
  if ( v6 )
  {
    v7 = socket(2, 1, 0);
    v8 = v7;
    if ( v7 == -1 )
    {
      v14 = _errno_location();
      v15 = strerror(*v14);
      printf("Socket initialisation failed: %s\n", v15);
      return 1;
    }
    else
    {
      memset(addr.sa_data, 0, sizeof(addr.sa_data));
      addr.sa_family = 2;
      v9 = **(_DWORD **)v6->h_addr_list;
      *(_QWORD *)addr.sa_data = (unsigned __int16)__rev16(a3);
      *(_DWORD *)&addr.sa_data[2] = v9;
      if ( connect(v7, &addr, 0x10u) >= 0 )
      {
        optval[0] = 1;
        optval[1] = 60;
        if ( setsockopt(v8, 1, 13, optval, 8u) )
        {
          v22 = _errno_location();
          v23 = strerror(*v22);
          printf("cgminer-api, setsocket SO_LINGER failed (%s)\n", v23);
          close(v8);
        }
        v38[0] = 10;
        v38[1] = 0;
        if ( setsockopt(v8, 1, 21, v38, 8u) )
        {
          v20 = _errno_location();
          v21 = strerror(*v20);
          printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n", v21);
          close(v8);
        }
        v10 = setsockopt(v8, 1, 20, v38, 8u);
        if ( v10 )
        {
          v18 = _errno_location();
          v19 = strerror(*v18);
          printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n", v19);
          close(v8);
        }
        v11 = strlen(a1);
        v12 = send(v8, a1, v11, 0);
        if ( v12 <= 0 )
        {
          v24 = _errno_location();
          v10 = 1;
          v25 = strerror(*v24);
          printf("cgminer api send failed: %s\n", v25);
        }
        else if ( strlen(a1) == v12 )
        {
          v26 = (char *)malloc(0x10000u);
          if ( !v26 )
          {
            v10 = 1;
            printf("cgminer api: OOM (%d)\n", 0x10000);
            return v10;
          }
          v27 = 0xFFFF;
          v28 = 3;
          v29 = 0;
          while ( 1 )
          {
            v30 = &v26[v29];
            v31 = v27 + 0x10000;
            v32 = recv(v8, &v26[v29], v27 - v29, 0);
            v33 = v27 + 0x10000;
            v29 += v32;
            if ( v32 < 0 )
            {
              v35 = _errno_location();
              v10 = 1;
              v36 = strerror(*v35);
              printf("Recv failed: %s\n", v36);
              goto LABEL_28;
            }
            if ( !v32 )
            {
              puts("Recv failed: api server close the socket");
              v10 = 1;
              goto LABEL_28;
            }
            if ( v27 != v29 )
              break;
            if ( !--v28 )
            {
              v30 = &v26[v27];
              goto LABEL_28;
            }
            v27 += 0xFFFF;
            v26 = (char *)realloc(v26, v33);
            if ( !v26 )
            {
              v10 = 1;
              printf("cgminer realloc: OOM (%d)\n", v31);
              return v10;
            }
          }
          v30 = &v26[v29];
LABEL_28:
          v34 = dword_22080;
          *v30 = 0;
          if ( v34 )
            puts(v26);
          else
            display(v26);
          free(v26);
        }
        close(v8);
        return v10;
      }
      v16 = _errno_location();
      v17 = strerror(*v16);
      printf("Socket connect failed: %s\n", v17);
      return 1;
    }
  }
  else
  {
    printf("Couldn't get hostname: '%s'\n", name);
    return 1;
  }
}
