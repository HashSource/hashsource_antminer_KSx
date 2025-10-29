_DWORD *__fastcall <&[std::net::socket_addr::SocketAddr] as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(
        _DWORD *result,
        int *a2)
{
  int v2; // r3
  int v3; // r1

  v2 = *a2;
  v3 = a2[1];
  *result = 0;
  result[1] = v2 + 32 * v3;
  result[2] = v2;
  return result;
}
