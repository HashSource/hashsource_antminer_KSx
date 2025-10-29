int __fastcall <std::sys::unix::process::process_common::CommandArgs as core::iter::traits::iterator::Iterator>::next(
        int **a1)
{
  int *v2; // r2
  int result; // r0

  v2 = a1[1];
  if ( v2 == *a1 )
    return 0;
  result = *v2;
  a1[1] = v2 + 2;
  return result;
}
