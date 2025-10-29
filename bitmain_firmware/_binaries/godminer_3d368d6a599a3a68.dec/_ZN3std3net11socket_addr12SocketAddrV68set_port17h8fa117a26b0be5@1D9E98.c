int __fastcall std::net::socket_addr::SocketAddrV6::set_port(int result, __int16 a2)
{
  *(_WORD *)(result + 24) = a2;
  return result;
}
