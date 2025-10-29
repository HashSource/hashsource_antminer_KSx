int __fastcall <std::sys::unix::process::process_inner::ExitStatus as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[12]; // [sp+4h] [bp-Ch] BYREF

  core::fmt::Formatter::debug_tuple(v5, a2, aUnixWaitStatus, 16);
  v3 = core::fmt::builders::DebugTuple::field(v5, a1, &off_2E0A5C);
  return core::fmt::builders::DebugTuple::finish(v3);
}
