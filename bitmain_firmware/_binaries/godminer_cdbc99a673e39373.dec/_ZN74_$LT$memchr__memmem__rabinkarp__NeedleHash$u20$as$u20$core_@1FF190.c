int __fastcall <memchr::memmem::rabinkarp::NeedleHash as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aNeedlehash,
           10,
           (int)&unk_293E00,
           4,
           (int)&v3,
           (int)&off_2CD988,
           &unk_2967A1,
           9,
           &v4,
           &off_2CD978);
}
