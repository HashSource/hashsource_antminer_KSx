int __fastcall <memchr::memmem::NeedleInfo as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aNeedleinfo,
           10,
           (int)&unk_2A9ADD,
           9,
           (int)&v3,
           (int)&off_2E0A88,
           &unk_2A9AE6,
           5,
           &v4,
           &off_2E0A98);
}
