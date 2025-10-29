int __fastcall sub_25C538(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r0
  unsigned __int16 v6; // r2
  unsigned int v7; // r3
  int v8; // r2
  int v9; // r3
  char v10; // r4
  _BYTE *v11; // lr
  char v12; // r2
  int v14; // r3
  _BYTE v15[35]; // [sp+8h] [bp-80h] BYREF
  unsigned __int16 v16; // [sp+2Bh] [bp-5Dh]
  unsigned __int16 v17; // [sp+2Dh] [bp-5Bh]

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v9 = 0;
    do
    {
      v10 = 87;
      if ( (a1 & 0xFu) < 0xA )
        v10 = 48;
      v15[-v9 + 127] = v10 + (a1 & 0xF);
      a1 = (unsigned __int16)a1 >> 4;
      ++v9;
    }
    while ( a1 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
    {
      v3 = (__int16)a1;
      v4 = -(__int16)a1;
      if ( (__int16)a1 > -1 )
        v4 = (unsigned __int16)a1;
      if ( v4 > 0x270F )
      {
        v5 = (unsigned int)(839 * ((unsigned __int16)v4 >> 4)) >> 19;
        v6 = v4 - 10000 * v5;
        v7 = (unsigned int)(5243 * (v6 >> 2)) >> 17;
        v16 = word_2BF7B7[v7];
        v17 = word_2BF7B7[(unsigned __int16)(v6 - 100 * v7)];
        v8 = 35;
LABEL_22:
        v14 = v8 - 1;
        v15[v8 - 1] = v5 + 48;
        return core::fmt::Formatter::pad_integral(a2, v3 > -1, aLibraryCoreSrc, 0, (int)&v15[v14], 39 - v14);
      }
      v8 = 39;
      if ( v4 <= 0x63 )
      {
        v5 = v4;
        if ( v4 < 0xA )
          goto LABEL_22;
      }
      else
      {
        v5 = (unsigned int)(5243 * ((unsigned __int16)v4 >> 2)) >> 17;
        v17 = word_2BF7B7[(unsigned __int16)(v4 - 100 * v5)];
        v8 = 37;
        if ( v5 < 0xA )
          goto LABEL_22;
      }
      v14 = v8 - 2;
      *(_WORD *)&v15[v8 - 2] = word_2BF7B7[v5];
      return core::fmt::Formatter::pad_integral(a2, v3 > -1, aLibraryCoreSrc, 0, (int)&v15[v14], 39 - v14);
    }
    v9 = 0;
    do
    {
      v11 = &v15[-v9];
      v12 = 55;
      if ( (a1 & 0xFu) < 0xA )
        v12 = 48;
      ++v9;
      v11[127] = v12 + (a1 & 0xF);
      a1 = (unsigned __int16)a1 >> 4;
    }
    while ( a1 );
  }
  if ( (unsigned int)(128 - v9) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v15[-v9 + 128], v9);
}
