ssize_t __fastcall std::sys::unix::fd::FileDesc::write_vectored(int a1, int *a2, struct iovec *iovec, unsigned int a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x400 )
    a4 = 1024;
  result = writev(*a2, iovec, a4);
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
