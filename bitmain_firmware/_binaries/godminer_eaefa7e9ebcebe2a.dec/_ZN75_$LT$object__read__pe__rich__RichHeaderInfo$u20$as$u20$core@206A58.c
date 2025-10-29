int __fastcall <object::read::pe::rich::RichHeaderInfo as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 12;
  v5 = a1 + 16;
  v6 = a1;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2A825B,
           14,
           &unk_2A80E8,
           6,
           &v3,
           &off_2E00A0,
           aLength,
           6,
           &v4,
           &off_2E00A0,
           &unk_2A826F,
           7,
           &v5,
           &off_2E0308,
           &unk_2A8276,
           14,
           &v6,
           &off_2E0458);
}
