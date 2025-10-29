int __fastcall <std::sync::mpmc::list::ListToken as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aListtoken,
           9,
           (int)&unk_29188D,
           5u,
           (int)&v3,
           (int)&off_2CA730,
           (int)&unk_291892,
           6u,
           (int)&v4,
           (int)&off_2C93A8);
}
