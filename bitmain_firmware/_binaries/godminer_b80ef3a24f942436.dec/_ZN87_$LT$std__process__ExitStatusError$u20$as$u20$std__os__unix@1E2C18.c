int __fastcall <std::process::ExitStatusError as std::os::unix::process::ExitStatusExt>::from_raw(int result)
{
  int v1; // r11
  _BYTE v2[4]; // [sp+4h] [bp-Ch] BYREF
  int v3; // [sp+8h] [bp-8h]

  if ( !result )
  {
    v3 = v1;
    core::result::unwrap_failed((int)aExitstatuserro, 72, (int)v2, (int)&off_2E92D8, (int)&off_2E9E8C);
  }
  return result;
}
