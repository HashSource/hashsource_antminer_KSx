int __fastcall <std::os::unix::net::ancillary::AncillaryError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_29174D,
           7,
           (int)&unk_291754,
           0xAu,
           (int)&v3,
           (int)&off_2C93B8,
           (int)&unk_29175E,
           9u,
           (int)&v4,
           (int)&off_2C93B8);
}
