// Alternative name is '_ZN48_$LT$std..fs..File$u20$as$u20$std..io..Write$GT$5write17h0ca0067e0ad0fe09E'
ssize_t __fastcall std::os::unix::net::datagram::UnixDatagram::send(int a1, int *a2, void *buf, size_t a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x7FFFFFFF )
    a4 = 0x7FFFFFFF;
  result = write(*a2, buf, a4);
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
