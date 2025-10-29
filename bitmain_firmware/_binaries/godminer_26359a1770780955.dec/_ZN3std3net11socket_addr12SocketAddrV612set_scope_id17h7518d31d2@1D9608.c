int __fastcall std::net::socket_addr::SocketAddrV6::set_scope_id(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}
