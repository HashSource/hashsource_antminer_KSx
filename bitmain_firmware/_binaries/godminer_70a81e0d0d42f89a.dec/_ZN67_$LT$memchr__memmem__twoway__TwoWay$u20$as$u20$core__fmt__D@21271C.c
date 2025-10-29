int __fastcall <memchr::memmem::twoway::TwoWay as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  v5 = a1 + 8;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           aTwoway,
           6,
           &unk_2AC499,
           7,
           &v3,
           &off_2E39A8,
           &unk_2AC4A0,
           12,
           &v4,
           &off_2E36F8,
           &unk_2AC4AC,
           5,
           &v5,
           &off_2E39B8);
}
