bool __fastcall <core::core_arch::arm_shared::neon::uint8x16x2_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+10h] [bp-8h] BYREF
  int v4; // [sp+14h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_tuple_field2_finish(
           a2,
           (int)aUint8x16x2T,
           12,
           (int)&v3,
           (int)&off_2E3CD0,
           (int)&v4,
           (int)&off_2E3CD0);
}
