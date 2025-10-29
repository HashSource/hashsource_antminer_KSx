ssize_t __fastcall <std::sys::unix::stdio::Stdin as std::io::Read>::read_vectored(
        int a1,
        int a2,
        struct iovec *iovec,
        unsigned int a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x400 )
    a4 = 1024;
  result = readv(0, iovec, a4);
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
