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
           (int)&unk_296E40,
           12,
           (int)&unk_296E4C,
           0x1Au,
           (int)&v3,
           (int)&off_2CCC44,
           (int)&unk_296E66,
           0x22u,
           (int)&v4,
           (int)&off_2CCC44,
           (int)&unk_296E88,
           0xFu,
           (int)&v5,
           (int)&off_2CCC74,
           (int)&unk_296E97,
           9u,
           (int)&v6,
           (int)&off_2CCC84,
           (int)&unk_296EA0,
           0xAu,
           (int)&v7,
           (int)&off_2CCC44);
}
