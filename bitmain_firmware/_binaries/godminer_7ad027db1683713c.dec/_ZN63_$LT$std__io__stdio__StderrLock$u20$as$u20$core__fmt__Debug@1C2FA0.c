int __fastcall <std::io::stdio::StderrLock as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE v3[8]; // [sp+0h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v3, a2, (int)aStderrlock, 10);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive((int)v3);
}
