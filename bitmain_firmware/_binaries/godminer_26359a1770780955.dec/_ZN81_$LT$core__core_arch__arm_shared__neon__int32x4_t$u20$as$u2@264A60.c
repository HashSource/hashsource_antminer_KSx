bool __fastcall <core::core_arch::arm_shared::neon::int32x4_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-10h] BYREF
  int v4; // [sp+24h] [bp-Ch] BYREF
  int v5; // [sp+28h] [bp-8h] BYREF
  int v6; // [sp+2Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v6 = a1 + 12;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_tuple_field4_finish(
           a2,
           (int)aInt32x4T,
           9,
           (int)&v3,
           (int)&off_2E4638,
           (int)&v4,
           (int)&off_2E4638,
           (int)&v5,
           (int)&off_2E4638,
           (int)&v6,
           (int)&off_2E4638);
}
