// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2097F8(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 2;
  core::fmt::Formatter::debug_struct_field1_finish(
    a2,
    (int)aCoff,
    4,
    (int)aCharacteristic,
    0xFu,
    (int)&v10,
    (int)&off_2EB318);
  __asm { POP             {R4-R7,R11,PC} }
}
