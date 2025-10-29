int __fastcall <memchr::memmem::FinderBuilder as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aFinderbuilder,
           13,
           (int)&unk_29530D,
           6u,
           (int)&v3,
           (int)&off_2CCA38);
}
