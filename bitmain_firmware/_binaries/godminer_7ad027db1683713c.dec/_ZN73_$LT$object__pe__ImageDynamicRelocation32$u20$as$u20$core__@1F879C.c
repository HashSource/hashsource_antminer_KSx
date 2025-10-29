int __fastcall <object::pe::ImageDynamicRelocation32 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_294400,
           24,
           (int)&unk_294418,
           6u,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_29441E,
           0xFu,
           (int)&v4,
           (int)&off_2CB638);
}
