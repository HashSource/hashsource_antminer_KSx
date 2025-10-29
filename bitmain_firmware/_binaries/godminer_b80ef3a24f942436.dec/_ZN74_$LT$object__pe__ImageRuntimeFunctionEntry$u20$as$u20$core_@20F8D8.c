int __fastcall <object::pe::ImageRuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 8;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B4F62,
           25,
           (int)&unk_2B4ED4,
           0xDu,
           (int)&v3,
           (int)&off_2EB638,
           (int)&unk_2B4F0A,
           0xBu,
           (int)&v4,
           (int)&off_2EB638,
           (int)&unk_2B4F7B,
           0x1Bu,
           (int)&v5,
           (int)&off_2EB638);
}
