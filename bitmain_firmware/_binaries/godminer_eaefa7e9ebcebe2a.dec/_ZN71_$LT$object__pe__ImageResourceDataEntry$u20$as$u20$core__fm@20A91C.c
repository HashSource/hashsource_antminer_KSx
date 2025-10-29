int __fastcall <object::pe::ImageResourceDataEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-8h] BYREF
  int v4; // [sp+44h] [bp-4h] BYREF
  int v5; // [sp+48h] [bp+0h] BYREF
  int v6; // [sp+4Ch] [bp+4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v6 = a1 + 12;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2A9167,
           22,
           &unk_2A917D,
           14,
           &v3,
           &off_2E0638,
           aSize,
           4,
           &v4,
           &off_2E0638,
           &unk_2A918B,
           9,
           &v5,
           &off_2E0638,
           &unk_2A799A,
           8,
           &v6,
           &off_2E0638);
}
