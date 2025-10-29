bool __fastcall <core::core_arch::simd::u16x2 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+10h] [bp-8h] BYREF
  int v4; // [sp+14h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 2;
  return core::fmt::Formatter::debug_tuple_field2_finish(
           a2,
           (int)aU16x2,
           5,
           (int)&v3,
           (int)&off_2D0698,
           (int)&v4,
           (int)&off_2D0698);
}
