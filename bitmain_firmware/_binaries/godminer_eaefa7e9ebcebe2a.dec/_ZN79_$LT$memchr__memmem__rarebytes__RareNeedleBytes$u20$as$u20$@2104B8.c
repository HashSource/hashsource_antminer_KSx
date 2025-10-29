int __fastcall <memchr::memmem::rarebytes::RareNeedleBytes as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 1;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aRareneedlebyte,
           15,
           (int)&unk_2AA049,
           6,
           (int)&v3,
           (int)&off_2E16E8,
           &unk_2AA04F,
           6,
           &v4,
           &off_2E16E8);
}
