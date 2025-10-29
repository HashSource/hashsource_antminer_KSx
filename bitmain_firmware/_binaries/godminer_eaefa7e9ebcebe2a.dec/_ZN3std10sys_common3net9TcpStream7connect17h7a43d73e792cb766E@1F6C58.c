int __fastcall std::sys_common::net::TcpStream::connect(int a1, unsigned __int8 *a2)
{
  int v2; // r8
  int result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r12
  int v9; // lr
  int *v10; // r7
  sa_family_t v11; // r3
  int v12; // r9
  int v13; // r1
  unsigned int v14; // r2
  socklen_t v15; // r6
  __int16 v16; // r2
  __int16 v17; // r2
  unsigned __int8 v18; // r1
  unsigned int v19; // r1
  int v20; // r7
  int v21; // r7
  struct sockaddr addr; // [sp+4h] [bp-1Ch] BYREF
  int v23; // [sp+14h] [bp-Ch]
  int v24; // [sp+18h] [bp-8h]
  int v25; // [sp+1Ch] [bp-4h]

  result = *a2;
  v5 = *((_DWORD *)a2 + 1);
  if ( result == 4 )
  {
    if ( *(_WORD *)v5 )
      v6 = 10;
    else
      v6 = 2;
    v7 = socket(v6, (int)&dbl_80000 + 1, 0);
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
      if ( *(_WORD *)v5 )
      {
        v9 = *(_DWORD *)(v5 + 24);
        v10 = (int *)(v5 + 20);
        v11 = 10;
        v12 = *(_DWORD *)(v5 + 4);
        v13 = *(_DWORD *)(v5 + 8);
        v8 = *(_DWORD *)(v5 + 12);
        v2 = *(_DWORD *)(v5 + 16);
        v14 = *(unsigned __int16 *)(v5 + 28);
        v15 = 28;
        v16 = __rev16(v14);
      }
      else
      {
        v19 = *(unsigned __int16 *)(v5 + 6);
        v10 = (int *)(v5 + 2);
        v12 = 0;
        v15 = 16;
        v16 = __rev16(v19);
        v11 = 2;
        v13 = 0;
      }
      v20 = *v10;
      *(_DWORD *)&addr.sa_data[10] = v13;
      v23 = v8;
      *(_WORD *)addr.sa_data = v16;
      *(_DWORD *)&addr.sa_data[6] = v12;
      v24 = v2;
      *(_DWORD *)&addr.sa_data[2] = v20;
      addr.sa_family = v11;
      v25 = v9;
      if ( connect(v7, &addr, v15) == -1 )
      {
        while ( 1 )
        {
          v21 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v21) != 35 )
            break;
          if ( connect(v7, &addr, v15) != -1 )
            goto LABEL_14;
        }
        *(_DWORD *)(a1 + 4) = v21;
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
        return close(v7);
      }
      else
      {
LABEL_14:
        *(_DWORD *)(a1 + 4) = v7;
        *(_BYTE *)a1 = 4;
        return 4;
      }
    }
  }
  else
  {
    v17 = *(_WORD *)(a2 + 1);
    v18 = a2[3];
    *(_DWORD *)(a1 + 4) = v5;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 3) = v18;
    *(_WORD *)(a1 + 1) = v17;
  }
  return result;
}
