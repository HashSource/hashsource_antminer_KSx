int __fastcall <gimli::common::LineEncoding as core::fmt::Debug>::fmt(int a1, int a2)
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
           &unk_2AC530,
           12,
           &unk_2AC53C,
           26,
           &v3,
           &off_2E1C44,
           &unk_2AC556,
           34,
           &v4,
           &off_2E1C44,
           &unk_2AC578,
           15,
           &v5,
           &off_2E1C74,
           &unk_2AC587,
           9,
           &v6,
           &off_2E1C84,
           &unk_2AC590,
           10,
           &v7,
           &off_2E1C44);
}
