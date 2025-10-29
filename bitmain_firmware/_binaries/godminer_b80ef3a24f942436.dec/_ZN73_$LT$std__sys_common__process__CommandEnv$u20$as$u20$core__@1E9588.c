int __fastcall <std::sys_common::process::CommandEnv as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  unsigned __int8 v5[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v5, a2, (int)aCommandenv, 10);
  v3 = core::fmt::builders::DebugStruct::field(v5, (int)aClear, 5u, a1 + 12, (int)&off_2E9758);
  core::fmt::builders::DebugStruct::field(v3, (int)aVars_0, 4u, a1, (int)&off_2EA194);
  return core::fmt::builders::DebugStruct::finish(v5);
}
