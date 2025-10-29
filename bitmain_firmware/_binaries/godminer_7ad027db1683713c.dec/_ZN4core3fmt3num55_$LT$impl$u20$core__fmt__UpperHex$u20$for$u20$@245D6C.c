// Alternative name is '_ZN4core3fmt3num55_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$usize$GT$3fmt17h5cc3f597ec66e673E'
// Alternative name is '_ZN4core3fmt3num53_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$u32$GT$3fmt17h1a71910301fa96a7E'
// Alternative name is '_ZN4core3fmt3num53_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i32$GT$3fmt17hc126d05b0db96bfbE'
int __fastcall core::fmt::num::<impl core::fmt::UpperHex for isize>::fmt(unsigned int *a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r3
  char v4; // r5
  _BYTE v6[128]; // [sp+8h] [bp-80h] BYREF

  v2 = *a1;
  v3 = 0;
  do
  {
    v4 = 55;
    if ( (v2 & 0xF) < 0xA )
      v4 = 48;
    v6[-v3++ + 127] = v4 + (v2 & 0xF);
    v2 >>= 4;
  }
  while ( v2 );
  if ( (unsigned int)(128 - v3) >= 0x81 )
    core::slice::index::slice_start_index_len_fail(128 - v3, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v6[-v3 + 128], v3);
}
