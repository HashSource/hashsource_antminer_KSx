int __fastcall std::os::unix::net::ancillary::SocketCred::set_uid(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}
