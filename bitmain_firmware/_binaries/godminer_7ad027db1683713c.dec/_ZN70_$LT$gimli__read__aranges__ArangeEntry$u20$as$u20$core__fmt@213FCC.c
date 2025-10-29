int __fastcall <gimli::read::aranges::ArangeEntry as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 24;
  v4 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_29AB5A,
           11,
           (int)&unk_29AB65,
           7u,
           (int)&v3,
           (int)&off_2CCDBC,
           (int)aAddress_0,
           7u,
           (int)&v4,
           (int)&off_2CCEEC,
           (int)&unk_29AB73,
           6u,
           (int)&v5,
           (int)&off_2CCEEC);
}
