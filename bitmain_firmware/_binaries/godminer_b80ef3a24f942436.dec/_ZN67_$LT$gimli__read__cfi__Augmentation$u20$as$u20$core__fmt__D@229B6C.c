int __fastcall <gimli::read::cfi::Augmentation as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_2BAFF5,
           12,
           (int)&unk_2B5CF2,
           4u,
           (int)&v3,
           (int)&off_2ECDCC,
           (int)&unk_2BB001,
           0xBu,
           (int)&v4,
           (int)&off_2ECDDC,
           (int)&unk_2BB00C,
           0x14u,
           (int)&v5,
           (int)&off_2ECDCC,
           (int)&unk_2BB020,
           0x14u,
           (int)&v6,
           (int)&off_2ECC74);
}
