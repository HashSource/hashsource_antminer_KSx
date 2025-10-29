int __fastcall std::sys_common::net::UdpSocket::connect(int a1, int *a2, unsigned __int8 *a3)
{
  int v3; // r9
  int v4; // r12
  int v5; // lr
  int result; // r0
  int v8; // r3
  socklen_t v9; // r5
  int v10; // r2
  int v11; // r6
  int *v12; // r7
  __int16 v13; // r3
  sa_family_t v14; // r4
  __int16 v15; // r1
  unsigned __int8 v16; // r2
  int v17; // r7
  int v18; // r6
  int v19; // r4
  struct sockaddr addr; // [sp+4h] [bp-1Ch] BYREF
  int v21; // [sp+14h] [bp-Ch]
  int v22; // [sp+18h] [bp-8h]
  int v23; // [sp+1Ch] [bp-4h]

  result = *a3;
  v8 = *((_DWORD *)a3 + 1);
  if ( result == 4 )
  {
    if ( *(_WORD *)v8 )
    {
      v5 = *(_DWORD *)(v8 + 24);
      v9 = 28;
      v3 = *(_DWORD *)(v8 + 16);
      v10 = *(_DWORD *)(v8 + 4);
      v11 = *(_DWORD *)(v8 + 8);
      v4 = *(_DWORD *)(v8 + 12);
      v12 = (int *)(v8 + 20);
      v13 = __rev16(*(unsigned __int16 *)(v8 + 28));
      v14 = 10;
    }
    else
    {
      v12 = (int *)(v8 + 2);
      v9 = 16;
      v14 = 2;
      v13 = __rev16(*(unsigned __int16 *)(v8 + 6));
      v10 = 0;
      v11 = 0;
    }
    v17 = *v12;
    *(_DWORD *)&addr.sa_data[6] = v10;
    *(_DWORD *)&addr.sa_data[10] = v11;
    v21 = v4;
    v18 = *a2;
    v22 = v3;
    *(_DWORD *)&addr.sa_data[2] = v17;
    *(_WORD *)addr.sa_data = v13;
    addr.sa_family = v14;
    v23 = v5;
    if ( connect(v18, &addr, v9) == -1 )
    {
      while ( 1 )
      {
        v19 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v19) != 35 )
          break;
        if ( connect(v18, &addr, v9) != -1 )
          goto LABEL_9;
      }
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = v19;
      return 0;
    }
    else
    {
LABEL_9:
      *(_BYTE *)a1 = 4;
      return 4;
    }
  }
  else
  {
    v15 = *(_WORD *)(a3 + 1);
    v16 = a3[3];
    *(_DWORD *)(a1 + 4) = v8;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 3) = v16;
    *(_WORD *)(a1 + 1) = v15;
  }
  return result;
}
