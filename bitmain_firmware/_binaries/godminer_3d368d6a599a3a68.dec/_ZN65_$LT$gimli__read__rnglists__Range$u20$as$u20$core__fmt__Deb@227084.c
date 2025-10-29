int __fastcall <gimli::read::rnglists::Range as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2B0310,
           5,
           (int)&unk_2B0308,
           5,
           (int)&v3,
           (int)&off_2E1EEC,
           &unk_2B030D,
           3,
           &v4,
           &off_2E1EEC);
}
