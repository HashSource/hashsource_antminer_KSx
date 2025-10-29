bool __fastcall <core::ops::range::RangeFull as core::fmt::Debug>::fmt(int a1, int *a2)
{
  int v2; // r0
  int v3; // r1
  int v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v5[5] = 0;
  v5[4] = (int)aLibraryCoreSrc;
  v5[0] = 0;
  v5[3] = 1;
  v5[2] = (int)&off_2EEF44;
  return core::fmt::write(v2, v3, v5);
}
