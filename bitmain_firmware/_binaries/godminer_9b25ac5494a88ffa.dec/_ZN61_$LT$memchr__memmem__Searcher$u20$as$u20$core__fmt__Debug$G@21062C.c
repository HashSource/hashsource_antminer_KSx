int __fastcall <memchr::memmem::Searcher as core::fmt::Debug>::fmt(int a1, int a2)
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
           aSearcher,
           8,
           &unk_2A9AC3,
           6,
           &v3,
           &off_2E0A48,
           &unk_2A9AC9,
           5,
           &v4,
           &off_2E0A58,
           &unk_2A9ACE,
           5,
           &v5,
           &off_2E0A68,
           aKind_1,
           4,
           &v6,
           &off_2E0A78);
}
