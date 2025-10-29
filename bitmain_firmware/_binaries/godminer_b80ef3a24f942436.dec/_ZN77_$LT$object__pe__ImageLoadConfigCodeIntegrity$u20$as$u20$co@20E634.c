int __fastcall <object::pe::ImageLoadConfigCodeIntegrity as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 2;
  v3 = a1;
  v6 = a1 + 8;
  v5 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2B4904,
           28,
           (int)&unk_2B37EC,
           5u,
           (int)&v3,
           (int)&off_2EB110,
           (int)&unk_2B4920,
           7u,
           (int)&v4,
           (int)&off_2EB110,
           (int)&unk_2B4927,
           0xEu,
           (int)&v5,
           (int)&off_2EB638,
           (int)&unk_2B310A,
           8u,
           (int)&v6,
           (int)&off_2EB638);
}
