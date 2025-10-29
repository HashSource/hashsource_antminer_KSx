// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2080AC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-Ch] [bp-Ch] BYREF

  v6 = a1 + 8;
  ((void (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
    a2,
    aElf,
    3,
    &unk_2A9DAA,
    8,
    &v6,
    &off_2E2338);
  __asm { POP             {R11,PC} }
}
