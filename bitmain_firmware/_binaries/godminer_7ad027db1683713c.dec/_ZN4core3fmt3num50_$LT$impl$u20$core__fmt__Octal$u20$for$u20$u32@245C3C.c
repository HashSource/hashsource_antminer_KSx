// Alternative name is '_ZN4core3fmt3num52_$LT$impl$u20$core..fmt..Octal$u20$for$u20$usize$GT$3fmt17hebc981eb6ed9e15aE'
// Alternative name is '_ZN4core3fmt3num50_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$3fmt17hf5a1886e8839941dE'
// Alternative name is '_ZN4core3fmt3num52_$LT$impl$u20$core..fmt..Octal$u20$for$u20$isize$GT$3fmt17ha752ac2b63adf889E'
int __fastcall core::fmt::num::<impl core::fmt::Octal for u32>::fmt(unsigned int *a1, int a2)
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
    v4[127] = v2 & 7 | 0x30;
    v2 >>= 3;
  }
  while ( v2 );
  if ( (unsigned int)(128 - v3) >= 0x81 )
    core::slice::index::slice_start_index_len_fail(128 - v3, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0o, 2u, (int)&v6[-v3 + 128], v3);
}
