int __fastcall sub_25C38C(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  unsigned int v4; // r2
  unsigned __int16 *v5; // r0
  int v6; // r0
  int v7; // r3
  char v8; // r4
  _BYTE *v9; // lr
  char v10; // r2
  _BYTE v12[37]; // [sp+8h] [bp-80h] BYREF
  unsigned __int16 v13; // [sp+2Dh] [bp-5Bh]

  v2 = a2[6];
  if ( (v2 & 0x10) != 0 )
  {
    v7 = 0;
    do
    {
      v8 = 87;
      if ( (a1 & 0xFu) < 0xA )
        v8 = 48;
      v12[-v7 + 127] = v8 + (a1 & 0xF);
      a1 = (unsigned __int8)a1 >> 4;
      ++v7;
    }
    while ( a1 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
    {
      v3 = (char)a1;
      v4 = -(char)a1;
      if ( (char)a1 > -1 )
        v4 = (unsigned __int8)a1;
      if ( v4 <= 0x63 )
      {
        v6 = 38;
        if ( v4 >= 0xA )
        {
          v13 = word_2BF7B7[v4];
          v6 = 37;
          return core::fmt::Formatter::pad_integral(a2, v3 > -1, aLibraryCoreSrc, 0, (int)&v12[v6], 39 - v6);
        }
      }
      else
      {
        v5 = &word_2BF7B7[(unsigned __int8)v4 % 0x64u];
        LOBYTE(v4) = 1;
        v13 = *v5;
        v6 = 36;
      }
      v12[v6] = v4 + 48;
      return core::fmt::Formatter::pad_integral(a2, v3 > -1, aLibraryCoreSrc, 0, (int)&v12[v6], 39 - v6);
    }
    v7 = 0;
    do
    {
      v9 = &v12[-v7];
      v10 = 55;
      if ( (a1 & 0xFu) < 0xA )
        v10 = 48;
      ++v7;
      v9[127] = v10 + (a1 & 0xF);
      a1 = (unsigned __int8)a1 >> 4;
    }
    while ( a1 );
  }
  if ( (unsigned int)(128 - v7) >= 0x81 )
    core::slice::index::slice_start_index_len_fail();
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v12[-v7 + 128], v7);
}
