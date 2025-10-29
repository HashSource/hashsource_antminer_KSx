int __fastcall std::net::socket_addr::SocketAddrV4::set_port(int result, __int16 a2)
{
  *(_WORD *)(result + 4) = a2;
  return result;
}
