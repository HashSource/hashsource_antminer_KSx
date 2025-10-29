bool __fastcall core::num::bignum::Big32x40::is_zero(int *a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int v3; // r1
  int v4; // t1

  v1 = a1[40];
  if ( v1 >= 0x29 )
    core::slice::index::slice_end_index_len_fail();
  v2 = 4 * v1;
  do
  {
    v3 = v2;
    if ( !v2 )
      break;
    v4 = *a1++;
    v2 -= 4;
  }
  while ( !v4 );
  return v3 == 0;
}
