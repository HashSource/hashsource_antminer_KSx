int __fastcall <object::pe::ImageImportDescriptor as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4Ch] [bp-14h] BYREF
  int v4; // [sp+50h] [bp-10h] BYREF
  int v5; // [sp+54h] [bp-Ch] BYREF
  int v6; // [sp+58h] [bp-8h] BYREF
  int v7; // [sp+5Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v5 = a1 + 8;
  v3 = a1;
  v7 = a1 + 16;
  v6 = a1 + 12;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           (int)&unk_2B46D9,
           21,
           (int)&unk_2B46EE,
           0x14u,
           (int)&v3,
           (int)&off_2EB638,
           (int)&unk_2B3FCF,
           0xFu,
           (int)&v4,
           (int)&off_2EB638,
           (int)&unk_2B4702,
           0xFu,
           (int)&v5,
           (int)&off_2EB638,
           (int)aName_1,
           4u,
           (int)&v6,
           (int)&off_2EB638,
           (int)&unk_2B4711,
           0xBu,
           (int)&v7,
           (int)&off_2EB638);
}
