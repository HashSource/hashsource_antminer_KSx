// positive sp value has been detected, the output may be wrong!
void __fastcall sub_20591C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 4;
  ((void (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
    a2,
    aElf,
    3,
    &unk_2A7A70,
    7,
    &v10,
    &off_2DF308);
  __asm { POP             {R4-R7,R11,PC} }
}
