int __fastcall std::net::parser::<impl core::str::traits::FromStr for std::net::socket_addr::SocketAddrV4>::from_str(
        int a1,
        int a2,
        int a3)
{
  __int16 v5; // r1^2
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]
  __int64 v8; // [sp+8h] [bp-8h] BYREF

  v6 = a2;
  v7 = a3;
  sub_1D886C((int)&v8, (int)&v6);
  if ( v7 || !(_WORD)v8 )
  {
    *(_BYTE *)(a1 + 1) = 4;
    *(_BYTE *)a1 = 1;
    return 1;
  }
  else
  {
    v5 = HIWORD(v8);
    *(_DWORD *)(a1 + 2) = v8 >> 16;
    *(_WORD *)(a1 + 6) = v5;
    *(_BYTE *)a1 = 0;
    return 0;
  }
}
