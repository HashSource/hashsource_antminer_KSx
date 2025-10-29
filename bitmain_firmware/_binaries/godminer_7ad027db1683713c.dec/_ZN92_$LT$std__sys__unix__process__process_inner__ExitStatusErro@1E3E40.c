bool __fastcall <std::sys::unix::process::process_inner::ExitStatusError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int *v3; // r0
  int v5[3]; // [sp+4h] [bp-Ch] BYREF

  core::fmt::Formatter::debug_tuple((int)v5, a2, (int)aUnixWaitStatus, 16);
  v3 = core::fmt::builders::DebugTuple::field(v5, a1, (int)&off_2CADB8);
  return core::fmt::builders::DebugTuple::finish(v3);
}
