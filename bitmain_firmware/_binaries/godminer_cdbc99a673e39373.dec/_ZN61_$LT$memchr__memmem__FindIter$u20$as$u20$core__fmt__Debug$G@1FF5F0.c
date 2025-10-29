int __fastcall <memchr::memmem::FindIter as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+3Ch] [bp-10h] BYREF
  int v4; // [sp+40h] [bp-Ch] BYREF
  int v5; // [sp+44h] [bp-8h] BYREF
  int v6; // [sp+48h] [bp-4h] BYREF

  v3 = a1 + 56;
  v5 = a1;
  v4 = a1 + 48;
  v6 = a1 + 64;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           aFinditer,
           8,
           aHaystack,
           8,
           &v3,
           &off_2CD968,
           aPrestatesearch,
           8,
           &v4,
           &off_2CD9D8,
           &unk_296830,
           6,
           &v5,
           &off_2CD9E8,
           &unk_296807,
           3,
           &v6,
           &off_2CD6F8);
}
