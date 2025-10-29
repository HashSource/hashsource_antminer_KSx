int __fastcall <object::pe::ImageAuxSymbolTokenDef as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 1;
  v3 = a1;
  v5 = a1 + 2;
  v6 = a1 + 6;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2A8666,
           22,
           &unk_2A73DA,
           8,
           &v3,
           &off_2DF0D0,
           &unk_2A867C,
           9,
           &v4,
           &off_2DF0D0,
           &unk_2A8685,
           18,
           &v5,
           &off_2DF638,
           &unk_2A8697,
           9,
           &v6,
           &off_2DF590);
}
