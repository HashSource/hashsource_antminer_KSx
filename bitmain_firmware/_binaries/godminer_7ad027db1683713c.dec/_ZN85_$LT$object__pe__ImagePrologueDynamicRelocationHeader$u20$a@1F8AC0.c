int __fastcall <object::pe::ImagePrologueDynamicRelocationHeader as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aImageprologued,
           36,
           (int)&unk_2944C3,
           0x13u,
           (int)&v3,
           (int)&off_2CB0D0);
}
