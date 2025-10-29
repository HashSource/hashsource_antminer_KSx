// Alternative name is '_ZN4core3fmt3num53_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$u16$GT$3fmt17h77391916ecb44885E'
int __fastcall core::fmt::num::<impl core::fmt::LowerHex for i16>::fmt(int a1, _DWORD *a2)
{
  int v2; // r3
  char v3; // r4
  _BYTE v5[128]; // [sp+8h] [bp-80h] BYREF

  LOWORD(a1) = *(_WORD *)a1;
  v2 = 0;
  do
  {
    v3 = 87;
    if ( (a1 & 0xFu) < 0xA )
      v3 = 48;
    v5[-v2 + 127] = v3 + (a1 & 0xF);
    a1 = (unsigned __int16)a1 >> 4;
    ++v2;
  }
  while ( a1 );
  if ( (unsigned int)(128 - v2) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v5[-v2 + 128], v2);
}
