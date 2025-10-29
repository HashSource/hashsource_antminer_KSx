int __fastcall <std::sync::once::OnceState as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r0
  _BYTE v5[11]; // [sp+4h] [bp-Ch] BYREF
  char v6; // [sp+Fh] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct((int)v5, a2, (int)aOncestate, 9);
  v6 = *(_BYTE *)(a1 + 4);
  v3 = core::fmt::builders::DebugStruct::field(v5, (int)aPoisoned, 8u, (int)&v6, (int)&off_2C9758);
  return core::fmt::builders::DebugStruct::finish(v3);
}
