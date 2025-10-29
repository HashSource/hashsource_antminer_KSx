int __fastcall std::os::unix::net::ancillary::SocketCred::get_gid(int a1)
{
  return *(_DWORD *)(a1 + 8);
}
