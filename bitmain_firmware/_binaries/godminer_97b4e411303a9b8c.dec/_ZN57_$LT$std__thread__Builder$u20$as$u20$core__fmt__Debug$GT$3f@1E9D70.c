int __fastcall <std::thread::Builder as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aBuilder,
           7,
           (int)aName,
           4,
           (int)&v3,
           (int)&off_2E0540,
           &unk_2A6D90,
           10,
           &v4,
           &off_2DF388);
}
