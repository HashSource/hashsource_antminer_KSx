int __fastcall <std::process::ExitStatusError as core::fmt::Display>::fmt(int *a1, int a2)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+4h] [bp-24h] BYREF
  _DWORD v5[2]; // [sp+1Ch] [bp-Ch] BYREF
  int v6; // [sp+24h] [bp-4h] BYREF

  v4[3] = 1;
  v4[5] = 1;
  v4[4] = v5;
  v4[0] = 0;
  v2 = *a1;
  v4[2] = &off_2DF06C;
  v6 = v2;
  v5[1] = <std::process::ExitStatus as core::fmt::Display>::fmt;
  v5[0] = &v6;
  return core::fmt::Formatter::write_fmt(a2, v4);
}
