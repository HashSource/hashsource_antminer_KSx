int __fastcall std::sys_common::net::TcpListener::bind(int a1, unsigned __int8 *a2)
{
  int v2; // r8
  int result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r12
  int v10; // lr
  sa_family_t v11; // r7
  int v12; // r9
  int v13; // r1
  unsigned int v14; // r2
  int *v15; // r6
  __int16 v16; // r3
  socklen_t v17; // r2
  __int16 v18; // r2
  unsigned __int8 v19; // r1
  int v20; // r0
  unsigned int v21; // r1
  int v22; // r6
  int v23; // r0
  struct sockaddr optval; // [sp+4h] [bp-1Ch] BYREF
  int v25; // [sp+14h] [bp-Ch]
  int v26; // [sp+18h] [bp-8h]
  int v27; // [sp+1Ch] [bp-4h]

  result = *a2;
  v5 = *((_DWORD *)a2 + 1);
  if ( result == 4 )
  {
    if ( *(_WORD *)v5 )
      v6 = 10;
    else
      v6 = 2;
    v7 = socket(v6, 524289, 0);
    v8 = v7;
    if ( v7 == -1 )
    {
      result = *_errno_location();
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 4) = result;
    }
    else
    {
      *(_DWORD *)&optval.sa_family = 1;
      if ( setsockopt(v7, 1, 2, &optval, 4u) == -1 )
      {
        v20 = *_errno_location();
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        *(_DWORD *)(a1 + 4) = v20;
        *(_BYTE *)a1 = 0;
        return close(v8);
      }
      else
      {
        if ( *(_WORD *)v5 )
        {
          v10 = *(_DWORD *)(v5 + 24);
          v11 = 10;
          v12 = *(_DWORD *)(v5 + 4);
          v13 = *(_DWORD *)(v5 + 8);
          v9 = *(_DWORD *)(v5 + 12);
          v2 = *(_DWORD *)(v5 + 16);
          v14 = *(unsigned __int16 *)(v5 + 28);
          v15 = (int *)(v5 + 20);
          v16 = __rev16(v14);
          v17 = 28;
        }
        else
        {
          v21 = *(unsigned __int16 *)(v5 + 6);
          v15 = (int *)(v5 + 2);
          v12 = 0;
          v17 = 16;
          v16 = __rev16(v21);
          v11 = 2;
          v13 = 0;
        }
        v22 = *v15;
        *(_DWORD *)&optval.sa_data[10] = v13;
        v25 = v9;
        *(_DWORD *)&optval.sa_data[6] = v12;
        v26 = v2;
        *(_DWORD *)&optval.sa_data[2] = v22;
        *(_WORD *)optval.sa_data = v16;
        optval.sa_family = v11;
        v27 = v10;
        if ( bind(v8, &optval, v17) == -1 || listen(v8, 128) == -1 )
        {
          v23 = *_errno_location();
          *(_BYTE *)(a1 + 3) = 0;
          *(_WORD *)(a1 + 1) = 0;
          *(_BYTE *)a1 = 0;
          *(_DWORD *)(a1 + 4) = v23;
          return close(v8);
        }
        else
        {
          *(_DWORD *)(a1 + 4) = v8;
          *(_BYTE *)a1 = 4;
          return 4;
        }
      }
    }
  }
  else
  {
    v18 = *(_WORD *)(a2 + 1);
    v19 = a2[3];
    *(_DWORD *)(a1 + 4) = v5;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 3) = v19;
    *(_WORD *)(a1 + 1) = v18;
  }
  return result;
}
