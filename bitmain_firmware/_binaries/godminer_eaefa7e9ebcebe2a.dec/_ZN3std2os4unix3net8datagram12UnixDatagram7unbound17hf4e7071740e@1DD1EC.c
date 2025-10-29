int __fastcall std::os::unix::net::datagram::UnixDatagram::unbound(int a1)
{
  int result; // r0

  result = socket(1, (int)&dbl_80000 + 2, 0);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = result;
    *(_BYTE *)a1 = 4;
  }
  return result;
}
