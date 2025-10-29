int __fastcall <object::read::pe::import::ImportTable as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 12;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2933A3,
           11,
           (int)&unk_2933AE,
           0xCu,
           (int)&v3,
           (int)&off_2CB3B8,
           (int)&unk_2933BA,
           0xFu,
           (int)&v4,
           (int)&off_2CB308,
           (int)&unk_2933C9,
           0xEu,
           (int)&v5,
           (int)&off_2CB308);
}
