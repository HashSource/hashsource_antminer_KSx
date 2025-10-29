int __fastcall std::net::socket_addr::SocketAddr::set_ip(int result, unsigned __int8 *a2)
{
  int v2; // r4
  unsigned __int8 *v3; // r2
  unsigned int v4; // r5
  int v5; // r1
  int v6; // r3
  int v7; // r2
  __int16 *v8; // r1
  __int16 v9; // lr
  unsigned int v10; // r2
  __int16 v11; // r3
  int v12; // [sp+0h] [bp-10h]
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h]

  v2 = *a2;
  v3 = a2 + 5;
  v4 = *(_DWORD *)(a2 + 1);
  if ( *(_WORD *)result )
  {
    if ( (v2 & 1) != 0 )
    {
      v5 = *(_DWORD *)v3;
      v6 = *((_DWORD *)v3 + 1);
      v7 = *((_DWORD *)v3 + 2);
      *(_DWORD *)(result + 4) = v4;
      *(_DWORD *)(result + 16) = v7;
      *(_DWORD *)(result + 12) = v6;
      *(_DWORD *)(result + 8) = v5;
      return result;
    }
  }
  else if ( (v2 & 1) == 0 )
  {
    *(_DWORD *)(result + 2) = v4;
    return result;
  }
  v8 = (__int16 *)(result + 28);
  if ( !*(_WORD *)result )
    v8 = (__int16 *)(result + 6);
  v9 = *v8;
  if ( v2 )
  {
    v14 = *((_DWORD *)v3 + 2);
    v12 = *(_DWORD *)v3;
    v13 = *((_DWORD *)v3 + 1);
    __SET_PAIR__(v10, v4, (unsigned __int64)v4 << 16);
    v11 = 1;
  }
  else
  {
    LOWORD(v10) = *v8;
    v11 = 0;
  }
  *(_WORD *)(result + 6) = v10;
  *(_DWORD *)(result + 2) = v4;
  *(_WORD *)result = v11;
  *(_WORD *)(result + 28) = v9;
  *(_DWORD *)(result + 8) = v12;
  *(_DWORD *)(result + 12) = v13;
  *(_DWORD *)(result + 16) = v14;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}
