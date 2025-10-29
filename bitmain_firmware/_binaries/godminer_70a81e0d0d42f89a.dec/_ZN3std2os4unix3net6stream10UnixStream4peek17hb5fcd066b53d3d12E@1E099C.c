// Alternative name is '_ZN3std2os4unix3net8datagram12UnixDatagram4peek17h6ee70bb1e5537f9eE'
ssize_t __fastcall std::os::unix::net::stream::UnixStream::peek(int a1, int *a2, void *buf, size_t n)
{
  ssize_t result; // r0

  result = recv(*a2, buf, n, 2);
  if ( result == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
