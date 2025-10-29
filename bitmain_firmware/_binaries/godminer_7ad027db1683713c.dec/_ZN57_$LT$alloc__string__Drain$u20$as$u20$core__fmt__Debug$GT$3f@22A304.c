bool __fastcall <alloc::string::Drain as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int *v4; // r0
  int v6[3]; // [sp+4h] [bp-14h] BYREF
  _DWORD v7[2]; // [sp+10h] [bp-8h] BYREF

  core::fmt::Formatter::debug_tuple((int)v6, a2, (int)aDrain, 5);
  v3 = *a1 - a1[1];
  v7[0] = a1[1];
  v7[1] = v3;
  v4 = core::fmt::builders::DebugTuple::field(v6, (int)v7, (int)&off_2CE894);
  return core::fmt::builders::DebugTuple::finish(v4);
}
