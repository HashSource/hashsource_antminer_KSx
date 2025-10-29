bool __fastcall std::os::unix::net::ancillary::SocketAncillary::is_empty(int a1)
{
  return *(_DWORD *)(a1 + 8) == 0;
}
