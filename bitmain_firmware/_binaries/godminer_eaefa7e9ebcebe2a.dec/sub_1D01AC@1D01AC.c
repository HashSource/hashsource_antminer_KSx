// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1D01AC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-A8h] [bp-A8h] BYREF
  int v11; // [sp-28h] [bp-28h] BYREF

  v10 = *(_DWORD *)(a1 + 4);
  v11 = v10 + 8;
  ((void (__fastcall *)(int, const char *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field2_finish)(
    a2,
    aCustom,
    6,
    aKind,
    4,
    &v11,
    &off_2DF600,
    &unk_2A62B6,
    5,
    &v10,
    &off_2DF610);
  __asm { POP             {R4-R7,R11,PC} }
}
