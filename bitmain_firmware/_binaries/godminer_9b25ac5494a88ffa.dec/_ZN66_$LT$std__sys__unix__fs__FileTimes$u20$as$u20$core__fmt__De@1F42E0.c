int __fastcall <std::sys::unix::fs::FileTimes as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aFiletimes,
           9,
           (int)aAccessed,
           8,
           (int)&v3,
           (int)&off_2DEC88,
           aModified,
           8,
           &v4,
           &off_2DEC88);
}
