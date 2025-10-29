int __fastcall <object::pe::ImageArmRuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2A95B8,
           28,
           (int)&unk_2A95D4,
           13,
           (int)&v3,
           (int)&off_2E0638,
           &unk_2A95E1,
           11,
           &v4,
           &off_2E0638);
}
