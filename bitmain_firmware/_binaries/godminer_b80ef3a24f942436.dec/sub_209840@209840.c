// positive sp value has been detected, the output may be wrong!
void __fastcall sub_209840(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp-Ch] [bp-Ch] BYREF
  int v11; // [sp-8h] [bp-8h] BYREF
  int v12; // [sp-4h] [bp-4h] BYREF

  v10 = a1 + 1;
  v11 = a1 + 2;
  v12 = a1 + 4;
  core::fmt::Formatter::debug_struct_field3_finish(
    a2,
    (int)aElf,
    3,
    (int)&unk_2B37F1,
    6u,
    (int)&v10,
    (int)&off_2EB0D0,
    (int)&unk_2B37F7,
    0xBu,
    (int)&v11,
    (int)&off_2EB0D0,
    (int)&unk_2B3802,
    7u,
    (int)&v12,
    (int)&off_2EB308);
  __asm { POP             {R4-R7,R11,PC} }
}
