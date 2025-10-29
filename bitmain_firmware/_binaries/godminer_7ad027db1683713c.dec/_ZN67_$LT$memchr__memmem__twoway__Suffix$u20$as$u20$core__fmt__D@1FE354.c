int __fastcall <memchr::memmem::twoway::Suffix as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2952B1,
           6,
           (int)&unk_2952B7,
           3u,
           (int)&v3,
           (int)&off_2CC6F8,
           (int)&unk_2952AB,
           6u,
           (int)&v4,
           (int)&off_2CC6F8);
}
