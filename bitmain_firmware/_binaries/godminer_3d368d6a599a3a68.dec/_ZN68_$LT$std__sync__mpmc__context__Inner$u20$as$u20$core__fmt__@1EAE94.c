int __fastcall <std::sync::mpmc::context::Inner as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+3Ch] [bp-10h] BYREF
  int v4; // [sp+40h] [bp-Ch] BYREF
  int v5; // [sp+44h] [bp-8h] BYREF
  int v6; // [sp+48h] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v5 = a1 + 12;
  v6 = a1 + 8;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field4_finish)(
           a2,
           aInner_0,
           5,
           &unk_2A6F59,
           6,
           &v3,
           &off_2DF750,
           &unk_2A6F5F,
           6,
           &v4,
           &off_2DF760,
           &unk_2A6F65,
           6,
           &v5,
           &off_2DF770,
           &unk_2A6F6B,
           9,
           &v6,
           &off_2DE3A8);
}
