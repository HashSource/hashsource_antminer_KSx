int __fastcall <object::pe::ImageAlphaRuntimeFunctionEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 16;
  v6 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_2949F4,
           30,
           (int)&unk_294984,
           0xDu,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_2949BA,
           0xBu,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_2949C5,
           0x11u,
           (int)&v5,
           (int)&off_2CB638,
           (int)&unk_2949D6,
           0xCu,
           (int)&v6,
           (int)&off_2CB638,
           (int)&unk_2949E2,
           0x12u,
           (int)&v7,
           (int)&off_2CB638);
}
