int __fastcall <(std::net::ip_addr::Ipv6Addr,u16) as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        int a1,
        int *a2)
{
  int v3; // r0
  int v4; // r2
  int v5; // r3
  __int16 v6; // r5
  int v7; // r1
  _WORD v9[9]; // [sp+0h] [bp-18h] BYREF

  v3 = a2[2];
  v4 = *a2;
  v5 = a2[1];
  v6 = *((_WORD *)a2 + 8);
  v7 = a2[3];
  *(_DWORD *)&v9[5] = v3;
  *(_DWORD *)&v9[7] = v7;
  *(_DWORD *)&v9[1] = v4;
  *(_WORD *)a1 = 1;
  *(_DWORD *)&v9[3] = v5;
  memcpy((void *)(a1 + 2), v9, 0x12u);
  *(_WORD *)(a1 + 28) = v6;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  return 0;
}
