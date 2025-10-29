int __fastcall <gimli::read::cfi::SectionBaseAddresses as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v5 = a1 + 32;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2BAFDA,
           20,
           (int)&unk_2BAFEE,
           7u,
           (int)&v3,
           (int)&off_2ECDBC,
           (int)&unk_2B5CEE,
           4u,
           (int)&v4,
           (int)&off_2ECDBC,
           (int)aData_0,
           4u,
           (int)&v5,
           (int)&off_2ECDBC);
}
