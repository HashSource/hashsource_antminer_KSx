int __fastcall <std::sync::once::OnceState as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[11]; // [sp+4h] [bp-Ch] BYREF
  char v6; // [sp+Fh] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct(v5, a2, aOncestate, 9);
  v6 = *(_BYTE *)(a1 + 4);
  v3 = core::fmt::builders::DebugStruct::field(v5, aPoisoned, 8, &v6, &off_2DF758);
  return core::fmt::builders::DebugStruct::finish(v3);
}
