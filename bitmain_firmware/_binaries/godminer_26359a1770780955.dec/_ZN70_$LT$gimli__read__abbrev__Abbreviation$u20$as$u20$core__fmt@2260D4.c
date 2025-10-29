int __fastcall <gimli::read::abbrev::Abbreviation as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+3Ch] [bp+18h] BYREF
  int v4; // [sp+40h] [bp+1Ch] BYREF
  int v5; // [sp+44h] [bp+20h] BYREF
  int v6; // [sp+48h] [bp+24h] BYREF

  v4 = a1 + 96;
  v3 = a1;
  v5 = a1 + 98;
  v6 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2AF75B,
           12,
           &unk_2AA3F6,
           4,
           &v3,
           &off_2E1EEC,
           &unk_2AF767,
           3,
           &v4,
           &off_2E1E1C,
           &unk_2AF76A,
           12,
           &v5,
           &off_2E1E2C,
           &unk_2AF776,
           10,
           &v6,
           &off_2E1E3C);
}
