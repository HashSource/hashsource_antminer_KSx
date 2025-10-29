int __fastcall <object::read::ObjectMapEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 8;
  v3 = a1;
  v5 = a1 + 16;
  v6 = a1 + 24;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_293578,
           14,
           (int)&unk_293561,
           7u,
           (int)&v3,
           (int)&off_2CB338,
           (int)aSize,
           4u,
           (int)&v4,
           (int)&off_2CB338,
           (int)aName_1,
           4u,
           (int)&v5,
           (int)&off_2CB130,
           (int)&unk_293586,
           6u,
           (int)&v6,
           (int)&off_2CB0A0);
}
