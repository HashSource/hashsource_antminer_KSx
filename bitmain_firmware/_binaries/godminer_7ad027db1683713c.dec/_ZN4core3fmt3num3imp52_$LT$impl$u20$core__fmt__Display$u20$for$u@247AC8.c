int __fastcall core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(unsigned int *a1, int a2)
{
  unsigned int v2; // r6
  unsigned int v3; // r9
  int v4; // r7
  int v5; // r4
  unsigned int v6; // r0
  unsigned __int16 v7; // r2
  _BYTE *v8; // r7
  unsigned int v9; // r3
  bool v10; // cf
  unsigned int v11; // r1
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  _BYTE v17[39]; // [sp+Dh] [bp-27h] BYREF

  v2 = *a1;
  v3 = a1[1];
  v4 = a2;
  if ( *(_QWORD *)a1 < 0x2710u )
  {
    v12 = 39;
    if ( v2 <= 0x63 )
      goto LABEL_6;
LABEL_9:
    v12 -= 2;
    v13 = (unsigned int)(5243 * ((unsigned __int16)v2 >> 2)) >> 17;
    *(_WORD *)&v17[v12] = word_29F267[(unsigned __int16)(v2 - 100 * v13)];
    if ( v13 >= 0xA )
      goto LABEL_7;
LABEL_10:
    v14 = v12 - 1;
    v17[v14] = v13 + 48;
    return core::fmt::Formatter::pad_integral(v4, 1, aLibraryCoreSrc, 0, (int)&v17[v14], 39 - v14);
  }
  v5 = 0;
  do
  {
    v6 = sub_25A4F8(v2, v3, 0x2710u);
    v7 = v2 - 10000 * v6;
    v8 = &v17[v5];
    v5 -= 4;
    v9 = (unsigned int)(5243 * (v7 >> 2)) >> 17;
    *(_WORD *)(v8 + 35) = word_29F267[v9];
    *(_WORD *)(v8 + 37) = word_29F267[(unsigned __int16)(v7 - 100 * v9)];
    v10 = __PAIR64__(v3, v2) <= 0x5F5E0FF;
    v2 = v6;
    v3 = v11;
  }
  while ( !v10 );
  v4 = a2;
  v12 = v5 + 39;
  v2 = v6;
  if ( v6 > 0x63 )
    goto LABEL_9;
LABEL_6:
  v13 = v2;
  if ( v2 < 0xA )
    goto LABEL_10;
LABEL_7:
  v14 = v12 - 2;
  *(_WORD *)&v17[v14] = word_29F267[v13];
  return core::fmt::Formatter::pad_integral(v4, 1, aLibraryCoreSrc, 0, (int)&v17[v14], 39 - v14);
}
