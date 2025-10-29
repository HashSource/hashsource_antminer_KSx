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
           &unk_2A70A4,
           4,
           &unk_2A852F,
           5,
           &v3,
           &off_2DF638,
           &unk_2A8534,
           5,
           &v4,
           &off_2DF110,
           &unk_2A8539,
           5,
           &v5,
           &off_2DF110,
           &unk_2A853E,
           5,
           &v6,
           &off_2DF5B0);
}
