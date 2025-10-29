int __fastcall <gimli::read::index::UnitIndexSection as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v4 = a1;
  v5 = a1 + 4;
  v3 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B627C,
           16,
           (int)&unk_2BAFEE,
           7u,
           (int)&v3,
           (int)&off_2ECE7C,
           (int)&unk_2BB0C9,
           6u,
           (int)&v4,
           (int)&off_2ECCAC,
           (int)aSize,
           4u,
           (int)&v5,
           (int)&off_2ECCAC);
}
