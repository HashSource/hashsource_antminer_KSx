int __fastcall core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  int v4; // r4
  unsigned int v5; // r1
  unsigned __int16 v6; // r2
  unsigned int v7; // r0
  int v8; // r3
  int v9; // r3
  _BYTE v11[35]; // [sp+9h] [bp-27h] BYREF
  unsigned __int16 v12; // [sp+2Ch] [bp-4h]
  unsigned __int16 v13; // [sp+2Eh] [bp-2h]

  v2 = *a1;
  v4 = (__int16)v2;
  if ( (__int16)v2 <= -1 )
    v2 = -(__int16)v2;
  if ( v2 > 0x270F )
  {
    v5 = (unsigned int)(839 * ((unsigned __int16)v2 >> 4)) >> 19;
    v6 = v2 - 10000 * v5;
    v7 = (unsigned int)(5243 * (v6 >> 2)) >> 17;
    v8 = 35;
    v12 = word_2B4BB7[v7];
    v13 = word_2B4BB7[(unsigned __int16)(v6 - 100 * v7)];
LABEL_9:
    v9 = v8 - 1;
    v11[v9] = v5 + 48;
    return core::fmt::Formatter::pad_integral(a2, v4 > -1, aLibraryCoreSrc, 0, (int)&v11[v9], 39 - v9);
  }
  v8 = 39;
  if ( v2 <= 0x63 )
  {
    v5 = v2;
    if ( v2 < 0xA )
      goto LABEL_9;
  }
  else
  {
    v8 = 37;
    v5 = (unsigned int)(5243 * ((unsigned __int16)v2 >> 2)) >> 17;
    v13 = word_2B4BB7[(unsigned __int16)(v2 - 100 * v5)];
    if ( v5 < 0xA )
      goto LABEL_9;
  }
  v9 = v8 - 2;
  *(_WORD *)&v11[v9] = word_2B4BB7[v5];
  return core::fmt::Formatter::pad_integral(a2, v4 > -1, aLibraryCoreSrc, 0, (int)&v11[v9], 39 - v9);
}
