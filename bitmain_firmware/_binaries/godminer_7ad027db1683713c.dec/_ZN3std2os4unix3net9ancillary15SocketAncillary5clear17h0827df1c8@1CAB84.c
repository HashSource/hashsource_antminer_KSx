int __fastcall std::os::unix::net::ancillary::SocketAncillary::clear(int result)
{
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
