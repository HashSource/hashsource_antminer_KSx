int __fastcall <object::pe::ImageFunctionEntry64 as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 16;
  v4 = a1 + 8;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2AA35A,
           20,
           &unk_2A882C,
           16,
           &v3,
           &off_2E0C90,
           &unk_2AA33D,
           14,
           &v4,
           &off_2E0C90,
           &unk_2AA36E,
           38,
           &v5,
           &off_2E0C90);
}
