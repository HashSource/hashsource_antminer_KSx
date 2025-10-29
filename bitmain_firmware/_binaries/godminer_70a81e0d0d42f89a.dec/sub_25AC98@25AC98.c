int __fastcall sub_25AC98(unsigned int *a1, _DWORD *a2)
{
  int v2; // r2
  unsigned int v4; // r2
  int v5; // r3
  char v6; // r5
  unsigned int v7; // r2
  char v8; // r0
  _BYTE *v9; // r5
  _BYTE v10[128]; // [sp+8h] [bp-80h] BYREF

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *a1;
    v5 = 0;
    do
    {
      v6 = 87;
      if ( (v4 & 0xF) < 0xA )
        v6 = 48;
      v10[-v5++ + 127] = v6 + (v4 & 0xF);
      v4 >>= 4;
    }
    while ( v4 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
      return core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt(a1, a2);
    v7 = *a1;
    v5 = 0;
    do
    {
      v8 = 55;
      v9 = &v10[-v5];
      if ( (v7 & 0xF) < 0xA )
        v8 = 48;
      ++v5;
      v9[127] = v8 + (v7 & 0xF);
      v7 >>= 4;
    }
    while ( v7 );
  }
  if ( (unsigned int)(128 - v5) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v10[-v5 + 128], v5);
}
