// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1D08E8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r4
  int v11; // r0
  int v12; // r0
  _BYTE v13[168]; // [sp-A8h] [bp-A8h] BYREF

  v10 = *(_DWORD *)(a1 + 4);
  core::fmt::Formatter::debug_struct(v13, a2, aError_0, 5);
  v11 = core::fmt::builders::DebugStruct::field(v13, aKind, 4, v10 + 8, &off_2DEA3C);
  v12 = core::fmt::builders::DebugStruct::field(v11, aMessage, 7, v10, &off_2DEA4C);
  core::fmt::builders::DebugStruct::finish(v12);
  __asm { POP             {R4-R7,R11,PC} }
}
