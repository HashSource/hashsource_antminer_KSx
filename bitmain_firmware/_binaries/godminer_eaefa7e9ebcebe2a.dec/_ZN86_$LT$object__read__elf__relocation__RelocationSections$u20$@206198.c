int __fastcall <object::read::elf::relocation::RelocationSections as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aRelocationsect,
           18,
           &unk_2A810C,
           11,
           &v3,
           &off_2E0368);
}
