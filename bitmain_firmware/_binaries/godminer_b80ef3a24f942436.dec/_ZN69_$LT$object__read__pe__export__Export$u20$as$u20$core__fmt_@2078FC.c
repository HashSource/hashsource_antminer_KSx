int __fastcall <object::read::pe::export::Export as core::fmt::Debug>::fmt(int *a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  int v4; // r2
  _BYTE *v5; // r0
  unsigned __int8 *v6; // r0
  _BYTE v8[8]; // [sp+8h] [bp-10h] BYREF
  _DWORD v9[2]; // [sp+10h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v8, a2, (int)aExport, 6);
  v3 = core::fmt::builders::DebugStruct::field(v8, (int)aOrdinal, 7u, (int)(a1 + 2), (int)&off_2EB278);
  v4 = *a1;
  v9[1] = a1[1];
  v9[0] = v4;
  v5 = core::fmt::builders::DebugStruct::field(v3, (int)aName_1, 4u, (int)v9, (int)&off_2EB288);
  v6 = core::fmt::builders::DebugStruct::field(v5, (int)aTarget, 6u, (int)(a1 + 3), (int)&off_2EB298);
  return core::fmt::builders::DebugStruct::finish(v6);
}
