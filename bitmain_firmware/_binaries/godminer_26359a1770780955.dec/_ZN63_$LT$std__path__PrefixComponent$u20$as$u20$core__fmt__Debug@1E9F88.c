int __fastcall <std::path::PrefixComponent as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aPrefixcomponen,
           15,
           (int)&unk_2A641F,
           3,
           (int)&v3,
           (int)&off_2DF6B0,
           &unk_2A6422,
           6,
           &v4,
           &off_2DF6C0);
}
