int __fastcall core::num::bignum::Big32x40::div_rem_small(int a1, int a2)
{
  unsigned int v3; // r0
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r6
  int v9; // r0

  if ( !a2 )
    core::panicking::panic((int)aAssertionFaile_51, 27, (int)&off_2E6600);
  v3 = *(_DWORD *)(a1 + 160);
  if ( v3 >= 0x29 )
    core::slice::index::slice_end_index_len_fail();
  if ( !v3 )
    return a1;
  v5 = 0;
  v6 = -4 * v3;
  v7 = a1 - 4;
  do
  {
    v8 = *(_DWORD *)(v7 - v6);
    v9 = sub_26EA20(v8, v5, a2, 0);
    *(_DWORD *)(v7 - v6) = v9;
    v5 = v8 - v9 * a2;
    v6 += 4;
  }
  while ( v6 );
  return a1;
}
