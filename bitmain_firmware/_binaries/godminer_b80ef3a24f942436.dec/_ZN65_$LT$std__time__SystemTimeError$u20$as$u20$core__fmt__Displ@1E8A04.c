bool __fastcall <std::time::SystemTimeError as core::fmt::Display>::fmt(int a1, int *a2)
{
  int v3[6]; // [sp+0h] [bp-18h] BYREF

  v3[3] = 1;
  v3[2] = (int)&off_2EA144;
  v3[5] = 0;
  v3[0] = 0;
  v3[4] = (int)aRustc9eb3afe9e;
  return core::fmt::Formatter::write_fmt(a2, v3);
}
