int __fastcall <gimli::read::cfi::BaseAddresses as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 48;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_29AA71,
           13,
           (int)&unk_29AA7E,
           0xCu,
           (int)&v3,
           (int)&off_2CCDAC,
           (int)&unk_295E80,
           8u,
           (int)&v4,
           (int)&off_2CCDAC);
}
