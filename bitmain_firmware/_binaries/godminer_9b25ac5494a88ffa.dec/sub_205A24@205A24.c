// positive sp value has been detected, the output may be wrong!
void __fastcall sub_205A24(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 4;
  ((void (__fastcall *)(int, const char *, int, const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
    a2,
    aCoff,
    4,
    aCharacteristic,
    15,
    &v6,
    &off_2DF308);
  __asm { POP             {R11,PC} }
}
