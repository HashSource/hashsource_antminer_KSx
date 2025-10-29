__int64 __fastcall std::time::Instant::checked_duration_since(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD v6[4]; // [sp+0h] [bp-28h] BYREF
  _QWORD v7[3]; // [sp+10h] [bp-18h] BYREF

  v6[2] = a5;
  v6[0] = a3;
  v6[1] = a4;
  sub_1F5DAC(v7, a1, v6);
  return v7[1];
}
