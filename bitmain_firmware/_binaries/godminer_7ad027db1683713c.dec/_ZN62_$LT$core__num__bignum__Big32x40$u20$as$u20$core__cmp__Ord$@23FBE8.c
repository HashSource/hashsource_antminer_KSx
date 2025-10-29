int __fastcall <core::num::bignum::Big32x40 as core::cmp::Ord>::cmp(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r12
  int v5; // r3
  int v6; // lr
  unsigned int v7; // r2
  unsigned int v8; // r1
  int result; // r0

  v3 = *(_DWORD *)(a2 + 160);
  if ( *(_DWORD *)(a1 + 160) > v3 )
    v3 = *(_DWORD *)(a1 + 160);
  if ( v3 >= 0x29 )
    core::slice::index::slice_end_index_len_fail(v3, 40, (int)&off_2CF600);
  v4 = a1 - 4;
  v5 = -4 * v3;
  v6 = a2 - 4;
  while ( v5 )
  {
    v7 = *(_DWORD *)(v4 - v5);
    v8 = *(_DWORD *)(v6 - v5);
    v5 += 4;
    result = v8 != v7;
    if ( v8 > v7 )
      result = -1;
    if ( result )
      return result;
  }
  return 0;
}
