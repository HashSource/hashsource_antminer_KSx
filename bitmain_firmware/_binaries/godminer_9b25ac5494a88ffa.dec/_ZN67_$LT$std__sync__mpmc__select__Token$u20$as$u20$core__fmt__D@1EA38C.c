int __fastcall <std::sync::mpmc::select::Token as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 16;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A6048,
           5,
           &unk_2A604D,
           5,
           &v3,
           &off_2DE780,
           &unk_2A450C,
           4,
           &v4,
           &off_2DE790,
           &unk_2A4510,
           4,
           &v5,
           &off_2DE7A0);
}
