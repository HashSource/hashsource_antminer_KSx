int __fastcall <memchr::memmem::rarebytes::RareNeedleBytes as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 1;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aRareneedlebyte,
           15,
           (int)&unk_295269,
           6u,
           (int)&v3,
           (int)&off_2CC6E8,
           (int)&unk_29526F,
           6u,
           (int)&v4,
           (int)&off_2CC6E8);
}
