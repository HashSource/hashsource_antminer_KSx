int __fastcall <gimli::read::index::UnitIndexSection as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v4 = a1;
  v5 = a1 + 4;
  v3 = a1 + 8;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2AAB0C,
           16,
           &unk_2AF87E,
           7,
           &v3,
           &off_2E1E7C,
           &unk_2AF959,
           6,
           &v4,
           &off_2E1CAC,
           aSize,
           4,
           &v5,
           &off_2E1CAC);
}
