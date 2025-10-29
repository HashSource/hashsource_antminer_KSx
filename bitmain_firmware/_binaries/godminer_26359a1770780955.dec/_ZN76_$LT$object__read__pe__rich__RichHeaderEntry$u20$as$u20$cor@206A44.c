int __fastcall <object::read::pe::rich::RichHeaderEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2A80F4,
           15,
           (int)&unk_2A8103,
           7,
           (int)&v3,
           (int)&off_2E0308,
           &unk_2A810A,
           5,
           &v4,
           &off_2E0308);
}
