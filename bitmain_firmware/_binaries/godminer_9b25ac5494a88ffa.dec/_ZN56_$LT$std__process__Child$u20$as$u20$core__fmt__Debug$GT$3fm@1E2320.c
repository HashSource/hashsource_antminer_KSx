int __fastcall <std::process::Child as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v7[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v7, a2, aChild, 5);
  v3 = core::fmt::builders::DebugStruct::field(v7, aStdin_2, 5, a1 + 16, &off_2DE01C);
  v4 = core::fmt::builders::DebugStruct::field(v3, aStdout_0, 6, a1 + 20, &off_2DE02C);
  v5 = core::fmt::builders::DebugStruct::field(v4, aStderr_0, 6, a1 + 24, &off_2DE03C);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive(v5);
}
