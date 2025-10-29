int __fastcall <gimli::read::line::FileEntryFormat as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 2;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aFileentryforma,
           15,
           (int)&unk_29ABE9,
           0xCu,
           (int)&v3,
           (int)&off_2CCF0C,
           (int)&unk_2957AA,
           4u,
           (int)&v4,
           (int)&off_2CCE5C);
}
