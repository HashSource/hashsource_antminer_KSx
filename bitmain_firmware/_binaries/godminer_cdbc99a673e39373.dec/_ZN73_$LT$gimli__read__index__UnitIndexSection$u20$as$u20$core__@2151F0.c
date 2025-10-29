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
           &unk_29727C,
           16,
           &unk_29BFEE,
           7,
           &v3,
           &off_2CDE7C,
           &unk_29C0C9,
           6,
           &v4,
           &off_2CDCAC,
           aSize,
           4,
           &v5,
           &off_2CDCAC);
}
