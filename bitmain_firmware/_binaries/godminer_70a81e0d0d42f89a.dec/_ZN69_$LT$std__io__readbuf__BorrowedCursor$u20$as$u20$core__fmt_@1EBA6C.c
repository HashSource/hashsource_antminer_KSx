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
           (int)&unk_2A88D4,
           3,
           (int)&v3,
           (int)&off_2E1620,
           &unk_2A88D7,
           5,
           &v4,
           &off_2E03A8);
}
