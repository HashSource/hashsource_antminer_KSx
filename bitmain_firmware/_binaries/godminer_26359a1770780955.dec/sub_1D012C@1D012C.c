// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1D012C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r0
  _BYTE v11[128]; // [sp-A8h] [bp-A8h] BYREF
  char v12; // [sp-28h] [bp-28h] BYREF

  v12 = *(_BYTE *)(a1 + 1);
  core::fmt::Formatter::debug_tuple(v11, a2, aKind_0, 4);
  v10 = core::fmt::builders::DebugTuple::field(v11, &v12, &off_2DEA3C);
  core::fmt::builders::DebugTuple::finish(v10);
  __asm { POP             {R4-R7,R11,PC} }
}
