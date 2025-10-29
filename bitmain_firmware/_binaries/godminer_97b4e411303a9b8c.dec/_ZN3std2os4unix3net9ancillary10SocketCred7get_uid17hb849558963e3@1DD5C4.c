int __fastcall std::os::unix::net::ancillary::SocketCred::get_uid(int a1)
{
  return *(_DWORD *)(a1 + 4);
}
