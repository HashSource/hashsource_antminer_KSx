int __fastcall core::fmt::num::imp::<impl core::fmt::Display for i64>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  __int64 v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r6
  int v7; // r7
  __int64 v8; // r0
  unsigned __int16 v9; // r2
  _BYTE *v10; // r4
  unsigned int v11; // r3
  bool v12; // cf
  int v13; // r1
  int v15; // [sp+Ch] [bp-30h]
  _DWORD *v16; // [sp+10h] [bp-2Ch]
  _BYTE v17[39]; // [sp+15h] [bp-27h] BYREF

  v2 = a1[1];
  HIDWORD(v4) = v2 ^ (v2 >> 31);
  LODWORD(v4) = *a1 ^ (v2 >> 31);
  v6 = (v4 - __PAIR64__(v2 >> 31, v2 >> 31)) >> 32;
  v5 = v4 - (v2 >> 31);
  if ( v4 - __PAIR64__(v2 >> 31, v2 >> 31) < 0x2710 )
  {
    HIDWORD(v8) = 39;
    if ( v5 <= 0x63 )
      goto LABEL_6;
LABEL_9:
    HIDWORD(v8) -= 2;
    LODWORD(v8) = (unsigned int)(5243 * ((unsigned __int16)v5 >> 2)) >> 17;
    *(_WORD *)&v17[HIDWORD(v8)] = word_2A07B7[(unsigned __int16)(v5 - 100 * v8)];
    if ( (unsigned int)v8 >= 0xA )
      goto LABEL_7;
LABEL_10:
    v13 = HIDWORD(v8) - 1;
    v17[v13] = v8 + 48;
    return core::fmt::Formatter::pad_integral(a2, v2 > -1, aLibraryCoreSrc, 0, (int)&v17[v13], 39 - v13);
  }
  v16 = a2;
  v7 = 0;
  v15 = v2;
  do
  {
    v8 = sub_25B668(v5, v6, 10000, 0);
    v9 = v5 - 10000 * v8;
    v10 = &v17[v7];
    v7 -= 4;
    v11 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
    *(_WORD *)(v10 + 35) = word_2A07B7[v11];
    *(_WORD *)(v10 + 37) = word_2A07B7[(unsigned __int16)(v9 - 100 * v11)];
    v12 = __PAIR64__(v6, v5) <= 0x5F5E0FF;
    v6 = HIDWORD(v8);
    v5 = v8;
  }
  while ( !v12 );
  HIDWORD(v8) = v7 + 39;
  a2 = v16;
  v2 = v15;
  v5 = v8;
  if ( (unsigned int)v8 > 0x63 )
    goto LABEL_9;
LABEL_6:
  LODWORD(v8) = v5;
  if ( v5 < 0xA )
    goto LABEL_10;
LABEL_7:
  v13 = HIDWORD(v8) - 2;
  *(_WORD *)&v17[v13] = word_2A07B7[(_DWORD)v8];
  return core::fmt::Formatter::pad_integral(a2, v2 > -1, aLibraryCoreSrc, 0, (int)&v17[v13], 39 - v13);
}
