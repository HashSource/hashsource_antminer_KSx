int __fastcall <core::num::flt2dec::decoder::Decoded as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 8;
  v5 = a1 + 16;
  v3 = a1;
  v6 = a1 + 24;
  v7 = a1 + 26;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_2B762E,
           7,
           (int)&unk_2B3CD1,
           4u,
           (int)&v3,
           (int)&off_2E410C,
           (int)&unk_2B7635,
           5u,
           (int)&v4,
           (int)&off_2E410C,
           (int)&unk_2B3CD5,
           4u,
           (int)&v5,
           (int)&off_2E410C,
           (int)&unk_2B763A,
           3u,
           (int)&v6,
           (int)&off_2E4678,
           (int)&unk_2B763D,
           9u,
           (int)&v7,
           (int)&off_2E4658);
}
