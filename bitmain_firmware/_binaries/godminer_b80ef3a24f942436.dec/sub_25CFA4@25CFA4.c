int __fastcall sub_25CFA4(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  int v4; // r0
  _DWORD *v5; // r7
  unsigned int v6; // r6
  int v7; // r4
  __int64 v8; // r0
  unsigned __int16 v9; // r2
  _BYTE *v10; // r7
  unsigned int v11; // r3
  bool v12; // cf
  int v13; // r1
  int v14; // r0
  char v15; // r3
  int v16; // r2
  char v17; // r3
  int v18; // r2
  unsigned int v19; // r0
  _BYTE v22[128]; // [sp+Ch] [bp-80h] BYREF

  v4 = a3[6];
  v5 = a3;
  v6 = a2;
  if ( (v4 & 0x10) != 0 )
  {
    v14 = 127;
    while ( v14 != -1 )
    {
      v15 = 87;
      if ( (a1 & 0xF) < 0xA )
        v15 = 48;
      v22[v14] = v15 + (a1 & 0xF);
      a1 = (a1 >> 4) | (v6 << 28);
      v16 = a1 | (v6 >> 4);
      --v14;
      v6 >>= 4;
      if ( !v16 )
      {
LABEL_21:
        v19 = v14 + 1;
        if ( v19 >= 0x81 )
          core::slice::index::slice_start_index_len_fail();
        return core::fmt::Formatter::pad_integral(v5, 1, a0x_1, 2u, (int)&v22[v19], 128 - v19);
      }
    }
  }
  else
  {
    if ( (v4 & 0x20) == 0 )
    {
      if ( __PAIR64__(a2, a1) < 0x2710 )
      {
        HIDWORD(v8) = 39;
        if ( a1 <= 0x63 )
          goto LABEL_8;
      }
      else
      {
        v7 = 0;
        do
        {
          v8 = sub_2704F8(a1, v6, 10000, 0);
          v9 = a1 - 10000 * v8;
          v10 = &v22[v7];
          v7 -= 4;
          v11 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
          *(_WORD *)(v10 + 35) = word_2BF7B7[v11];
          *(_WORD *)(v10 + 37) = word_2BF7B7[(unsigned __int16)(v9 - 100 * v11)];
          v12 = __PAIR64__(v6, a1) <= 0x5F5E0FF;
          v6 = HIDWORD(v8);
          a1 = v8;
        }
        while ( !v12 );
        v5 = a3;
        HIDWORD(v8) = v7 + 39;
        a1 = v8;
        if ( (unsigned int)v8 <= 0x63 )
        {
LABEL_8:
          LODWORD(v8) = a1;
          if ( a1 >= 0xA )
          {
LABEL_9:
            v13 = HIDWORD(v8) - 2;
            *(_WORD *)&v22[v13] = word_2BF7B7[(_DWORD)v8];
            return core::fmt::Formatter::pad_integral(v5, 1, aLibraryCoreSrc, 0, (int)&v22[v13], 39 - v13);
          }
LABEL_27:
          v13 = HIDWORD(v8) - 1;
          v22[v13] = v8 + 48;
          return core::fmt::Formatter::pad_integral(v5, 1, aLibraryCoreSrc, 0, (int)&v22[v13], 39 - v13);
        }
      }
      HIDWORD(v8) -= 2;
      LODWORD(v8) = (unsigned int)(5243 * ((unsigned __int16)a1 >> 2)) >> 17;
      *(_WORD *)&v22[HIDWORD(v8)] = word_2BF7B7[(unsigned __int16)(a1 - 100 * v8)];
      if ( (unsigned int)v8 >= 0xA )
        goto LABEL_9;
      goto LABEL_27;
    }
    v14 = 127;
    while ( v14 != -1 )
    {
      v17 = 55;
      if ( (a1 & 0xF) < 0xA )
        v17 = 48;
      v22[v14] = v17 + (a1 & 0xF);
      a1 = (a1 >> 4) | (v6 << 28);
      v18 = a1 | (v6 >> 4);
      --v14;
      v6 >>= 4;
      if ( !v18 )
        goto LABEL_21;
    }
  }
  v19 = 0;
  return core::fmt::Formatter::pad_integral(v5, 1, a0x_1, 2u, (int)&v22[v19], 128 - v19);
}
