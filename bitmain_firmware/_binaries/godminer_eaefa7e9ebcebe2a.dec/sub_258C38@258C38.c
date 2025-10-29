int __fastcall sub_258C38(__int64 *a1, _DWORD *a2)
{
  int v2; // r2
  __int64 v4; // r4
  int v5; // r0
  char v6; // r3
  int v7; // r2
  __int64 v8; // r4
  char v9; // r3
  int v10; // r2
  unsigned int v11; // r0
  _BYTE v12[128]; // [sp+8h] [bp-80h] BYREF

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *a1;
    v5 = 127;
    while ( v5 != -1 )
    {
      v6 = 87;
      if ( ((unsigned __int8)v4 & 0xFu) < 0xA )
        v6 = 48;
      v12[v5] = v6 + (v4 & 0xF);
      LODWORD(v4) = v4 >> 4;
      v7 = v4 | (HIDWORD(v4) >> 4);
      --v5;
      HIDWORD(v4) >>= 4;
      if ( !v7 )
      {
LABEL_15:
        v11 = v5 + 1;
        if ( v11 >= 0x81 )
          core::slice::index::slice_start_index_len_fail();
        return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[v11], 128 - v11);
      }
    }
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
      return core::fmt::num::imp::<impl core::fmt::Display for i64>::fmt(a1, a2);
    v8 = *a1;
    v5 = 127;
    while ( v5 != -1 )
    {
      v9 = 55;
      if ( ((unsigned __int8)v8 & 0xFu) < 0xA )
        v9 = 48;
      v12[v5] = v9 + (v8 & 0xF);
      LODWORD(v8) = v8 >> 4;
      v10 = v8 | (HIDWORD(v8) >> 4);
      --v5;
      HIDWORD(v8) >>= 4;
      if ( !v10 )
        goto LABEL_15;
    }
  }
  v11 = 0;
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[v11], 128 - v11);
}
