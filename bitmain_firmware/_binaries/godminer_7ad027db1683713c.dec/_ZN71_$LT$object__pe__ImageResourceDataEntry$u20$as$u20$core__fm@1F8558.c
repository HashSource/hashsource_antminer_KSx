int __fastcall <object::pe::ImageResourceDataEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_294387,
           22,
           (int)&unk_29439D,
           0xEu,
           (int)&v3,
           (int)&off_2CB638,
           (int)aSize,
           4u,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_2943AB,
           9u,
           (int)&v5,
           (int)&off_2CB638,
           (int)&unk_292BBA,
           8u,
           (int)&v6,
           (int)&off_2CB638);
}
