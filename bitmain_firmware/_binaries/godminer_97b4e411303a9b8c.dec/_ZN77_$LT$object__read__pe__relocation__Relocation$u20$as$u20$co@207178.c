int __fastcall <object::read::pe::relocation::Relocation as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aRelocation,
           10,
           (int)&unk_2A8CB5,
           15,
           (int)&v3,
           (int)&off_2E1308,
           &unk_2A8D8E,
           3,
           &v4,
           &off_2E1318);
}
