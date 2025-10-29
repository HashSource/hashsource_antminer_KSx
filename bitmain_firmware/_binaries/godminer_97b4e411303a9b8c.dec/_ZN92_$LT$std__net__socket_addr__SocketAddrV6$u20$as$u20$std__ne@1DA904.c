void *__fastcall <std::net::socket_addr::SocketAddrV6 as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        _WORD *a1,
        const void *a2)
{
  _BYTE v4[30]; // [sp+0h] [bp-20h] BYREF

  memcpy(&v4[2], a2, 0x1Cu);
  *a1 = 1;
  return memcpy(a1 + 1, v4, 0x1Eu);
}
