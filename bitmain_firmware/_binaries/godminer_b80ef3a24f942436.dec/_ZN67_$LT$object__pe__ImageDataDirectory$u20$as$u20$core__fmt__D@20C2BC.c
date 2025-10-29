int __fastcall <object::pe::ImageDataDirectory as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2B402C,
           18,
           (int)&unk_2B38B5,
           0xFu,
           (int)&v3,
           (int)&off_2EB638,
           (int)aSize,
           4u,
           (int)&v4,
           (int)&off_2EB638);
}
