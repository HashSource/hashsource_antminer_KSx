int __fastcall <gimli::read::cfi::SectionBaseAddresses as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 32;
  v4 = a1 + 16;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2AF23A,
           20,
           &unk_2AF24E,
           7,
           &v3,
           &off_2E0DBC,
           &unk_2A9F4E,
           4,
           &v4,
           &off_2E0DBC,
           aData_0,
           4,
           &v5,
           &off_2E0DBC);
}
