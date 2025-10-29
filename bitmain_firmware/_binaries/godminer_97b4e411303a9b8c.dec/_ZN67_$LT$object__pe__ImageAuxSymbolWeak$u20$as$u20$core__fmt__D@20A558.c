int __fastcall <object::pe::ImageAuxSymbolWeak as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2A98D9,
           18,
           (int)&unk_2A98EB,
           22,
           (int)&v3,
           (int)&off_2E1638,
           &unk_2A89FC,
           16,
           &v4,
           &off_2E1638);
}
