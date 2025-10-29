int __fastcall <object::read::elf::version::Version as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 12;
  return ((int (__fastcall *)(int, void *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A7AF3,
           7,
           aName_0,
           4,
           &v3,
           &off_2DF130,
           &unk_2A7060,
           4,
           &v4,
           &off_2DF308,
           &unk_2A7AFA,
           5,
           &v5,
           &off_2DF328);
}
