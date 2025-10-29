int __fastcall <memchr::memmem::SearcherConfig as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aSearcherconfig,
           14,
           (int)&unk_295349,
           9u,
           (int)&v3,
           (int)&off_2CCAA8);
}
