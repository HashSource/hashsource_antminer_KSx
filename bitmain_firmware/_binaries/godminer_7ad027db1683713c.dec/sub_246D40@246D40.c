int __fastcall sub_246D40(unsigned int *a1, int a2)
{
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r12
  int v5; // r0
  _BYTE *v6; // r4
  bool v7; // cc
  unsigned int v8; // r2
  unsigned __int16 v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r0
  int v12; // r3
  unsigned int v13; // r2
  int v14; // r3
  char v15; // r4
  unsigned int v16; // r2
  char v17; // r4
  _BYTE v19[128]; // [sp+Ch] [bp-80h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  if ( (v2 & 0x10) != 0 )
  {
    v13 = *a1;
    v14 = 0;
    do
    {
      v15 = 87;
      if ( (v13 & 0xF) < 0xA )
        v15 = 48;
      v19[-v14++ + 127] = v15 + (v13 & 0xF);
      v13 >>= 4;
    }
    while ( v13 );
  }
  else
  {
    if ( (v2 & 0x20) == 0 )
    {
      v3 = *a1;
      v4 = 39;
      if ( *a1 < 0x2710 )
      {
        v8 = *a1;
        if ( v3 <= 0x63 )
          goto LABEL_7;
      }
      else
      {
        v5 = 0;
        do
        {
          v6 = &v19[v5];
          v5 -= 4;
          v7 = v3 > 0x5F5E0FF;
          v8 = v3 / 0x2710;
          v9 = v3 - 10000 * v8;
          v3 = v8;
          v10 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
          *(_WORD *)(v6 + 35) = word_29F267[v10];
          *(_WORD *)(v6 + 37) = word_29F267[(unsigned __int16)(v9 - 100 * v10)];
        }
        while ( v7 );
        v4 = v5 + 39;
        if ( v8 <= 0x63 )
        {
LABEL_7:
          v11 = v8;
          if ( v8 >= 0xA )
          {
LABEL_8:
            v12 = v4 - 2;
            *(_WORD *)&v19[v4 - 2] = word_29F267[v11];
            return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v19[v12], 39 - v12);
          }
LABEL_22:
          v12 = v4 - 1;
          v19[v4 - 1] = v11 + 48;
          return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v19[v12], 39 - v12);
        }
      }
      v4 -= 2;
      v11 = (unsigned int)(5243 * ((unsigned __int16)v8 >> 2)) >> 17;
      *(_WORD *)&v19[v4] = word_29F267[(unsigned __int16)(v8 - 100 * v11)];
      if ( v11 >= 0xA )
        goto LABEL_8;
      goto LABEL_22;
    }
    v16 = *a1;
    v14 = 0;
    do
    {
      v17 = 55;
      if ( (v16 & 0xF) < 0xA )
        v17 = 48;
      v19[-v14++ + 127] = v17 + (v16 & 0xF);
      v16 >>= 4;
    }
    while ( v16 );
  }
  if ( (unsigned int)(128 - v14) >= 0x81 )
    core::slice::index::slice_start_index_len_fail(128 - v14, 128, (int)&off_2CF1FC);
  return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)&v19[-v14 + 128], v14);
}
