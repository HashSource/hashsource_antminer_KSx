int __fastcall <object::macho::FatHeader as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)&unk_2AA841,
           9,
           (int)aMagic,
           5,
           (int)&v3,
           (int)&off_2E2638,
           &unk_2AA84A,
           9,
           &v4,
           &off_2E2638);
}
