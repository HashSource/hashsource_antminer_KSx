int __fastcall <object::pe::ImageAlpha64RuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 8;
  v5 = a1 + 16;
  v3 = a1;
  v7 = a1 + 32;
  v6 = a1 + 24;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)"ImageAlpha64RuntimeFunctionEntry\a",
           32,
           (int)&unk_2B4ED4,
           0xDu,
           (int)&v3,
           (int)&off_2EBC90,
           (int)&unk_2B4F0A,
           0xBu,
           (int)&v4,
           (int)&off_2EBC90,
           (int)&unk_2B4F15,
           0x11u,
           (int)&v5,
           (int)&off_2EBC90,
           (int)&unk_2B4F26,
           0xCu,
           (int)&v6,
           (int)&off_2EBC90,
           (int)&unk_2B4F32,
           0x12u,
           (int)&v7,
           (int)&off_2EBC90);
}
