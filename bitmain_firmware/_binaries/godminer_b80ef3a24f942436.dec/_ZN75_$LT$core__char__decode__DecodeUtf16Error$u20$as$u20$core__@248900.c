bool __fastcall <core::char::decode::DecodeUtf16Error as core::fmt::Display>::fmt(int a1, int *a2)
{
  int v2; // r3
  int v3; // r1
  _DWORD v5[2]; // [sp+0h] [bp-20h] BYREF
  int v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v5[0] = a1;
  v5[1] = core::fmt::num::<impl core::fmt::LowerHex for i16>::fmt;
  v6[4] = (int)v5;
  v6[5] = 1;
  v6[3] = 1;
  v6[0] = 0;
  v6[2] = (int)&off_2EEF7C;
  return core::fmt::write(v2, v3, v6);
}
