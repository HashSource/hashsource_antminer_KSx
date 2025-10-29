int __fastcall <object::read::pe::rich::RichHeaderEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2A7C54,
           15,
           (int)&unk_2A7C63,
           7,
           (int)&v3,
           (int)&off_2DF308,
           &unk_2A7C6A,
           5,
           &v4,
           &off_2DF308);
}
