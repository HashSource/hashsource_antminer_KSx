int __fastcall <object::read::pe::rich::RichHeaderInfo as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 12;
  v5 = a1 + 16;
  v6 = a1;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2B39CB,
           14,
           (int)&unk_2B3858,
           6u,
           (int)&v3,
           (int)&off_2EB0A0,
           (int)aLength,
           6u,
           (int)&v4,
           (int)&off_2EB0A0,
           (int)&unk_2B39DF,
           7u,
           (int)&v5,
           (int)&off_2EB308,
           (int)&unk_2B39E6,
           0xEu,
           (int)&v6,
           (int)&off_2EB458);
}
