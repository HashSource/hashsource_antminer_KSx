int __fastcall <object::pe::ImageAuxSymbolWeak as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_293F89,
           18,
           (int)&unk_293F9B,
           0x16u,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_2930AC,
           0x10u,
           (int)&v4,
           (int)&off_2CB638);
}
