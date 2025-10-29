int __fastcall <object::pe::ImageDynamicRelocation64V2 as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 20;
  v6 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           &unk_2A9265,
           26,
           &unk_2A923F,
           11,
           &v3,
           &off_2E0638,
           &unk_2A924A,
           15,
           &v4,
           &off_2E0638,
           &unk_2A91F8,
           6,
           &v5,
           &off_2E0C90,
           &unk_2A9259,
           12,
           &v6,
           &off_2E0638,
           &unk_2A807C,
           5,
           &v7,
           &off_2E0638);
}
