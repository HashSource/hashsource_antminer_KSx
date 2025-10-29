// Alternative name is '_ZN4core3fmt3num53_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$u64$GT$3fmt17he71ce529baf9d2ceE'
int __fastcall core::fmt::num::<impl core::fmt::UpperHex for i64>::fmt(__int64 *a1, int a2)
{
  __int64 v2; // r4
  int v3; // r0
  char v4; // r3
  int v5; // r2
  unsigned int v6; // r0
  _BYTE v8[128]; // [sp+8h] [bp-80h] BYREF

  v2 = *a1;
  v3 = 127;
  do
  {
    if ( v3 == -1 )
    {
      v6 = 0;
      return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v8[v6], 128 - v6);
    }
    v4 = 55;
    if ( ((unsigned __int8)v2 & 0xFu) < 0xA )
      v4 = 48;
    v8[v3] = v4 + (v2 & 0xF);
    LODWORD(v2) = v2 >> 4;
    v5 = v2 | (HIDWORD(v2) >> 4);
    --v3;
    HIDWORD(v2) >>= 4;
  }
  while ( v5 );
  v6 = v3 + 1;
  if ( v6 >= 0x81 )
    core::slice::index::slice_start_index_len_fail(v6, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v8[v6], 128 - v6);
}
