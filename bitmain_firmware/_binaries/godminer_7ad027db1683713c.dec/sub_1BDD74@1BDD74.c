// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1BDD74(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r4
  _BYTE *v11; // r0
  unsigned __int8 *v12; // r0
  _BYTE v13[168]; // [sp-A8h] [bp-A8h] BYREF

  v10 = *(_DWORD *)(a1 + 4);
  core::fmt::Formatter::debug_struct((int)v13, a2, (int)aError_0, 5);
  v11 = core::fmt::builders::DebugStruct::field(v13, (int)aKind, 4u, v10 + 8, (int)&off_2C9A3C);
  v12 = core::fmt::builders::DebugStruct::field(v11, (int)aMessage, 7u, v10, (int)&off_2C9A4C);
  core::fmt::builders::DebugStruct::finish(v12);
  __asm { POP             {R4-R7,R11,PC} }
}
