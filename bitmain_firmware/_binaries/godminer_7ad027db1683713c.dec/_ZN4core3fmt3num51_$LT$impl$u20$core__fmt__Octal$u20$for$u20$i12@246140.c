// Alternative name is '_ZN4core3fmt3num51_$LT$impl$u20$core..fmt..Octal$u20$for$u20$u128$GT$3fmt17h8eb69095aefe5d61E'
int __fastcall core::fmt::num::<impl core::fmt::Octal for i128>::fmt(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // lr
  int v6; // r0
  int v7; // r6
  bool v8; // zf
  unsigned int v9; // r0
  _BYTE v11[128]; // [sp+8h] [bp-80h] BYREF

  v2 = a1[2];
  v3 = a1[3];
  v4 = *a1;
  v5 = a1[1];
  v6 = 127;
  do
  {
    if ( v6 == -1 )
    {
      v9 = 0;
      return core::fmt::Formatter::pad_integral(a2, 1, a0o, 2u, (int)&v11[v9], 128 - v9);
    }
    v11[v6] = v4 & 7 | 0x30;
    v4 = (v4 >> 3) | (v5 << 29);
    v5 = (v5 >> 3) | (v2 << 29);
    v7 = (v2 >> 3) | (v3 << 29);
    --v6;
    v8 = (v4 | v7 | v5 | (v3 >> 3)) == 0;
    v3 >>= 3;
    v2 = v7;
  }
  while ( !v8 );
  v9 = v6 + 1;
  if ( v9 >= 0x81 )
    core::slice::index::slice_start_index_len_fail(v9, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0o, 2u, (int)&v11[v9], 128 - v9);
}
