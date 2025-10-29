// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2056DC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 2;
  ((void (__fastcall *)(int, const char *, int, const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
    a2,
    aCoff,
    4,
    aCharacteristic,
    15,
    &v10,
    &off_2DF318);
  __asm { POP             {R4-R7,R11,PC} }
}
