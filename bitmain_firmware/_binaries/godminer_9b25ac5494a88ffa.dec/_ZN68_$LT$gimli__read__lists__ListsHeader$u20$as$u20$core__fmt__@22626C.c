int __fastcall <gimli::read::lists::ListsHeader as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aListsheader,
           11,
           (int)&unk_2AA650,
           8,
           (int)&v3,
           (int)&off_2E0F1C,
           &unk_2AF3B0,
           18,
           &v4,
           &off_2E0CAC);
}
