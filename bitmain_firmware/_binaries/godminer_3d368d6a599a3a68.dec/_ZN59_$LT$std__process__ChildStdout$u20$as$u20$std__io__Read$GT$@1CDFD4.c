// Alternative name is '_ZN47_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$13read_vectored17h891c3373f9deb625E'
// Alternative name is '_ZN59_$LT$std..process..ChildStderr$u20$as$u20$std..io..Read$GT$13read_vectored17h97522d02b3de5218E'
ssize_t __fastcall <std::process::ChildStdout as std::io::Read>::read_vectored(
        int a1,
        int *a2,
        struct iovec *iovec,
        unsigned int a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x400 )
    a4 = 1024;
  result = readv(*a2, iovec, a4);
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
