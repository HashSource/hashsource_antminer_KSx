int __fastcall sub_246FA4(unsigned int a1, unsigned int a2, int a3)
{
  int v4; // r0
  int v5; // r7
  unsigned int v6; // r6
  int v7; // r4
  unsigned int v8; // r0
  unsigned __int16 v9; // r2
  _BYTE *v10; // r7
  unsigned int v11; // r3
  bool v12; // cf
  unsigned int v13; // r1
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r0
  char v18; // r3
  unsigned int v19; // r2
  char v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r0
  _BYTE v25[128]; // [sp+Ch] [bp-80h] BYREF

  v4 = *(_DWORD *)(a3 + 24);
  v5 = a3;
  v6 = a2;
  if ( (v4 & 0x10) != 0 )
  {
    v17 = 127;
    while ( v17 != -1 )
    {
      v18 = 87;
      if ( (a1 & 0xF) < 0xA )
        v18 = 48;
      v25[v17] = v18 + (a1 & 0xF);
      a1 = (a1 >> 4) | (v6 << 28);
      v19 = a1 | (v6 >> 4);
      --v17;
      v6 >>= 4;
      if ( !v19 )
      {
LABEL_21:
        v22 = v17 + 1;
        if ( v22 >= 0x81 )
          core::slice::index::slice_start_index_len_fail(v22, 128, (int)&off_2CF1FC);
        return core::fmt::Formatter::pad_integral(v5, 1, a0x_1, 2u, (int)&v25[v22], 128 - v22);
      }
    }
  }
  else
  {
    if ( (v4 & 0x20) == 0 )
    {
      if ( __PAIR64__(a2, a1) < 0x2710 )
      {
        v14 = 39;
        if ( a1 <= 0x63 )
          goto LABEL_8;
      }
      else
      {
        v7 = 0;
        do
        {
          v8 = sub_25A4F8(a1, v6, 0x2710u);
          v9 = a1 - 10000 * v8;
          v10 = &v25[v7];
          v7 -= 4;
          v11 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
          *(_WORD *)(v10 + 35) = word_29F267[v11];
          *(_WORD *)(v10 + 37) = word_29F267[(unsigned __int16)(v9 - 100 * v11)];
          v12 = __PAIR64__(v6, a1) <= 0x5F5E0FF;
          a1 = v8;
          v6 = v13;
        }
        while ( !v12 );
        v5 = a3;
        v14 = v7 + 39;
        a1 = v8;
        if ( v8 <= 0x63 )
        {
LABEL_8:
          v15 = a1;
          if ( a1 >= 0xA )
          {
LABEL_9:
            v16 = v14 - 2;
            *(_WORD *)&v25[v16] = word_29F267[v15];
            return core::fmt::Formatter::pad_integral(v5, 1, aLibraryCoreSrc, 0, (int)&v25[v16], 39 - v16);
          }
LABEL_27:
          v16 = v14 - 1;
          v25[v16] = v15 + 48;
          return core::fmt::Formatter::pad_integral(v5, 1, aLibraryCoreSrc, 0, (int)&v25[v16], 39 - v16);
        }
      }
      v14 -= 2;
      v15 = (unsigned int)(5243 * ((unsigned __int16)a1 >> 2)) >> 17;
      *(_WORD *)&v25[v14] = word_29F267[(unsigned __int16)(a1 - 100 * v15)];
      if ( v15 >= 0xA )
        goto LABEL_9;
      goto LABEL_27;
    }
    v17 = 127;
    while ( v17 != -1 )
    {
      v20 = 55;
      if ( (a1 & 0xF) < 0xA )
        v20 = 48;
      v25[v17] = v20 + (a1 & 0xF);
      a1 = (a1 >> 4) | (v6 << 28);
      v21 = a1 | (v6 >> 4);
      --v17;
      v6 >>= 4;
      if ( !v21 )
        goto LABEL_21;
    }
  }
  v22 = 0;
  return core::fmt::Formatter::pad_integral(v5, 1, a0x_1, 2u, (int)&v25[v22], 128 - v22);
}
