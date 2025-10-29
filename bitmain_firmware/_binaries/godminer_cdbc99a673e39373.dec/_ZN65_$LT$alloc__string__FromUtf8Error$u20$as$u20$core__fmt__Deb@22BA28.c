int __fastcall <alloc::string::FromUtf8Error as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aFromutf8error,
           13,
           (int)&unk_29ED52,
           5,
           (int)&v3,
           (int)&off_2CF984,
           &unk_29ED6B,
           5,
           &v4,
           &off_2CF9B4);
}
