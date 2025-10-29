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
           &unk_2AB0C6,
           22,
           &unk_2A9E3A,
           8,
           &v3,
           &off_2E20D0,
           &unk_2AB0DC,
           9,
           &v4,
           &off_2E20D0,
           &unk_2AB0E5,
           18,
           &v5,
           &off_2E2638,
           &unk_2AB0F7,
           9,
           &v6,
           &off_2E2590);
}
