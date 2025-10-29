int __fastcall <object::pe::ImageLoadConfigCodeIntegrity as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 2;
  v3 = a1;
  v6 = a1 + 8;
  v5 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_295904,
           28,
           &unk_2947EC,
           5,
           &v3,
           &off_2CC110,
           &unk_295920,
           7,
           &v4,
           &off_2CC110,
           &unk_295927,
           14,
           &v5,
           &off_2CC638,
           &unk_29410A,
           8,
           &v6,
           &off_2CC638);
}
