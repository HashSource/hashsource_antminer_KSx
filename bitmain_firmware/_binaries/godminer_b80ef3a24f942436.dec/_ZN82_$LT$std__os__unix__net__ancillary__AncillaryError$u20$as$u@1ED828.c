int __fastcall <std::os::unix::net::ancillary::AncillaryError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2B1C9D,
           7,
           (int)&unk_2B1CA4,
           0xAu,
           (int)&v3,
           (int)&off_2E93B8,
           (int)&unk_2B1CAE,
           9u,
           (int)&v4,
           (int)&off_2E93B8);
}
