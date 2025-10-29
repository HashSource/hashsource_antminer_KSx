int __fastcall <object::read::coff::section::SectionTable as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aSectiontable,
           12,
           &unk_2A9DB2,
           8,
           &v3,
           &off_2E2358);
}
