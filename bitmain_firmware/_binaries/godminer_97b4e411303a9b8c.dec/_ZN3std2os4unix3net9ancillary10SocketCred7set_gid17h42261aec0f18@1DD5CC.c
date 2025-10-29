int __fastcall std::os::unix::net::ancillary::SocketCred::set_gid(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}
