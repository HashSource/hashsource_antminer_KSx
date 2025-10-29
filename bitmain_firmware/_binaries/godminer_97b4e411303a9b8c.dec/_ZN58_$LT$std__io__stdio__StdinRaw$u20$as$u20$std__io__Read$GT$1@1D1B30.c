ssize_t __fastcall <std::io::stdio::StdinRaw as std::io::Read>::read_vectored(
        int a1,
        int a2,
        struct iovec *iovec,
        unsigned int a4)
{
  int v5; // r5
  ssize_t result; // r0

  if ( a4 >= 0x400 )
    a4 = 1024;
  v5 = 0;
  result = readv(0, iovec, a4);
  if ( result == -1 )
  {
    result = *_errno_location();
    if ( result == 9 )
    {
      *(_BYTE *)a1 = 4;
      *(_DWORD *)(a1 + 4) = 0;
      return 0;
    }
  }
  else
  {
    v5 = 4;
  }
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
