int __fastcall <gimli::read::cfi::Augmentation as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 24;
  v4 = a1;
  v5 = a1 + 26;
  v6 = a1 + 28;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2B0195,
           12,
           &unk_2AAE92,
           4,
           &v3,
           &off_2E1DCC,
           &unk_2B01A1,
           11,
           &v4,
           &off_2E1DDC,
           &unk_2B01AC,
           20,
           &v5,
           &off_2E1DCC,
           &unk_2B01C0,
           20,
           &v6,
           &off_2E1C74);
}
