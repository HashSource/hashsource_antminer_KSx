// Alternative name is '_ZN3std2os4unix3net8listener12UnixListener10take_error17h2e2001e755c469b0E'
// Alternative name is '_ZN3std2os4unix3net8datagram12UnixDatagram10take_error17h0ecc8b462da50c63E'
int __fastcall std::os::unix::net::stream::UnixStream::take_error(int a1, int *a2)
{
  int v3; // r0
  int result; // r0
  int optval; // [sp+8h] [bp-8h] BYREF
  socklen_t optlen; // [sp+Ch] [bp-4h] BYREF

  v3 = *a2;
  optlen = 4;
  optval = 0;
  if ( getsockopt(v3, 1, 4, &optval, &optlen) == -1 )
  {
    result = *_errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = result;
    *(_DWORD *)a1 = 1;
  }
  else
  {
    result = optval;
    if ( optval )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = result;
    }
    else
    {
      result = 4;
      *(_BYTE *)(a1 + 4) = 4;
    }
    *(_DWORD *)a1 = 0;
  }
  return result;
}
