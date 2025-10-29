int __fastcall <std::path::PrefixComponent as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aPrefixcomponen,
           15,
           (int)&unk_2917CF,
           3u,
           (int)&v3,
           (int)&off_2CA6B0,
           (int)&unk_2917D2,
           6u,
           (int)&v4,
           (int)&off_2CA6C0);
}
