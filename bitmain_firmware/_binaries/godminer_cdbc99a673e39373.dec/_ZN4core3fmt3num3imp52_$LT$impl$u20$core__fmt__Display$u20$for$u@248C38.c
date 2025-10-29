int __fastcall core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // r6
  unsigned int v3; // r9
  _DWORD *v4; // r7
  int v5; // r4
  __int64 v6; // r0
  unsigned __int16 v7; // r2
  _BYTE *v8; // r7
  unsigned int v9; // r3
  bool v10; // cf
  int v11; // r1
  _BYTE v14[39]; // [sp+Dh] [bp-27h] BYREF

  v2 = *a1;
  v3 = a1[1];
  v4 = a2;
  if ( *(_QWORD *)a1 < 0x2710u )
  {
    HIDWORD(v6) = 39;
    if ( v2 <= 0x63 )
      goto LABEL_6;
LABEL_9:
    HIDWORD(v6) -= 2;
    LODWORD(v6) = (unsigned int)(5243 * ((unsigned __int16)v2 >> 2)) >> 17;
    *(_WORD *)&v14[HIDWORD(v6)] = word_2A07B7[(unsigned __int16)(v2 - 100 * v6)];
    if ( (unsigned int)v6 >= 0xA )
      goto LABEL_7;
LABEL_10:
    v11 = HIDWORD(v6) - 1;
    v14[v11] = v6 + 48;
    return core::fmt::Formatter::pad_integral(v4, 1, aLibraryCoreSrc, 0, (int)&v14[v11], 39 - v11);
  }
  v5 = 0;
  do
  {
    v6 = sub_25B668(v2, v3, 10000, 0);
    v7 = v2 - 10000 * v6;
    v8 = &v14[v5];
    v5 -= 4;
    v9 = (unsigned int)(5243 * (v7 >> 2)) >> 17;
    *(_WORD *)(v8 + 35) = word_2A07B7[v9];
    *(_WORD *)(v8 + 37) = word_2A07B7[(unsigned __int16)(v7 - 100 * v9)];
    v10 = __PAIR64__(v3, v2) <= 0x5F5E0FF;
    v3 = HIDWORD(v6);
    v2 = v6;
  }
  while ( !v10 );
  v4 = a2;
  HIDWORD(v6) = v5 + 39;
  v2 = v6;
  if ( (unsigned int)v6 > 0x63 )
    goto LABEL_9;
LABEL_6:
  LODWORD(v6) = v2;
  if ( v2 < 0xA )
    goto LABEL_10;
LABEL_7:
  v11 = HIDWORD(v6) - 2;
  *(_WORD *)&v14[v11] = word_2A07B7[(_DWORD)v6];
  return core::fmt::Formatter::pad_integral(v4, 1, aLibraryCoreSrc, 0, (int)&v14[v11], 39 - v11);
}
