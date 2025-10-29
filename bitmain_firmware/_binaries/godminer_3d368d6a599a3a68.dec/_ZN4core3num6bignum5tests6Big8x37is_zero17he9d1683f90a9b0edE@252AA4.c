bool __fastcall core::num::bignum::tests::Big8x3::is_zero(int *a1)
{
  unsigned int v1; // r3
  _BOOL4 v2; // r1
  int v4; // r2

  v1 = *a1;
  if ( (unsigned int)*a1 >= 4 )
    core::slice::index::slice_end_index_len_fail();
  v2 = v1 == 0;
  if ( !v1 )
    return v2;
  if ( *((_BYTE *)a1 + 4) )
    return v2;
  v4 = (int)a1 + v1 + 4;
  v2 = v1 == 1;
  if ( v1 == 1 )
    return v2;
  if ( *((_BYTE *)a1 + 5) )
    return v2;
  v2 = (int *)((char *)a1 + 6) == (int *)v4;
  if ( (int *)((char *)a1 + 6) == (int *)v4 )
    return v2;
  if ( !*((_BYTE *)a1 + 6) )
    return v1 == 3;
  return v2;
}
