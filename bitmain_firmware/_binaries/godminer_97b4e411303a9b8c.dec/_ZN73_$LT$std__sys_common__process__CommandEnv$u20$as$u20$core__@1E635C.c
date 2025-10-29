int __fastcall <std::sys_common::process::CommandEnv as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aCommandenv, 10);
  v3 = core::fmt::builders::DebugStruct::field(v5, aClear, 5, a1 + 12, &off_2DF758);
  core::fmt::builders::DebugStruct::field(v3, aVars_0, 4, a1, &off_2E0194);
  return core::fmt::builders::DebugStruct::finish(v5);
}
