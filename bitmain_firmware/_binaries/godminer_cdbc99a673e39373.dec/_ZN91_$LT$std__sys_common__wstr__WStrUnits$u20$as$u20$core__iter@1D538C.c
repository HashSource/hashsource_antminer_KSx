int __fastcall <std::sys_common::wstr::WStrUnits as core::iter::traits::iterator::Iterator>::next(
        unsigned __int16 **a1)
{
  int v1; // r2
  int result; // r0

  v1 = (int)*a1;
  result = **a1;
  if ( result )
    *a1 = (unsigned __int16 *)(v1 + 2);
  return result;
}
