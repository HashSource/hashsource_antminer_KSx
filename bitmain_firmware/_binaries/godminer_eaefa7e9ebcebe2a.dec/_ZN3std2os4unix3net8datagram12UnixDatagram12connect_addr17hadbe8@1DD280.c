int __fastcall std::os::unix::net::datagram::UnixDatagram::connect_addr(int a1, int *a2, struct sockaddr *addr)
{
  int result; // r0

  if ( connect(*a2, (const struct sockaddr *)&addr->sa_data[2], *(_DWORD *)&addr->sa_family) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
