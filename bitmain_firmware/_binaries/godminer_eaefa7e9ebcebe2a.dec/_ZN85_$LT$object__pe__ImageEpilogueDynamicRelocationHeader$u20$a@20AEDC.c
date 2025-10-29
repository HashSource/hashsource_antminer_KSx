int __fastcall <object::pe::ImageEpilogueDynamicRelocationHeader as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v5 = a1 + 5;
  v6 = a1 + 6;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2A92B6,
           36,
           &unk_2A92DA,
           14,
           &v3,
           &off_2E0638,
           &unk_2A92E8,
           19,
           &v4,
           &off_2E00D0,
           &unk_2A92FB,
           30,
           &v5,
           &off_2E00D0,
           &unk_2A9319,
           23,
           &v6,
           &off_2E0110);
}
