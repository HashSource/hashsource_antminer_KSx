int __fastcall <object::pe::ImageFunctionEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 8;
  v4 = a1 + 4;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_29618B,
           18,
           &unk_29468C,
           16,
           &v3,
           &off_2CC638,
           &unk_29619D,
           14,
           &v4,
           &off_2CC638,
           &unk_2961AB,
           15,
           &v5,
           &off_2CC638);
}
