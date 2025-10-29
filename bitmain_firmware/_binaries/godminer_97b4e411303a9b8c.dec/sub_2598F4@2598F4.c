int __fastcall sub_2598F4(int a1, _DWORD *a2)
{
  int v2; // r2
  unsigned int v3; // r2
  unsigned __int16 v4; // r0
  unsigned int v5; // r3
  unsigned __int16 v6; // r0
  int v7; // r3
  int v8; // r3
  char v9; // r4
  _BYTE *v10; // lr
  char v11; // r2
  unsigned __int16 *v13; // r2
  int v14; // r0
  _BYTE v15[35]; // [sp+8h] [bp-80h] BYREF
  unsigned __int16 v16; // [sp+2Bh] [bp-5Dh]
  unsigned __int16 v17; // [sp+2Dh] [bp-5Bh]

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v8 = 0;
    do
    {
      v9 = 87;
      if ( (a1 & 0xFu) < 0xA )
        v9 = 48;
      v15[-v8 + 127] = v9 + (a1 & 0xF);
      a1 = (unsigned __int16)a1 >> 4;
      ++v8;
    }
    while ( a1 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
    {
      if ( (unsigned __int16)a1 > 0x270Fu )
      {
        v3 = (unsigned int)(839 * ((unsigned __int16)a1 >> 4)) >> 19;
        v4 = a1 - 10000 * v3;
        v5 = (unsigned int)(5243 * (v4 >> 2)) >> 17;
        v6 = v4 - 100 * v5;
        v16 = word_2B4BB7[v5];
        v7 = 35;
        v17 = word_2B4BB7[v6];
LABEL_20:
        v14 = v7 - 1;
        v15[v7 - 1] = v3 + 48;
        return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v15[v14], 39 - v14);
      }
      v7 = 39;
      if ( (unsigned __int16)a1 <= 0x63u )
      {
        LOBYTE(v3) = a1;
        a1 = (unsigned __int16)a1;
        if ( (unsigned __int16)a1 < 0xAu )
          goto LABEL_20;
      }
      else
      {
        v3 = (unsigned int)(5243 * ((unsigned __int16)a1 >> 2)) >> 17;
        v7 = 37;
        v17 = word_2B4BB7[(unsigned __int16)(a1 - 100 * v3)];
        a1 = (unsigned __int16)v3;
        if ( (unsigned __int16)v3 < 0xAu )
          goto LABEL_20;
      }
      v13 = &word_2B4BB7[a1];
      v14 = v7 - 2;
      *(_WORD *)&v15[v7 - 2] = *v13;
      return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v15[v14], 39 - v14);
    }
    v8 = 0;
    do
    {
      v10 = &v15[-v8];
      v11 = 55;
      if ( (a1 & 0xFu) < 0xA )
        v11 = 48;
      ++v8;
      v10[127] = v11 + (a1 & 0xF);
      a1 = (unsigned __int16)a1 >> 4;
    }
    while ( a1 );
  }
  if ( (unsigned int)(128 - v8) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v15[-v8 + 128], v8);
}
