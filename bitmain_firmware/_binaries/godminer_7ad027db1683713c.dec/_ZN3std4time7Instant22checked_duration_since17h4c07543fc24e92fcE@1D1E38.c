__int64 __fastcall std::time::Instant::checked_duration_since(
        unsigned int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v6[4]; // [sp+0h] [bp-28h] BYREF
  _QWORD v7[3]; // [sp+10h] [bp-18h] BYREF

  v6[2] = a5;
  v6[0] = a3;
  v6[1] = a4;
  sub_1E1888((int)v7, a1, v6);
  return v7[1];
}
