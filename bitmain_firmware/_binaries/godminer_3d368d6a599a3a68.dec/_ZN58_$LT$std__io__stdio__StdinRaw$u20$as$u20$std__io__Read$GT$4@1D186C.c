ssize_t __fastcall <std::io::stdio::StdinRaw as std::io::Read>::read(int a1, int a2, void *buf, size_t a4)
{
  int v5; // r5
  ssize_t result; // r0

  if ( a4 >= 0x7FFFFFFF )
    a4 = 0x7FFFFFFF;
  v5 = 0;
  result = read(0, buf, a4);
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
