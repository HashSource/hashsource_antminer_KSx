int __fastcall <std::env::ArgsOs as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aArgsos, 6);
  v3 = core::fmt::builders::DebugStruct::field(v5, aInner, 5, a1, &off_2DE8FC);
  return core::fmt::builders::DebugStruct::finish(v3);
}
