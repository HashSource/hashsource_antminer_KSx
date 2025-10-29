int __fastcall std::sys_common::net::UdpSocket::bind(int a1, unsigned __int8 *a2)
{
  int v2; // r8
  int result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r12
  int v9; // lr
  sa_family_t v10; // r7
  int v11; // r9
  int v12; // r1
  unsigned int v13; // r2
  int *v14; // r6
  __int16 v15; // r3
  socklen_t v16; // r2
  __int16 v17; // r2
  unsigned __int8 v18; // r1
  unsigned int v19; // r1
  int v20; // r6
  struct sockaddr addr; // [sp+4h] [bp-1Ch] BYREF
  int v22; // [sp+14h] [bp-Ch]
  int v23; // [sp+18h] [bp-8h]
  int v24; // [sp+1Ch] [bp-4h]

  result = *a2;
  v5 = *((_DWORD *)a2 + 1);
  if ( result == 4 )
  {
    if ( *(_WORD *)v5 )
      v6 = 10;
    else
      v6 = 2;
    v7 = socket(v6, 524290, 0);
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
        v10 = 10;
        v11 = *(_DWORD *)(v5 + 4);
        v12 = *(_DWORD *)(v5 + 8);
        v8 = *(_DWORD *)(v5 + 12);
        v2 = *(_DWORD *)(v5 + 16);
        v13 = *(unsigned __int16 *)(v5 + 28);
        v14 = (int *)(v5 + 20);
        v15 = __rev16(v13);
        v16 = 28;
      }
      else
      {
        v19 = *(unsigned __int16 *)(v5 + 6);
        v14 = (int *)(v5 + 2);
        v11 = 0;
        v16 = 16;
        v15 = __rev16(v19);
        v10 = 2;
        v12 = 0;
      }
      v20 = *v14;
      *(_DWORD *)&addr.sa_data[10] = v12;
      v22 = v8;
      *(_DWORD *)&addr.sa_data[6] = v11;
      v23 = v2;
      *(_DWORD *)&addr.sa_data[2] = v20;
      *(_WORD *)addr.sa_data = v15;
      addr.sa_family = v10;
      v24 = v9;
      if ( bind(v7, &addr, v16) == -1 )
      {
        *(_DWORD *)(a1 + 4) = *_errno_location();
        *(_BYTE *)(a1 + 3) = 0;
        *(_WORD *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
        return close(v7);
      }
      else
      {
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
