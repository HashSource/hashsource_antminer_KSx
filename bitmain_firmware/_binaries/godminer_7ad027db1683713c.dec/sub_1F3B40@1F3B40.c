// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1F3B40(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // [sp-4h] [bp-4h] BYREF

  v6 = a1 + 4;
  core::fmt::Formatter::debug_struct_field1_finish(
    a2,
    (int)aCoff,
    4,
    (int)aCharacteristic,
    0xFu,
    (int)&v6,
    (int)&off_2CB308);
  __asm { POP             {R11,PC} }
}
