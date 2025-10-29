int __fastcall std::os::unix::net::ancillary::SocketAncillary::new(int result, int a2, int a3)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 0;
  return result;
}
