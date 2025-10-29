int __fastcall <core::sync::atomic::AtomicIsize as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v2; // r7
  int v3; // r8
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r12
  int v7; // r2
  _BYTE *v8; // r12
  bool v9; // cc
  unsigned int v10; // r4
  unsigned __int16 v11; // r5
  unsigned int v12; // r0
  unsigned int v13; // r2
  int v14; // r3
  int v15; // r3
  char v16; // r5
  _BYTE *v17; // r6
  char v18; // r4
  bool v19; // zf
  int v20; // r0
  _BYTE *v21; // r0
  char v22; // r5
  _BYTE v24[128]; // [sp+Ch] [bp-80h] BYREF

  v2 = *a1;
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 24);
  if ( (v4 & 0x10) != 0 )
  {
    v15 = 0;
    do
    {
      v16 = v2 & 0xF;
      v17 = &v24[-v15];
      v18 = 87;
      ++v15;
      if ( (v2 & 0xFu) < 0xA )
        v18 = 48;
      v19 = (unsigned int)v2 >> 4 == 0;
      v2 = (unsigned int)v2 >> 4;
      v17[127] = v18 + v16;
    }
    while ( !v19 );
    v20 = 128 - v15;
    if ( (unsigned int)(128 - v15) < 0x81 )
    {
      v21 = &v24[-v15];
      return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)(v21 + 128), v15);
    }
LABEL_29:
    core::slice::index::slice_start_index_len_fail(v20, 128, (int)&off_2CF1FC);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v15 = 0;
    do
    {
      v22 = 55;
      if ( (v2 & 0xFu) < 0xA )
        v22 = 48;
      v24[-v15++ + 127] = v22 + (v2 & 0xF);
      v2 = (unsigned int)v2 >> 4;
    }
    while ( v2 );
    v20 = 128 - v15;
    if ( (unsigned int)(128 - v15) < 0x81 )
    {
      v21 = &v24[-v15];
      return core::fmt::Formatter::pad_integral(a2, 1, a0x_1, 2u, (int)(v21 + 128), v15);
    }
    goto LABEL_29;
  }
  v5 = *a1;
  if ( v2 < 0 )
    v5 = -v2;
  v6 = 39;
  if ( v5 < 0x2710 )
  {
    v10 = v5;
    if ( v5 <= 0x63 )
      goto LABEL_9;
LABEL_26:
    v6 -= 2;
    v13 = (unsigned int)(5243 * ((unsigned __int16)v10 >> 2)) >> 17;
    *(_WORD *)&v24[v6] = word_29F267[(unsigned __int16)(v10 - 100 * v13)];
    if ( v13 >= 0xA )
      goto LABEL_10;
LABEL_27:
    v14 = v6 - 1;
    v24[v6 - 1] = v13 + 48;
    return core::fmt::Formatter::pad_integral(v3, v2 >= 0, aLibraryCoreSrc, 0, (int)&v24[v14], 39 - v14);
  }
  v7 = 0;
  do
  {
    v8 = &v24[v7];
    v7 -= 4;
    v9 = v5 > 0x5F5E0FF;
    v10 = v5 / 0x2710;
    v11 = v5 - 10000 * v10;
    v5 = v10;
    v12 = (unsigned int)(5243 * (v11 >> 2)) >> 17;
    *(_WORD *)(v8 + 35) = word_29F267[v12];
    *(_WORD *)(v8 + 37) = word_29F267[(unsigned __int16)(v11 - 100 * v12)];
  }
  while ( v9 );
  v3 = a2;
  v6 = v7 + 39;
  if ( v10 > 0x63 )
    goto LABEL_26;
LABEL_9:
  v13 = v10;
  if ( v10 < 0xA )
    goto LABEL_27;
LABEL_10:
  v14 = v6 - 2;
  *(_WORD *)&v24[v6 - 2] = word_29F267[v13];
  return core::fmt::Formatter::pad_integral(v3, v2 >= 0, aLibraryCoreSrc, 0, (int)&v24[v14], 39 - v14);
}
