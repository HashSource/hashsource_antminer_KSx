int __fastcall <object::pe::ImageAuxSymbolTokenDef as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_2B4406,
           22,
           (int)&unk_2B317A,
           8u,
           (int)&v3,
           (int)&off_2EB0D0,
           (int)&unk_2B441C,
           9u,
           (int)&v4,
           (int)&off_2EB0D0,
           (int)&unk_2B4425,
           0x12u,
           (int)&v5,
           (int)&off_2EB638,
           (int)&unk_2B4437,
           9u,
           (int)&v6,
           (int)&off_2EB590);
}
