int __fastcall <object::pe::ImageAlphaRuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 16;
  v6 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           &unk_2A9644,
           30,
           &unk_2A95D4,
           13,
           &v3,
           &off_2E0638,
           &unk_2A960A,
           11,
           &v4,
           &off_2E0638,
           &unk_2A9615,
           17,
           &v5,
           &off_2E0638,
           &unk_2A9626,
           12,
           &v6,
           &off_2E0638,
           &unk_2A9632,
           18,
           &v7,
           &off_2E0638);
}
