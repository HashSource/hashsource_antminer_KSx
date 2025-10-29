// Alternative name is '_ZN4core3fmt3num3imp54_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$3fmt17h7dbe151992bc3eefE'
int __fastcall core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt(unsigned int *a1, _DWORD *a2)
{
  signed int v2; // lr
  _DWORD *v3; // r6
  int v4; // r2
  unsigned int v5; // r0
  int v6; // r2
  _BYTE *v7; // r12
  bool v8; // cc
  unsigned int v9; // r3
  unsigned __int16 v10; // r6
  unsigned int v11; // r7
  unsigned int v12; // r0
  int v13; // r1
  _BYTE v15[39]; // [sp+Dh] [bp-27h] BYREF

  v2 = *a1;
  v3 = a2;
  v4 = 39;
  v5 = *a1;
  if ( (v5 & 0x80000000) != 0 )
    v5 = -v2;
  if ( v5 < 0x2710 )
  {
    v9 = v5;
    if ( v5 <= 0x63 )
      goto LABEL_7;
LABEL_10:
    v4 -= 2;
    v12 = (unsigned int)(5243 * ((unsigned __int16)v9 >> 2)) >> 17;
    *(_WORD *)&v15[v4] = word_2B3A17[(unsigned __int16)(v9 - 100 * v12)];
    if ( v12 >= 0xA )
      goto LABEL_8;
LABEL_11:
    v13 = v4 - 1;
    v15[v4 - 1] = v12 + 48;
    return core::fmt::Formatter::pad_integral(v3, v2 >= 0, aLibraryCoreSrc, 0, (int)&v15[v13], 39 - v13);
  }
  v6 = 0;
  do
  {
    v7 = &v15[v6];
    v6 -= 4;
    v8 = v5 > 0x5F5E0FF;
    v9 = v5 / 0x2710;
    v10 = v5 - 10000 * v9;
    v5 = v9;
    v11 = (unsigned int)(5243 * (v10 >> 2)) >> 17;
    *(_WORD *)(v7 + 35) = word_2B3A17[v11];
    *(_WORD *)(v7 + 37) = word_2B3A17[(unsigned __int16)(v10 - 100 * v11)];
  }
  while ( v8 );
  v3 = a2;
  v4 = v6 + 39;
  if ( v9 > 0x63 )
    goto LABEL_10;
LABEL_7:
  v12 = v9;
  if ( v9 < 0xA )
    goto LABEL_11;
LABEL_8:
  v13 = v4 - 2;
  *(_WORD *)&v15[v4 - 2] = word_2B3A17[v12];
  return core::fmt::Formatter::pad_integral(v3, v2 >= 0, aLibraryCoreSrc, 0, (int)&v15[v13], 39 - v13);
}
