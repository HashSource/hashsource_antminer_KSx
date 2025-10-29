int __fastcall <object::read::SymbolMapName as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aSymbolmapname,
           13,
           (int)&unk_2A7D11,
           7,
           (int)&v3,
           (int)&off_2DF338,
           aName_0,
           4,
           &v4,
           &off_2DF468);
}
