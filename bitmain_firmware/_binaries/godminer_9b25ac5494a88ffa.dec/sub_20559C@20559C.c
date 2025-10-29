// positive sp value has been detected, the output may be wrong!
void __fastcall sub_20559C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 2;
  core::fmt::Formatter::debug_tuple_field1_finish(a3, aCoff, 4, &v10, &off_2DF318);
  __asm { POP             {R4-R7,R11,PC} }
}
