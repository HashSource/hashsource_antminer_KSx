int __fastcall core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v2; // r0
  int v3; // r3
  _BYTE v5[37]; // [sp+9h] [bp-27h] BYREF
  unsigned __int16 v6; // [sp+2Eh] [bp-2h]

  v2 = *a1;
  if ( v2 <= 0x63 )
  {
    if ( v2 >= 0xA )
    {
      v3 = 37;
      v6 = word_2B3A17[v2];
      return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v5[v3], 39 - v3);
    }
    v3 = 38;
  }
  else
  {
    v3 = 36;
    v6 = word_2B3A17[(unsigned __int8)(v2 - 100 * ((unsigned int)(41 * (__int16)v2) >> 12))];
    v2 = (unsigned int)(41 * (__int16)v2) >> 12;
  }
  v5[v3] = v2 + 48;
  return core::fmt::Formatter::pad_integral(a2, 1, aLibraryCoreSrc, 0, (int)&v5[v3], 39 - v3);
}
