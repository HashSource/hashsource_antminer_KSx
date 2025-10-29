int __fastcall <object::read::pe::relocation::RelocationIterator as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1 + 8;
  v5 = a1;
  v4 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_29341C,
           18,
           (int)&unk_293365,
           0xFu,
           (int)&v3,
           (int)&off_2CB308,
           (int)aSize,
           4u,
           (int)&v4,
           (int)&off_2CB308,
           (int)&unk_29342E,
           6u,
           (int)&v5,
           (int)&off_2CB3F8);
}
