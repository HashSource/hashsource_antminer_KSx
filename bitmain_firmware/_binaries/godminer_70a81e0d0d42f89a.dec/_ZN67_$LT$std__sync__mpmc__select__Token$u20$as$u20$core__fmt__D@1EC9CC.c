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
           &unk_2A8AA8,
           5,
           &unk_2A8AAD,
           5,
           &v3,
           &off_2E1780,
           &unk_2A6F6C,
           4,
           &v4,
           &off_2E1790,
           &unk_2A6F70,
           4,
           &v5,
           &off_2E17A0);
}
