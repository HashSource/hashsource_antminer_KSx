int __fastcall <object::pe::ImageRomHeaders as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 20;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImageromheader,
           15,
           (int)&unk_2A8506,
           11,
           (int)&v3,
           (int)&off_2DFCA0,
           &unk_2A8511,
           15,
           &v4,
           &off_2DFCD0);
}
