int __fastcall <std::path::Iter as core::fmt::Debug>::fmt(int a1, int a2)
{
  _BYTE *v3; // r0
  int v4; // r1
  int v5; // r0
  _BYTE v7[12]; // [sp+4h] [bp-14h] BYREF
  _DWORD v8[2]; // [sp+10h] [bp-8h] BYREF

  core::fmt::Formatter::debug_tuple(v7, a2, "IterOnce/", 4);
  v3 = std::path::Components::as_path(a1);
  v8[1] = v4;
  v8[0] = v3;
  v5 = core::fmt::builders::DebugTuple::field(v7, v8, &off_2DDF5C);
  return core::fmt::builders::DebugTuple::finish(v5);
}
