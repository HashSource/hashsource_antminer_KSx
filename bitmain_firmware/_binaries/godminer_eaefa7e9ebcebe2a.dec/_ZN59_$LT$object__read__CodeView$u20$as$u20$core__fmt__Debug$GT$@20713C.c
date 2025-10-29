int __fastcall <object::read::CodeView as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 16;
  v5 = a1 + 24;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A798A,
           8,
           &unk_2A76A8,
           4,
           &v3,
           &off_2E04B8,
           &unk_2A76AC,
           4,
           &v4,
           &off_2E0158,
           &unk_2A8379,
           3,
           &v5,
           &off_2E0308);
}
