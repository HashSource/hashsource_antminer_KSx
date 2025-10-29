int __fastcall <std::process::Stdio as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE v3[8]; // [sp+0h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v3, a2, (int)aStdio, 5);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive((int)v3);
}
