int __fastcall <gimli::common::Encoding as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 1;
  v5 = a1 + 2;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2AB4D8,
           8,
           &unk_2AC517,
           12,
           &v3,
           &off_2E1C44,
           &unk_2AC523,
           6,
           &v4,
           &off_2E1C54,
           &unk_2AC529,
           7,
           &v5,
           &off_2E1C64);
}
