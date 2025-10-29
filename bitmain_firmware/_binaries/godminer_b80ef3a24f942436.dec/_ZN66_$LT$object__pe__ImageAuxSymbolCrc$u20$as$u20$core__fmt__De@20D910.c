int __fastcall <object::pe::ImageAuxSymbolCrc as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aImageauxsymbol_0,
           17,
           (int)&unk_2B4541,
           3u,
           (int)&v3,
           (int)&off_2EB638);
}
