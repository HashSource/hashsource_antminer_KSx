int __fastcall <std::thread::Thread as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  _BYTE *v5; // r0
  int v6; // r3
  _BYTE *v7; // r0
  _BYTE v9[8]; // [sp+8h] [bp-18h] BYREF
  _DWORD v10[2]; // [sp+10h] [bp-10h] BYREF
  _DWORD v11[2]; // [sp+18h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v9, a2, (int)aThread, 6);
  v3 = (_DWORD *)*a1;
  v4 = v3[4];
  v10[1] = v3[5];
  v10[0] = v4;
  v5 = core::fmt::builders::DebugStruct::field(v9, (int)aId_0, 2u, (int)v10, (int)&off_2C97B8);
  v6 = v3[3];
  v11[0] = v3[2];
  v11[1] = v6 - 1;
  v7 = core::fmt::builders::DebugStruct::field(v5, (int)aName_0, 4u, (int)v11, (int)&off_2C97C8);
  return core::fmt::builders::DebugStruct::finish_non_exhaustive((int)v7);
}
