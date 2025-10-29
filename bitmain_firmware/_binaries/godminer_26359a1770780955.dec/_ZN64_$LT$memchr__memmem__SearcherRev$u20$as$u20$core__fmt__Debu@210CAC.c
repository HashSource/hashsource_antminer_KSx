int __fastcall <memchr::memmem::SearcherRev as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v4 = a1;
  v3 = a1 + 8;
  v5 = a1 + 16;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), const char *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A9FAE,
           11,
           &unk_2A9F63,
           6,
           &v3,
           &off_2E1A48,
           &unk_2A9F86,
           5,
           &v4,
           &off_2E1A98,
           aKind_1,
           4,
           &v5,
           &off_2E1AC8);
}
