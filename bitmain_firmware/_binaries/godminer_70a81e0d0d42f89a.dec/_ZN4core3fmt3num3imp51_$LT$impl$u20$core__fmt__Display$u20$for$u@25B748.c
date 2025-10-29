int __fastcall core::fmt::num::imp::<impl core::fmt::Display for i8>::fmt(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v3; // r1
  int v4; // lr
  int v5; // r3
  _BYTE v7[37]; // [sp+9h] [bp-27h] BYREF
  unsigned __int16 v8; // [sp+2Eh] [bp-2h]

  v3 = *a1;
  v4 = (char)v3;
  if ( (char)v3 <= -1 )
    v3 = -(char)v3;
  if ( v3 <= 0x63 )
  {
    v5 = 38;
    if ( v3 >= 0xA )
    {
      v5 = 37;
      v8 = word_2B6477[v3];
      return core::fmt::Formatter::pad_integral(a2, v4 > -1, aLibraryCoreSrc, 0, (int)&v7[v5], 39 - v5);
    }
  }
  else
  {
    v5 = 36;
    v8 = word_2B6477[(unsigned __int8)v3 % 0x64u];
    LOBYTE(v3) = 1;
  }
  v7[v5] = v3 + 48;
  return core::fmt::Formatter::pad_integral(a2, v4 > -1, aLibraryCoreSrc, 0, (int)&v7[v5], 39 - v5);
}
