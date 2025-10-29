// positive sp value has been detected, the output may be wrong!
void __fastcall sub_205B04(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-Ch] [bp-Ch] BYREF
  int v11; // [sp-8h] [bp-8h] BYREF
  int v12; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 1;
  v11 = a1 + 2;
  v12 = a1 + 4;
  ((void (__fastcall *)(int, const char *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
    a2,
    aElf,
    3,
    &unk_2A7EF1,
    6,
    &v10,
    &off_2E00D0,
    &unk_2A7EF7,
    11,
    &v11,
    &off_2E00D0,
    &unk_2A7F02,
    7,
    &v12,
    &off_2E0308);
  __asm { POP             {R4-R7,R11,PC} }
}
