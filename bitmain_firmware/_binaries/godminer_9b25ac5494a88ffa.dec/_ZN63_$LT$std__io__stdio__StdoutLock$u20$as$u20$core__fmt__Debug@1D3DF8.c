int __fastcall <std::io::stdio::StdoutLock as core::fmt::Debug>::fmt(int a1, int a2)
{
  _BYTE v3[8]; // [sp+0h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v3, a2, aStdoutlock, 10);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive(v3);
}
