bool __fastcall <std::sys::unix::os::JoinPathsError as core::fmt::Display>::fmt(int a1, int *a2)
{
  int v3[6]; // [sp+4h] [bp-24h] BYREF
  _DWORD v4[2]; // [sp+1Ch] [bp-Ch] BYREF
  int v5; // [sp+24h] [bp-4h] BYREF

  v3[3] = 2;
  v3[5] = 1;
  v3[4] = (int)v4;
  v3[0] = 0;
  v3[2] = (int)&off_2EA8BC;
  v5 = 58;
  v4[1] = <char as core::fmt::Display>::fmt;
  v4[0] = &v5;
  return core::fmt::Formatter::write_fmt(a2, v3);
}
