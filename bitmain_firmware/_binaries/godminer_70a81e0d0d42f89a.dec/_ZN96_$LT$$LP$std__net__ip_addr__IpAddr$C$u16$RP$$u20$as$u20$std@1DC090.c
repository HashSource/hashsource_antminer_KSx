int __fastcall <(std::net::ip_addr::IpAddr,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        int result,
        int a2)
{
  __int16 v2; // r3
  int v3; // r12
  int v4; // lr
  int v5; // r2
  int v6; // r1

  v2 = *(_WORD *)(a2 + 18);
  v3 = *(_DWORD *)(a2 + 1);
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    *(_WORD *)(result + 28) = v2;
    v4 = *(_DWORD *)(a2 + 5);
    v5 = *(_DWORD *)(a2 + 9);
    v6 = *(_DWORD *)(a2 + 13);
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 4) = v3;
    *(_WORD *)result = 1;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 8) = v4;
  }
  else
  {
    *(_WORD *)(result + 6) = v2;
    *(_DWORD *)(result + 2) = v3;
    *(_WORD *)result = 0;
  }
  return result;
}
