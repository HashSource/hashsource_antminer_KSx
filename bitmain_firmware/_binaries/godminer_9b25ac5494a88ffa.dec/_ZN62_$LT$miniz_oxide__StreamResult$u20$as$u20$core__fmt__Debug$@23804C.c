int __fastcall <miniz_oxide::StreamResult as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1 + 8;
  v5 = a1;
  v4 = a1 + 12;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2B187B,
           12,
           &unk_2B1887,
           14,
           &v3,
           &off_2E2554,
           &unk_2B1895,
           13,
           &v4,
           &off_2E2554,
           &unk_2B18A2,
           6,
           &v5,
           &off_2E2564);
}
