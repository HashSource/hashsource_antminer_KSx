int __fastcall <object::pe::Guid as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v5 = a1 + 6;
  v6 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_293E44,
           4,
           &unk_2952CF,
           5,
           &v3,
           &off_2CC638,
           &unk_2952D4,
           5,
           &v4,
           &off_2CC110,
           &unk_2952D9,
           5,
           &v5,
           &off_2CC110,
           &unk_2952DE,
           5,
           &v6,
           &off_2CC5B0);
}
