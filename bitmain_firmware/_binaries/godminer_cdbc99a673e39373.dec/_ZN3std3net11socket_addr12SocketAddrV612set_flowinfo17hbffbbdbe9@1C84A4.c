int __fastcall std::net::socket_addr::SocketAddrV6::set_flowinfo(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}
