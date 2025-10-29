int __fastcall <object::pe::ImageDynamicRelocation32V2 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_294445,
           26,
           (int)&unk_29445F,
           0xBu,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_29446A,
           0xFu,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_294418,
           6u,
           (int)&v5,
           (int)&off_2CB638,
           (int)&unk_294479,
           0xCu,
           (int)&v6,
           (int)&off_2CB638,
           (int)&unk_29329C,
           5u,
           (int)&v7,
           (int)&off_2CB638);
}
