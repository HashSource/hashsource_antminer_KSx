int __fastcall <gimli::read::abbrev::AttributeSpecification as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 10;
  v5 = a1;
  return ((int (__fastcall *)(int, void *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2B1D40,
           22,
           aName_0,
           4,
           &v3,
           &off_2E3E4C,
           &unk_2AC9BA,
           4,
           &v4,
           &off_2E3E5C,
           &unk_2B1D56,
           20,
           &v5,
           &off_2E3E6C);
}
