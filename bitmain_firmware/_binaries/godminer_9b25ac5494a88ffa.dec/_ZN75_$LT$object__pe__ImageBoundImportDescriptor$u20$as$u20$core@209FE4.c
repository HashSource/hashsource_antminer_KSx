int __fastcall <object::pe::ImageBoundImportDescriptor as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 6;
  v4 = a1 + 4;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2A897C,
           26,
           &unk_2A822F,
           15,
           &v3,
           &off_2DF638,
           &unk_2A8996,
           18,
           &v4,
           &off_2DF110,
           &unk_2A89A8,
           31,
           &v5,
           &off_2DF110);
}
