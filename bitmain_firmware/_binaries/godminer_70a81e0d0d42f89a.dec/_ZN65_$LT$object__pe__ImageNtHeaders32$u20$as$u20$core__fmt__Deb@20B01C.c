int __fastcall <object::pe::ImageNtHeaders32 as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  v5 = a1 + 24;
  return ((int (__fastcall *)(int, char *, int, const char *, int, int *, int (**)(), void *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &aE32Lastpagesiz[32],
           16,
           aSignature,
           9,
           &v3,
           &off_2E2638,
           &unk_2AAF66,
           11,
           &v4,
           &off_2E2CA0,
           &unk_2AAF71,
           15,
           &v5,
           &off_2E2CC0);
}
