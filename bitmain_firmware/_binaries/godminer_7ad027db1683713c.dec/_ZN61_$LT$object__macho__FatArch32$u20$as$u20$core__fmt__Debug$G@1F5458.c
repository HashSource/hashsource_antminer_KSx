int __fastcall <object::macho::FatArch32 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_293643,
           9,
           (int)aCputype,
           7u,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_293653,
           0xAu,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_293308,
           6u,
           (int)&v5,
           (int)&off_2CB638,
           (int)aSize,
           4u,
           (int)&v6,
           (int)&off_2CB638,
           (int)&unk_29365D,
           5u,
           (int)&v7,
           (int)&off_2CB638);
}
