int __fastcall <object::read::ObjectMap as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aObjectmap,
           9,
           (int)&unk_29354D,
           7u,
           (int)&v3,
           (int)&off_2CB498,
           (int)&unk_293571,
           7u,
           (int)&v4,
           (int)&off_2CB4A8);
}
