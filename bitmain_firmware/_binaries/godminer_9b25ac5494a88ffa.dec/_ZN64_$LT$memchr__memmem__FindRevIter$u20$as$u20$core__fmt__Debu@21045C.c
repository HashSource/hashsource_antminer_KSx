int __fastcall <memchr::memmem::FindRevIter as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 48;
  return ((int (__fastcall *)(int, void *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A9A96,
           11,
           aHaystack,
           8,
           &v3,
           &off_2E0968,
           &unk_2A9A90,
           6,
           &v4,
           &off_2E09F8,
           &unk_2A9A67,
           3,
           &v5,
           &off_2E0A08);
}
