// Alternative name is '_ZN4core3fmt3num50_$LT$impl$u20$core..fmt..Binary$u20$for$u20$i8$GT$3fmt17h09ad42e5617e6f1cE'
int __fastcall core::fmt::num::<impl core::fmt::Binary for u8>::fmt(unsigned __int8 *a1, int a2)
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
    core::slice::index::slice_start_index_len_fail(128 - v3, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0b, 2u, (int)&v6[-v3 + 128], v3);
}
