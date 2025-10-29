int __fastcall core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned int v2; // r0
  unsigned int v4; // r3
  unsigned __int16 v5; // r0
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r0
  _BYTE v10[35]; // [sp+9h] [bp-27h] BYREF
  unsigned __int16 v11; // [sp+2Ch] [bp-4h]
  unsigned __int16 v12; // [sp+2Eh] [bp-2h]

  v2 = *a1;
  if ( v2 > 0x270F )
  {
    v4 = (unsigned int)(839 * (__int16)(v2 >> 4)) >> 19;
    v5 = v2 - 10000 * v4;
    v6 = (unsigned int)(5243 * (v5 >> 2)) >> 17;
    v7 = 35;
    v11 = word_2A07B7[v6];
    v12 = word_2A07B7[(unsigned __int16)(v5 - 100 * v6)];
LABEL_7:
    v8 = v7 - 1;
    v10[v7 - 1] = v4 + 48;
    return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v10[v8], 39 - v8);
  }
  v7 = 39;
  if ( v2 <= 0x63 )
  {
    v4 = v2;
    if ( v2 < 0xA )
      goto LABEL_7;
  }
  else
  {
    v7 = 37;
    v4 = (unsigned int)(5243 * (__int16)(v2 >> 2)) >> 17;
    v12 = word_2A07B7[(unsigned __int16)(v2 - 100 * v4)];
    if ( v4 < 0xA )
      goto LABEL_7;
  }
  v8 = v7 - 2;
  *(_WORD *)&v10[v7 - 2] = word_2A07B7[v4];
  return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v10[v8], 39 - v8);
}
