int __fastcall <object::macho::FatArch32 as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 16;
  v6 = a1 + 12;
  return ((int (__fastcall *)(int, void *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)(), const char *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field5_finish)(
           a2,
           &unk_294B93,
           9,
           aCputype,
           7,
           &v3,
           &off_2CC638,
           &unk_294BA3,
           10,
           &v4,
           &off_2CC638,
           &unk_294858,
           6,
           &v5,
           &off_2CC638,
           aSize,
           4,
           &v6,
           &off_2CC638,
           &unk_294BAD,
           5,
           &v7,
           &off_2CC638);
}
