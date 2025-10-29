int __fastcall <core::fmt::num::Octal as core::fmt::num::GenericRadix>::digit(int a1)
{
  int v1; // r11
  char v3; // [sp+7h] [bp-31h] BYREF
  _DWORD v4[6]; // [sp+8h] [bp-30h] BYREF
  _DWORD v5[6]; // [sp+20h] [bp-18h] BYREF

  if ( (unsigned __int8)a1 >= 8u )
  {
    v5[4] = v1;
    v3 = a1;
    v4[3] = 2;
    v4[5] = 2;
    v4[4] = v5;
    v4[2] = &off_2E6948;
    v4[0] = 0;
    v5[3] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v5[1] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v5[2] = &v3;
    v5[0] = &unk_2B9E9F;
    core::panicking::panic_fmt((int)v4, (int)&off_2E6968);
  }
  return a1 + 48;
}
