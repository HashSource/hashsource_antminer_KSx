// Alternative name is '_ZN4core3fmt3num3imp52_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$3fmt17h0028cd8c38e4f733E'
int __fastcall core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // r3
  int v4; // lr
  int v5; // r2
  _BYTE *v6; // r7
  bool v7; // cc
  unsigned int v8; // r1
  unsigned __int16 v9; // r5
  unsigned int v10; // r6
  unsigned int v11; // r2
  int v12; // r0
  _BYTE v14[39]; // [sp+Dh] [bp-27h] BYREF

  v2 = *a1;
  v4 = 39;
  if ( *a1 < 0x2710 )
  {
    v8 = *a1;
    if ( v2 <= 0x63 )
      goto LABEL_5;
LABEL_8:
    v4 -= 2;
    v11 = (unsigned int)(5243 * ((unsigned __int16)v8 >> 2)) >> 17;
    *(_WORD *)&v14[v4] = word_2B3A17[(unsigned __int16)(v8 - 100 * v11)];
    if ( v11 >= 0xA )
      goto LABEL_6;
LABEL_9:
    v12 = v4 - 1;
    v14[v4 - 1] = v11 + 48;
    return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v14[v12], 39 - v12);
  }
  v5 = 0;
  do
  {
    v6 = &v14[v5];
    v5 -= 4;
    v7 = v2 > 0x5F5E0FF;
    v8 = v2 / 0x2710;
    v9 = v2 - 10000 * v8;
    v2 = v8;
    v10 = (unsigned int)(5243 * (v9 >> 2)) >> 17;
    *(_WORD *)(v6 + 35) = word_2B3A17[v10];
    *(_WORD *)(v6 + 37) = word_2B3A17[(unsigned __int16)(v9 - 100 * v10)];
  }
  while ( v7 );
  v4 = v5 + 39;
  if ( v8 > 0x63 )
    goto LABEL_8;
LABEL_5:
  v11 = v8;
  if ( v8 < 0xA )
    goto LABEL_9;
LABEL_6:
  v12 = v4 - 2;
  *(_WORD *)&v14[v4 - 2] = word_2B3A17[v11];
  return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v14[v12], 39 - v12);
}
