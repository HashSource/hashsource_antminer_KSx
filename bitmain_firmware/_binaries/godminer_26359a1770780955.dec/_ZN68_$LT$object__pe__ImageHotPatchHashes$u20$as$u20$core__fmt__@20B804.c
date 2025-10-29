int __fastcall <object::pe::ImageHotPatchHashes as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 32;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImagehotpatchh,
           19,
           (int)&unk_2A95B2,
           6,
           (int)&v3,
           (int)&off_2E1318,
           &unk_2A7558,
           4,
           &v4,
           &off_2E0E70);
}
