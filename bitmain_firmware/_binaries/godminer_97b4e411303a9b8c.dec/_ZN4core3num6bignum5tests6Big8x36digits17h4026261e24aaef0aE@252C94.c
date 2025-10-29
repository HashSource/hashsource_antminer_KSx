_DWORD *__fastcall core::num::bignum::tests::Big8x3::digits(_DWORD *a1)
{
  if ( *a1 >= 4u )
    core::slice::index::slice_end_index_len_fail();
  return a1 + 1;
}
