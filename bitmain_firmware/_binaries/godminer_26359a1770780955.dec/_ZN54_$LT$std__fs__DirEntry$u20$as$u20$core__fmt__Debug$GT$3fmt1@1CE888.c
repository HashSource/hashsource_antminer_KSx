int __fastcall <std::fs::DirEntry as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r0
  int v4; // r4
  _BYTE v6[12]; // [sp+8h] [bp-18h] BYREF
  _DWORD v7[3]; // [sp+14h] [bp-Ch] BYREF

  core::fmt::Formatter::debug_tuple(v6, a2, aDirentry, 8);
  std::path::Path::_join((int)v7, *(_DWORD *)(a1[6] + 16), *(_DWORD *)(a1[6] + 20), a1[4], a1[5] - 1);
  v3 = core::fmt::builders::DebugTuple::field(v6, v7, &off_2DE93C);
  v4 = core::fmt::builders::DebugTuple::finish(v3);
  if ( v7[0] )
    _rust_dealloc((void *)v7[1]);
  return v4;
}
