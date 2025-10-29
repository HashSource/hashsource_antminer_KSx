_BYTE *__fastcall core::fmt::builders::DebugMap::entry(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v6; // r0

  v6 = core::fmt::builders::DebugMap::key(a1, a2, a3);
  return core::fmt::builders::DebugMap::value(v6, a4, a5);
}
