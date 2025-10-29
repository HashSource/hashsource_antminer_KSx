int __fastcall <object::read::CompressedFileRange as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 24;
  v4 = a1;
  v6 = a1 + 16;
  v5 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2A7D67,
           19,
           &unk_2A7D7A,
           6,
           &v3,
           &off_2DF548,
           &unk_2A7AB8,
           6,
           &v4,
           &off_2DF338,
           &unk_2A7D80,
           15,
           &v5,
           &off_2DF338,
           &unk_2A7D8F,
           17,
           &v6,
           &off_2DF338);
}
