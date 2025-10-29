int __fastcall <memchr::memmem::Searcher as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+3Ch] [bp-10h] BYREF
  int v4; // [sp+40h] [bp-Ch] BYREF
  int v5; // [sp+44h] [bp-8h] BYREF
  int v6; // [sp+48h] [bp-4h] BYREF

  v4 = a1 + 32;
  v3 = a1;
  v5 = a1 + 44;
  v6 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)aSearcher,
           8,
           (int)&unk_295313,
           6u,
           (int)&v3,
           (int)&off_2CCA48,
           (int)&unk_295319,
           5u,
           (int)&v4,
           (int)&off_2CCA58,
           (int)&unk_29531E,
           5u,
           (int)&v5,
           (int)&off_2CCA68,
           (int)aKind_1,
           4u,
           (int)&v6,
           (int)&off_2CCA78);
}
