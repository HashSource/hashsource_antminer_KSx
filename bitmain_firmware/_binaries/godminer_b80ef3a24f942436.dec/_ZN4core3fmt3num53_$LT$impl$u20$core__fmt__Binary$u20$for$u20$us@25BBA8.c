// Alternative name is '_ZN4core3fmt3num53_$LT$impl$u20$core..fmt..Binary$u20$for$u20$isize$GT$3fmt17h7bf57e4f5da9fc4bE'
// Alternative name is '_ZN4core3fmt3num51_$LT$impl$u20$core..fmt..Binary$u20$for$u20$i32$GT$3fmt17h2200ff9e1cfe60d2E'
// Alternative name is '_ZN4core3fmt3num51_$LT$impl$u20$core..fmt..Binary$u20$for$u20$u32$GT$3fmt17h0f83aba80987e828E'
int __fastcall core::fmt::num::<impl core::fmt::Binary for usize>::fmt(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  int v3; // r3
  _BYTE *v4; // r4
  _BYTE v6[128]; // [sp+8h] [bp-80h] BYREF

  v2 = *a1;
  v3 = 0;
  do
  {
    v4 = &v6[-v3++];
    v4[127] = v2 & 1 | 0x30;
    v2 >>= 1;
  }
  while ( v2 );
  if ( (unsigned int)(128 - v3) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v6[-v3 + 128], v3);
}
