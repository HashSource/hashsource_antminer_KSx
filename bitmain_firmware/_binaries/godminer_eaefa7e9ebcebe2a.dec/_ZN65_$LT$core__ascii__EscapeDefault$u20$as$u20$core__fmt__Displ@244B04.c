int __fastcall <core::ascii::EscapeDefault as core::fmt::Display>::fmt(int a1, _DWORD *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r3

  v3 = *(unsigned __int8 *)(a1 + 4);
  v4 = *(unsigned __int8 *)(a1 + 5);
  if ( v4 < v3 )
    core::slice::index::slice_index_order_fail();
  if ( v4 > 4 )
    core::slice::index::slice_end_index_len_fail();
  return (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int))(a2[1] + 12))(*a2, a1 + v3, v4 - v3);
}
