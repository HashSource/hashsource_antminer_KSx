int __fastcall <object::pe::ImageAlpha64RuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 8;
  v5 = a1 + 16;
  v3 = a1;
  v7 = a1 + 32;
  v6 = a1 + 24;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           "ImageAlpha64RuntimeFunctionEntry\a",
           32,
           &unk_2AA2D4,
           13,
           &v3,
           &off_2E1C90,
           &unk_2AA30A,
           11,
           &v4,
           &off_2E1C90,
           &unk_2AA315,
           17,
           &v5,
           &off_2E1C90,
           &unk_2AA326,
           12,
           &v6,
           &off_2E1C90,
           &unk_2AA332,
           18,
           &v7,
           &off_2E1C90);
}
