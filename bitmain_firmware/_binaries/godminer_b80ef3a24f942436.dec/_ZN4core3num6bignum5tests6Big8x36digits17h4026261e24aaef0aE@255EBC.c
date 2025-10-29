unsigned int *__fastcall core::num::bignum::tests::Big8x3::digits(unsigned int *a1)
{
  if ( *a1 >= 4 )
    core::slice::index::slice_end_index_len_fail();
  return a1 + 1;
}
