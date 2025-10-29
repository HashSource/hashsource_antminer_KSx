ssize_t __fastcall <std::io::stdio::StdoutRaw as std::io::Write>::write(int a1, int a2, void *buf, size_t a4)
{
  size_t v5; // r2
  ssize_t result; // r0
  int v9; // r1

  v5 = a4;
  if ( a4 >= 0x7FFFFFFF )
    v5 = 0x7FFFFFFF;
  result = write(1, buf, v5);
  if ( result == -1 )
  {
    result = *_errno_location();
    v9 = 0;
    if ( result == 9 )
    {
      *(_DWORD *)(a1 + 4) = a4;
      *(_BYTE *)a1 = 4;
      return 4;
    }
  }
  else
  {
    v9 = 4;
  }
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
