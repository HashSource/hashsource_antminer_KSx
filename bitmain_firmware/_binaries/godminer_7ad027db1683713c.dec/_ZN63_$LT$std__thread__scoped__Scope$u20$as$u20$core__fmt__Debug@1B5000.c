int __fastcall <std::thread::scoped::Scope as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  int v3; // r4
  _BYTE *v4; // r0
  char v5; // r2
  _BYTE *v6; // r0
  _BYTE *v7; // r0
  _BYTE v9[8]; // [sp+8h] [bp-10h] BYREF
  int v10; // [sp+10h] [bp-8h] BYREF
  bool v11; // [sp+17h] [bp-1h] BYREF

  core::fmt::Formatter::debug_struct((int)v9, a2, (int)aScope, 5);
  v3 = *a1;
  v10 = *(_DWORD *)(v3 + 8);
  v4 = core::fmt::builders::DebugStruct::field(v9, (int)aNumRunningThre, 0x13u, (int)&v10, (int)&off_2C9748);
  v5 = *(_BYTE *)(v3 + 16);
  v11 = v5 != 0;
  v6 = core::fmt::builders::DebugStruct::field(v4, (int)&unk_28FF0C, 0x11u, (int)&v11, (int)&off_2C9758);
  v7 = core::fmt::builders::DebugStruct::field(v6, (int)aMainThread, 0xBu, v3 + 12, (int)&off_2C9768);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive((int)v7);
}
