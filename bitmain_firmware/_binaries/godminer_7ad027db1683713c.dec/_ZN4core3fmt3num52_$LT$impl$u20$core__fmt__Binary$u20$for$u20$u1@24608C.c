// Alternative name is '_ZN4core3fmt3num52_$LT$impl$u20$core..fmt..Binary$u20$for$u20$i128$GT$3fmt17hcb09d3848f4ed451E'
int __fastcall core::fmt::num::<impl core::fmt::Binary for u128>::fmt(unsigned int *a1, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r4
  unsigned int v4; // r2
  unsigned int v5; // lr
  int v6; // r0
  char v7; // cf
  unsigned int v8; // r0
  _BYTE v10[128]; // [sp+8h] [bp-80h] BYREF

  v2 = a1[2];
  v3 = a1[3];
  v4 = *a1;
  v5 = a1[1];
  v6 = 127;
  do
  {
    if ( v6 == -1 )
    {
      v8 = 0;
      return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v10[v8], 128 - v8);
    }
    v10[v6] = v4 & 1 | 0x30;
    v7 = v5 & 1;
    v5 = (v5 >> 1) | (v2 << 31);
    v4 = (v4 >> 1) | (v7 << 31);
    v7 = v3 & 1;
    v3 >>= 1;
    v2 = (v2 >> 1) | (v7 << 31);
    --v6;
  }
  while ( v4 | v2 | v5 | v3 );
  v8 = v6 + 1;
  if ( v8 >= 0x81 )
    core::slice::index::slice_start_index_len_fail(v8, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v10[v8], 128 - v8);
}
