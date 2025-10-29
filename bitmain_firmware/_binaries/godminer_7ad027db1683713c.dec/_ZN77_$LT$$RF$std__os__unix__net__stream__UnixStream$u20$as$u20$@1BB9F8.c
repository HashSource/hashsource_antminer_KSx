// Alternative name is '_ZN63_$LT$$RF$std..process..ChildStdin$u20$as$u20$std..io..Write$GT$14write_vectored17h9d993f7a70b80f5cE'
// Alternative name is '_ZN52_$LT$$RF$std..fs..File$u20$as$u20$std..io..Write$GT$14write_vectored17h0110033fbdda0e5bE'
ssize_t __fastcall <&std::os::unix::net::stream::UnixStream as std::io::Write>::write_vectored(
        int a1,
        int **a2,
        struct iovec *iovec,
        unsigned int a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x400 )
    a4 = 1024;
  result = writev(**a2, iovec, a4);
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
