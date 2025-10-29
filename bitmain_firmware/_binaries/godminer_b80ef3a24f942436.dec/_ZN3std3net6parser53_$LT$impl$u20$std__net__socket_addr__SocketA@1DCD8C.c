int __fastcall std::net::parser::<impl std::net::socket_addr::SocketAddrV6>::parse_ascii(
        int a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int v5; // r3
  int v6; // r5
  int v7; // r3
  int v8; // r4
  int v9; // r5
  unsigned int v11; // [sp+0h] [bp-28h] BYREF
  int v12; // [sp+4h] [bp-24h]
  _DWORD v13[8]; // [sp+8h] [bp-20h] BYREF

  v11 = a2;
  v12 = a3;
  sub_1DC624((int)v13, &v11);
  if ( v12 || !v13[0] )
  {
    *(_BYTE *)(a1 + 1) = 5;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  else
  {
    v5 = v13[2];
    v6 = v13[3];
    *(_DWORD *)(a1 + 4) = v13[1];
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 12) = v6;
    v7 = v13[5];
    v8 = v13[6];
    v9 = v13[7];
    *(_DWORD *)(a1 + 16) = v13[4];
    *(_DWORD *)(a1 + 20) = v7;
    *(_DWORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 28) = v9;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
