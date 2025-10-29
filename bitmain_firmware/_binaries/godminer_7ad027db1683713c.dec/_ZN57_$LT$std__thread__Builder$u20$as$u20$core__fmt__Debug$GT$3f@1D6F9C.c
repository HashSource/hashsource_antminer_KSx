int __fastcall <std::thread::Builder as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aBuilder,
           7,
           (int)aName_0,
           4u,
           (int)&v3,
           (int)&off_2CA540,
           (int)&unk_291440,
           0xAu,
           (int)&v4,
           (int)&off_2C9388);
}
