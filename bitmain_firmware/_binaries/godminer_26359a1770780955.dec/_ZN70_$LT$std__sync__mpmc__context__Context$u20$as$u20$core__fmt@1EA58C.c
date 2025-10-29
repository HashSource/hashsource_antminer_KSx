int __fastcall <std::sync::mpmc::context::Context as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aContext,
           7,
           aInner,
           5,
           &v3,
           &off_2DF740);
}
