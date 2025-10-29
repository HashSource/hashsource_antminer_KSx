int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::socket_addr::SocketAddrV6>::from_str(
        int a1,
        unsigned int a2,
        int a3)
{
  int v4; // r3
  int v5; // r5
  int v6; // r3
  int v7; // r4
  int v8; // r5
  unsigned int v10; // [sp+0h] [bp-28h] BYREF
  int v11; // [sp+4h] [bp-24h]
  _DWORD v12[8]; // [sp+8h] [bp-20h] BYREF

  v10 = a2;
  v11 = a3;
  sub_1DAB48((int)v12, &v10);
  if ( v11 || !v12[0] )
  {
    *(_BYTE *)(a1 + 1) = 5;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  else
  {
    v4 = v12[2];
    v5 = v12[3];
    *(_DWORD *)(a1 + 4) = v12[1];
    *(_DWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 12) = v5;
    v6 = v12[5];
    v7 = v12[6];
    v8 = v12[7];
    *(_DWORD *)(a1 + 16) = v12[4];
    *(_DWORD *)(a1 + 20) = v6;
    *(_DWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 28) = v8;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
