int __fastcall <object::pe::ImageRomHeaders as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 20;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImageromheader,
           15,
           (int)&unk_293D56,
           0xBu,
           (int)&v3,
           (int)&off_2CBCA0,
           (int)&unk_293D61,
           0xFu,
           (int)&v4,
           (int)&off_2CBCD0);
}
