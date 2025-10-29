int __fastcall <gimli::read::abbrev::AttributeSpecification as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 10;
  v5 = a1;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_29AB30,
           22,
           (int)aName_1,
           4u,
           (int)&v3,
           (int)&off_2CCE4C,
           (int)&unk_2957AA,
           4u,
           (int)&v4,
           (int)&off_2CCE5C,
           (int)&unk_29AB46,
           0x14u,
           (int)&v5,
           (int)&off_2CCE6C);
}
