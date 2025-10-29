// positive sp value has been detected, the output may be wrong!
void __fastcall sub_209A38(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 4;
  core::fmt::Formatter::debug_struct_field1_finish(a2, (int)aElf, 3, (int)&unk_2B3810, 7u, (int)&v10, (int)&off_2EB308);
  __asm { POP             {R4-R7,R11,PC} }
}
