int __fastcall <std::path::Components as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[12]; // [sp+4h] [bp-14h] BYREF
  __int64 v6; // [sp+10h] [bp-8h] BYREF

  core::fmt::Formatter::debug_tuple(v5, a2, aComponents, 10);
  v6 = std::path::Components::as_path(a1);
  v3 = core::fmt::builders::DebugTuple::field(v5, &v6, &off_2E0EFC);
  return core::fmt::builders::DebugTuple::finish(v3);
}
