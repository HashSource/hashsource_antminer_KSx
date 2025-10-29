int __fastcall <object::read::archive::ArchiveMember as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 24;
  v5 = a1;
  v6 = a1 + 8;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           aArchivemember,
           13,
           &unk_2A8C52,
           6,
           &v3,
           &off_2E1348,
           aName_0,
           4,
           &v4,
           &off_2E1130,
           &unk_2A8C58,
           6,
           &v5,
           &off_2E1338,
           aSize,
           4,
           &v6,
           &off_2E1338);
}
