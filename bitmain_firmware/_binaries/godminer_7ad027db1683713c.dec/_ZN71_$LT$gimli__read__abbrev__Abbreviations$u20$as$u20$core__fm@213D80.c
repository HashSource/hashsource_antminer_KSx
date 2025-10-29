int __fastcall <gimli::read::abbrev::Abbreviations as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aAbbreviations,
           13,
           (int)&unk_29AB05,
           3u,
           (int)&v3,
           (int)&off_2CCDFC,
           (int)&unk_29AB08,
           3u,
           (int)&v4,
           (int)&off_2CCE0C);
}
