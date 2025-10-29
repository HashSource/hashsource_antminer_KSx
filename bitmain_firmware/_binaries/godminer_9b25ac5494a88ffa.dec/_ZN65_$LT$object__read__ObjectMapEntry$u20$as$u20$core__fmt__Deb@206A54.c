int __fastcall <object::read::ObjectMapEntry as core::fmt::Debug>::fmt(int a1, int a2)
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
           &unk_2A7D28,
           14,
           &unk_2A7D11,
           7,
           &v3,
           &off_2DF338,
           aSize,
           4,
           &v4,
           &off_2DF338,
           aName_0,
           4,
           &v5,
           &off_2DF130,
           &unk_2A7D36,
           6,
           &v6,
           &off_2DF0A0);
}
