int __fastcall <std::os::unix::net::ancillary::SocketAncillary as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_291767,
           15,
           (int)&unk_290471,
           6u,
           (int)&v3,
           (int)&off_2CA670,
           (int)&unk_291776,
           6u,
           (int)&v4,
           (int)&off_2C93A8,
           (int)&unk_29177C,
           9u,
           (int)&v5,
           (int)&off_2CA5F0);
}
