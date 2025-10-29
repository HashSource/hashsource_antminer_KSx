unsigned int __fastcall core::num::bignum::Big32x40::bit_length(int a1)
{
  unsigned int v2; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r1
  unsigned int v6; // r0

  v2 = *(_DWORD *)(a1 + 160);
  if ( v2 >= 0x29 )
    core::slice::index::slice_end_index_len_fail(v2, 40, (int)&off_2CF600);
  v3 = 4 - 4 * v2;
  v4 = 32 * v2;
  do
  {
    if ( v3 == 4 )
      return 0;
    v5 = *(_DWORD *)(a1 - v3);
    v4 -= 32;
    v3 += 4;
    --v2;
  }
  while ( !v5 );
  v6 = *(_DWORD *)(a1 + 4 * v2);
  if ( !v6 )
    core::option::expect_failed((int)aArgumentOfInte, 46, (int)&off_2CF600);
  return ((__clz(v6) | v4) ^ 0x1F) + 1;
}
