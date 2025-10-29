int __fastcall <gimli::common::LineEncoding as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+50h] [bp-14h] BYREF
  int v4; // [sp+54h] [bp-10h] BYREF
  int v5; // [sp+58h] [bp-Ch] BYREF
  int v6; // [sp+5Ch] [bp-8h] BYREF
  int v7; // [sp+60h] [bp-4h] BYREF

  v4 = a1 + 1;
  v5 = a1 + 4;
  v3 = a1;
  v7 = a1 + 3;
  v6 = a1 + 2;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_2B7390,
           12,
           (int)&unk_2B739C,
           0x1Au,
           (int)&v3,
           (int)&off_2ECC44,
           (int)&unk_2B73B6,
           0x22u,
           (int)&v4,
           (int)&off_2ECC44,
           (int)&unk_2B73D8,
           0xFu,
           (int)&v5,
           (int)&off_2ECC74,
           (int)&unk_2B73E7,
           9u,
           (int)&v6,
           (int)&off_2ECC84,
           (int)&unk_2B73F0,
           0xAu,
           (int)&v7,
           (int)&off_2ECC44);
}
