int __fastcall <core::fmt::num::LowerHex as core::fmt::num::GenericRadix>::digit(int a1)
{
  int v1; // r11
  int v2; // r1
  bool v3; // cc
  char v5; // [sp+7h] [bp-31h] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-30h] BYREF
  _DWORD v7[6]; // [sp+20h] [bp-18h] BYREF

  v2 = 48;
  v3 = (unsigned __int8)a1 > 0xAu;
  if ( (unsigned __int8)a1 >= 0xAu )
  {
    v2 = 87;
    v3 = (unsigned __int8)a1 > 0xFu;
  }
  if ( v3 )
  {
    v7[4] = v1;
    v5 = a1;
    v6[3] = 2;
    v6[5] = 2;
    v6[4] = v7;
    v6[2] = &off_2D0948;
    v6[0] = 0;
    v7[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v7[1] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v7[2] = &v5;
    v7[0] = &unk_2A41E0;
    core::panicking::panic_fmt((int)v6, (int)&off_2D0978);
  }
  return v2 + a1;
}
