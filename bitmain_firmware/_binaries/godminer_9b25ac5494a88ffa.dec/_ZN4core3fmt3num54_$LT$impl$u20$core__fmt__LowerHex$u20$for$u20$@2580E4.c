// Alternative name is '_ZN4core3fmt3num54_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$u128$GT$3fmt17h203f9d3949f789abE'
int __fastcall core::fmt::num::<impl core::fmt::LowerHex for i128>::fmt(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // lr
  unsigned int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r4
  int v6; // r0
  char v7; // r6
  int v8; // r5
  bool v9; // zf
  unsigned int v10; // r0
  _BYTE v12[128]; // [sp+8h] [bp-80h] BYREF

  v2 = *a1;
  v3 = a1[3];
  v4 = a1[1];
  v5 = a1[2];
  v6 = 127;
  do
  {
    if ( v6 == -1 )
    {
      v10 = 0;
      return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[v10], 128 - v10);
    }
    v7 = 87;
    if ( (v2 & 0xF) < 0xA )
      v7 = 48;
    v12[v6] = v7 + (v2 & 0xF);
    v2 = (v2 >> 4) | (v4 << 28);
    v4 = (v4 >> 4) | (v5 << 28);
    v8 = (v5 >> 4) | (v3 << 28);
    v9 = (v2 | v8 | v4 | (v3 >> 4)) == 0;
    --v6;
    v3 >>= 4;
    v5 = v8;
  }
  while ( !v9 );
  v10 = v6 + 1;
  if ( v10 >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[v10], 128 - v10);
}
