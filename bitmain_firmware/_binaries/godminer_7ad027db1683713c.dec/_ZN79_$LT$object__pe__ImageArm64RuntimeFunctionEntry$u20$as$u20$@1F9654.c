int __fastcall <object::pe::ImageArm64RuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_29499C,
           30,
           (int)&unk_294984,
           0xDu,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_294991,
           0xBu,
           (int)&v4,
           (int)&off_2CB638);
}
