int __fastcall <object::read::pe::import::ImportTable as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 12;
  v4 = a1 + 8;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2AA5B3,
           11,
           &unk_2AA5BE,
           12,
           &v3,
           &off_2E23B8,
           &unk_2AA5CA,
           15,
           &v4,
           &off_2E2308,
           &unk_2AA5D9,
           14,
           &v5,
           &off_2E2308);
}
