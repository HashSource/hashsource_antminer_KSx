// Alternative name is '_ZN4core3fmt3num52_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i8$GT$3fmt17he862dfb255c20b69E'
int __fastcall core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt(unsigned __int8 *a1, int a2)
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
