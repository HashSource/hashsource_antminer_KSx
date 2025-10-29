int __fastcall <std::sys_common::process::CommandEnvs as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aCommandenvs,
           11,
           &aModenullnoexit[12],
           4,
           &v3,
           &off_2DEDE8);
}
