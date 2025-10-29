int __fastcall <std::thread::scoped::Scope as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r4
  int v4; // r0
  char v5; // r2
  int v6; // r0
  int v7; // r0
  _BYTE v9[8]; // [sp+8h] [bp-10h] BYREF
  int v10; // [sp+10h] [bp-8h] BYREF
  bool v11; // [sp+17h] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct(v9, a2, aScope, 5);
  v3 = *a1;
  v10 = *(_DWORD *)(v3 + 8);
  v4 = core::fmt::builders::DebugStruct::field(v9, aNumRunningThre, 19, &v10, &off_2DD748);
  v5 = *(_BYTE *)(v3 + 16);
  v11 = v5 != 0;
  v6 = core::fmt::builders::DebugStruct::field(v4, &unk_2A46BC, 17, &v11, &off_2DD758);
  v7 = core::fmt::builders::DebugStruct::field(v6, aMainThread, 11, v3 + 12, &off_2DD768);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive(v7);
}
