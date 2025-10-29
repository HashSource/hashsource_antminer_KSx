int __fastcall <std::process::ExitCode as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_tuple_field1_finish(a2, aExitcode, 8, &v3, &off_2DE720);
}
