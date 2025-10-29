int __fastcall core::fmt::builders::DebugMap::entry(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0

  v6 = core::fmt::builders::DebugMap::key();
  return core::fmt::builders::DebugMap::value(v6, a4, a5);
}
