bool __fastcall <core::panic::location::Location as core::fmt::Display>::fmt(int a1, int *a2)
{
  int v2; // r3
  int v3; // r1
  _DWORD v5[6]; // [sp+0h] [bp-30h] BYREF
  int v6[6]; // [sp+18h] [bp-18h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v5[5] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v5[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v5[2] = a1 + 8;
  v5[0] = a1;
  v5[1] = sub_24CE40;
  v6[4] = (int)v5;
  v6[5] = 3;
  v6[3] = 3;
  v6[0] = 0;
  v5[4] = a1 + 12;
  v6[2] = (int)&off_2CF0AC;
  return core::fmt::write(v2, v3, v6);
}
