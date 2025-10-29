int __fastcall <std::process::Child as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  _BYTE *v4; // r0
  _BYTE *v5; // r0
  _BYTE v7[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v7, a2, (int)aChild, 5);
  v3 = core::fmt::builders::DebugStruct::field(v7, (int)aStdin_2, 5u, a1 + 16, (int)&off_2CA01C);
  v4 = core::fmt::builders::DebugStruct::field(v3, (int)aStdout_0, 6u, a1 + 20, (int)&off_2CA02C);
  v5 = core::fmt::builders::DebugStruct::field(v4, (int)aStderr_0, 6u, a1 + 24, (int)&off_2CA03C);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive((int)v5);
}
