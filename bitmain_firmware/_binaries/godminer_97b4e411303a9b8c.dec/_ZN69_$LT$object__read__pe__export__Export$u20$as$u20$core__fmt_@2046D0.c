int __fastcall <object::read::pe::export::Export as core::fmt::Debug>::fmt(int *a1, int a2)
{
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r0
  _BYTE v8[8]; // [sp+8h] [bp-10h] BYREF
  _DWORD v9[2]; // [sp+10h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v8, a2, aExport, 6);
  v3 = core::fmt::builders::DebugStruct::field(v8, aOrdinal, 7, a1 + 2, &off_2E1278);
  v4 = *a1;
  v9[1] = a1[1];
  v9[0] = v4;
  v5 = core::fmt::builders::DebugStruct::field(v3, aName_0, 4, v9, &off_2E1288);
  v6 = core::fmt::builders::DebugStruct::field(v5, aTarget, 6, a1 + 3, &off_2E1298);
  return core::fmt::builders::DebugStruct::finish(v6);
}
