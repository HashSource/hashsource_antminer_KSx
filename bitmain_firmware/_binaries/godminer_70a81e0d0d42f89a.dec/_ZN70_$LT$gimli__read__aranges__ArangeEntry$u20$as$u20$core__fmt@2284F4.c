int __fastcall <gimli::read::aranges::ArangeEntry as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v5 = a1 + 24;
  v4 = a1 + 16;
  return ((int (__fastcall *)(int, void *, int, void *, int, int *, int (**)(), const char *, int, int *, int (**)(), void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field3_finish)(
           a2,
           &unk_2B1D6A,
           11,
           &unk_2B1D75,
           7,
           &v3,
           &off_2E3DBC,
           aAddress_0,
           7,
           &v4,
           &off_2E3EEC,
           &unk_2B1D83,
           6,
           &v5,
           &off_2E3EEC);
}
