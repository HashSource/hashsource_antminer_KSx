int __fastcall <std::io::readbuf::BorrowedCursor as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aBorrowedcursor,
           14,
           (int)&unk_2B1C14,
           3u,
           (int)&v3,
           (int)&off_2EA620,
           (int)&unk_2B1C17,
           5u,
           (int)&v4,
           (int)&off_2E93A8);
}
