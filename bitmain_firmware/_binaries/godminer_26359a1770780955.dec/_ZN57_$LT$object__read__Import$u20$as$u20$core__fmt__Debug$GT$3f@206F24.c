int __fastcall <object::read::Import as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2A81DC,
           6,
           (int)&unk_2A81E2,
           7,
           (int)&v3,
           (int)&off_2E0158,
           aName_0,
           4,
           &v4,
           &off_2E0158);
}
