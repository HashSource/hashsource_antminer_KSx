// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2061B4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-8h] [bp-8h] BYREF
  int v11; // [sp-4h] [bp-4h] BYREF

  v11 = a1 + 2;
  v10 = a1 + 1;
  core::fmt::Formatter::debug_struct_field2_finish(
    a3,
    (int)aMacho,
    5,
    (int)&unk_2A88DB,
    5,
    (int)&v10,
    (int)&off_2E00D0,
    &unk_2A8262,
    8,
    &v11,
    &off_2E0328);
  __asm { POP             {R4-R7,R11,PC} }
}
