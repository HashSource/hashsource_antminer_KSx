int __fastcall <gimli::read::abbrev::Abbreviations as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aAbbreviations,
           13,
           (int)&unk_29C055,
           3,
           (int)&v3,
           (int)&off_2CDDFC,
           &unk_29C058,
           3,
           &v4,
           &off_2CDE0C);
}
