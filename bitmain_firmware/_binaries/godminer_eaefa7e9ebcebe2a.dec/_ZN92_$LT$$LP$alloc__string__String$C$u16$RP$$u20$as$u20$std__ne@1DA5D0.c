int __fastcall <(alloc::string::String,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        _DWORD *a1,
        int a2)
{
  __int16 v2; // r2
  int v3; // r3
  _DWORD v5[2]; // [sp+4h] [bp-Ch] BYREF
  __int16 v6; // [sp+Ch] [bp-4h]

  v2 = *(_WORD *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 4);
  v5[1] = *(_DWORD *)(a2 + 8);
  v6 = v2;
  v5[0] = v3;
  return <(&str,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(a1, (int)v5);
}
