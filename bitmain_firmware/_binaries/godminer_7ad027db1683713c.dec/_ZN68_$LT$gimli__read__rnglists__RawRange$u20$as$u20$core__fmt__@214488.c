int __fastcall <gimli::read::rnglists::RawRange as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_295EA8,
           8,
           (int)&unk_29AC18,
           5u,
           (int)&v3,
           (int)&off_2CCEEC,
           (int)&unk_29AC1D,
           3u,
           (int)&v4,
           (int)&off_2CCEEC);
}
