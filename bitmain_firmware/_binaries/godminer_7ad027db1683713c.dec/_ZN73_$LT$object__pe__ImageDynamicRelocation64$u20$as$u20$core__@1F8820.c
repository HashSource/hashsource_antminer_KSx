int __fastcall <object::pe::ImageDynamicRelocation64 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImagedynamicre,
           24,
           (int)&unk_294418,
           6u,
           (int)&v3,
           (int)&off_2CBC90,
           (int)&unk_29441E,
           0xFu,
           (int)&v4,
           (int)&off_2CB638);
}
