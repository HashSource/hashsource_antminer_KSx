int __fastcall sub_25975C(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r3
  char v5; // r4
  _BYTE *v6; // lr
  char v7; // r2
  _BYTE v9[37]; // [sp+8h] [bp-80h] BYREF
  unsigned __int16 v10; // [sp+2Dh] [bp-5Bh]

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v4 = 0;
    do
    {
      v5 = 87;
      if ( (a1 & 0xFu) < 0xA )
        v5 = 48;
      v9[-v4 + 127] = v5 + (a1 & 0xF);
      a1 = (unsigned __int8)a1 >> 4;
      ++v4;
    }
    while ( a1 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
    {
      if ( (unsigned __int8)a1 <= 0x63u )
      {
        v3 = 38;
        if ( (unsigned __int8)a1 >= 0xAu )
        {
          v3 = 37;
          v10 = word_2B4BB7[(unsigned __int8)a1];
          return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v9[v3], 39 - v3);
        }
      }
      else
      {
        v3 = 36;
        v10 = word_2B4BB7[(unsigned __int8)a1 % 0x64u];
        LOBYTE(a1) = (unsigned __int8)a1 / 0x64u;
      }
      v9[v3] = a1 + 48;
      return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v9[v3], 39 - v3);
    }
    v4 = 0;
    do
    {
      v6 = &v9[-v4];
      v7 = 55;
      if ( (a1 & 0xFu) < 0xA )
        v7 = 48;
      ++v4;
      v6[127] = v7 + (a1 & 0xF);
      a1 = (unsigned __int8)a1 >> 4;
    }
    while ( a1 );
  }
  if ( (unsigned int)(128 - v4) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v9[-v4 + 128], v4);
}
