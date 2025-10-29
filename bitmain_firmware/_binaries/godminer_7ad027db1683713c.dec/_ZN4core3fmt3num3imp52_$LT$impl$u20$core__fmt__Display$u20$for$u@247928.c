int __fastcall core::fmt::num::imp::<impl core::fmt::Display for i64>::fmt(_DWORD *a1, int a2)
{
  int v2; // r4
  __int64 v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r6
  int v7; // r7
  unsigned int v8; // r0
  unsigned __int16 v9; // r2
  _BYTE *v10; // r4
  unsigned int v11; // r3
  bool v12; // cf
  unsigned int v13; // r1
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  _BYTE v20[39]; // [sp+15h] [bp-27h] BYREF

  v2 = a1[1];
  HIDWORD(v4) = v2 ^ (v2 >> 31);
  LODWORD(v4) = *a1 ^ (v2 >> 31);
  v6 = (v4 - __PAIR64__(v2 >> 31, v2 >> 31)) >> 32;
  v5 = v4 - (v2 >> 31);
  if ( v4 - __PAIR64__(v2 >> 31, v2 >> 31) < 0x2710 )
  {
    v14 = 39;
    if ( v5 <= 0x63 )
      goto LABEL_6;
LABEL_9:
    v14 -= 2;
    v15 = (unsigned int)(5243 * ((unsigned __int16)v5 >> 2)) >> 17;
    *(_WORD *)&v20[v14] = word_29F267[(unsigned __int16)(v5 - 100 * v15)];
    if ( v15 >= 0xA )
      goto LABEL_7;
LABEL_10:
    v16 = v14 - 1;
    v20[v16] = v15 + 48;
    return core::fmt::Formatter::pad_integral(a2, v2 > -1, aLibraryCoreSrc, 0, (int)&v20[v16], 39 - v16);
  }
  v19 = a2;
  v7 = 0;
  v18 = v2;
  do
  {
    v8 = sub_25A4F8(v5, v6, 0x2710u);
    v9 = v5 - 10000 * v8;
    v10 = &v20[v7];
    v7 -= 4;
    v11 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
    *(_WORD *)(v10 + 35) = word_29F267[v11];
    *(_WORD *)(v10 + 37) = word_29F267[(unsigned __int16)(v9 - 100 * v11)];
    v12 = __PAIR64__(v6, v5) <= 0x5F5E0FF;
    v5 = v8;
    v6 = v13;
  }
  while ( !v12 );
  v14 = v7 + 39;
  a2 = v19;
  v2 = v18;
  v5 = v8;
  if ( v8 > 0x63 )
    goto LABEL_9;
LABEL_6:
  v15 = v5;
  if ( v5 < 0xA )
    goto LABEL_10;
LABEL_7:
  v16 = v14 - 2;
  *(_WORD *)&v20[v16] = word_29F267[v15];
  return core::fmt::Formatter::pad_integral(a2, v2 > -1, aLibraryCoreSrc, 0, (int)&v20[v16], 39 - v16);
}
