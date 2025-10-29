int __fastcall core::slice::index::into_range_unchecked(int a1, _DWORD *a2)
{
  int result; // r0

  result = a2[1];
  if ( *a2 )
  {
    if ( *a2 == 1 )
      ++result;
    else
      return 0;
  }
  return result;
}
