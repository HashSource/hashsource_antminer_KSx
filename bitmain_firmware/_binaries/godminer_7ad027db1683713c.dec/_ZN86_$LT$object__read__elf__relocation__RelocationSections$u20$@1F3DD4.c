int __fastcall <object::read::elf::relocation::RelocationSections as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aRelocationsect,
           18,
           (int)&unk_29332C,
           0xBu,
           (int)&v3,
           (int)&off_2CB368);
}
