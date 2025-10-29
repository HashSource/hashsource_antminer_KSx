bool __fastcall <std::fs::DirEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int *v3; // r0
  _BOOL4 v4; // r4
  int v6[3]; // [sp+8h] [bp-18h] BYREF
  unsigned int v7[3]; // [sp+14h] [bp-Ch] BYREF

  core::fmt::Formatter::debug_tuple((int)v6, a2, (int)aDirentry, 8);
  std::path::Path::_join(
    v7,
    *(const void **)(*(_DWORD *)(a1 + 24) + 16),
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 20),
    *(_BYTE **)(a1 + 16),
    *(_DWORD *)(a1 + 20) - 1);
  v3 = core::fmt::builders::DebugTuple::field(v6, (int)v7, (int)&off_2E993C);
  v4 = core::fmt::builders::DebugTuple::finish(v3);
  if ( v7[0] )
    _rust_dealloc((void *)v7[1]);
  return v4;
}
