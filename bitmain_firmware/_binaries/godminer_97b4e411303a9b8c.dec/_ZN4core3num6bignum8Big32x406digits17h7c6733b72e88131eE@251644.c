int __fastcall core::num::bignum::Big32x40::digits(int result)
{
  if ( *(_DWORD *)(result + 160) >= 0x29u )
    core::slice::index::slice_end_index_len_fail();
  return result;
}
