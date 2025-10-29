int __fastcall <std::sync::mpmc::select::Token as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp-Ch] BYREF
  int v4; // [sp+30h] [bp-8h] BYREF
  int v5; // [sp+34h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 8;
  v5 = a1 + 16;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&unk_2B1DE8,
           5,
           (int)&unk_2B1DED,
           5u,
           (int)&v3,
           (int)&off_2EA780,
           (int)&unk_2B02AC,
           4u,
           (int)&v4,
           (int)&off_2EA790,
           (int)&unk_2B02B0,
           4u,
           (int)&v5,
           (int)&off_2EA7A0);
}
