int __fastcall <object::read::pe::import::ImportTable as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 12;
  v4 = a1 + 8;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2948F3,
           11,
           &unk_2948FE,
           12,
           &v3,
           &off_2CC3B8,
           &unk_29490A,
           15,
           &v4,
           &off_2CC308,
           &unk_294919,
           14,
           &v5,
           &off_2CC308);
}
