int __fastcall <std::io::readbuf::BorrowedCursor as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aBorrowedcursor,
           14,
           (int)&unk_2A5E74,
           3,
           (int)&v3,
           (int)&off_2DE620,
           &unk_2A5E77,
           5,
           &v4,
           &off_2DD3A8);
}
