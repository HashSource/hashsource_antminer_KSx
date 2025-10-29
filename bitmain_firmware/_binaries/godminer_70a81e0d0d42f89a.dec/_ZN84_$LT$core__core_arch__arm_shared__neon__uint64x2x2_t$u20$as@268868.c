bool __fastcall <core::core_arch::arm_shared::neon::uint64x2x2_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+10h] [bp-8h] BYREF
  int v4; // [sp+14h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_tuple_field2_finish(
           a2,
           (int)aUint64x2x2T,
           12,
           (int)&v3,
           (int)&off_2E6DF0,
           (int)&v4,
           (int)&off_2E6DF0);
}
