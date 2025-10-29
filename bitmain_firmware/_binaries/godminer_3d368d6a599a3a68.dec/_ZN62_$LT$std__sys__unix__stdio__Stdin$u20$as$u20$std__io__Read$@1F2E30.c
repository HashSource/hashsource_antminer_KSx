ssize_t __fastcall <std::sys::unix::stdio::Stdin as std::io::Read>::read(int a1, int a2, void *buf, size_t a4)
{
  ssize_t result; // r0

  if ( a4 >= 0x7FFFFFFF )
    a4 = 0x7FFFFFFF;
  result = read(0, buf, a4);
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
