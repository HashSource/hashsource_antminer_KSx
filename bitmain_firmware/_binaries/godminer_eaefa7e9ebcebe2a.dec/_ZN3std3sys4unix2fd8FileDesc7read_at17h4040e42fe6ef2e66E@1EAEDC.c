int __fastcall std::sys::unix::fd::FileDesc::read_at(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4, int a5, int a6)
{
  int result; // r0

  if ( a4 >= 0x7FFFFFFF )
    a4 = 0x7FFFFFFF;
  result = pread64(*a2, a3, a4, a4, a5, a6);
  if ( result == -1 )
  {
    result = *_errno_location();
    *a1 = 0;
  }
  else
  {
    *(_BYTE *)a1 = 4;
  }
  a1[1] = result;
  return result;
}
