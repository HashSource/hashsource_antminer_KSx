bool __fastcall <core::core_arch::arm_shared::neon::int32x4x3_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+14h] [bp-Ch] BYREF
  int v4; // [sp+18h] [bp-8h] BYREF
  int v5; // [sp+1Ch] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  v5 = a1 + 32;
  return core::fmt::Formatter::debug_tuple_field3_finish(
           a2,
           (int)aInt32x4x3T,
           11,
           (int)&v3,
           (int)&off_2E4D70,
           (int)&v4,
           (int)&off_2E4D70,
           (int)&v5,
           (int)&off_2E4D70);
}
