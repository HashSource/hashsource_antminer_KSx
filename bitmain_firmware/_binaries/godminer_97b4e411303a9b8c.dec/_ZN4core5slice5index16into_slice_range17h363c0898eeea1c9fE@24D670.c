int __fastcall core::slice::index::into_slice_range(int a1, int *a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3
  bool v5; // zf
  int v6; // r1

  v2 = *a2;
  result = a2[1];
  v4 = a2[2];
  v5 = *a2 == 0;
  v6 = a2[3];
  if ( !v5 )
  {
    if ( v2 != 1 )
    {
      result = 0;
      if ( v4 )
        return result;
      goto LABEL_7;
    }
    if ( __CFADD__(result++, 1) )
      core::slice::index::slice_start_index_overflow_fail((int)&off_2E5318);
  }
  if ( v4 )
    return result;
LABEL_7:
  if ( v6 == -1 )
    core::slice::index::slice_end_index_overflow_fail((int)&off_2E5328);
  return result;
}
