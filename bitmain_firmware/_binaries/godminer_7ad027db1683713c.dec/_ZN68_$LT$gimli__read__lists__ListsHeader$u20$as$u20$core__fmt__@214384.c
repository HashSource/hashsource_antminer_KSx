int __fastcall <gimli::read::lists::ListsHeader as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v4 = a1;
  v3 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aListsheader,
           11,
           (int)&unk_295EA0,
           8u,
           (int)&v3,
           (int)&off_2CCF1C,
           (int)&unk_29AC00,
           0x12u,
           (int)&v4,
           (int)&off_2CCCAC);
}
