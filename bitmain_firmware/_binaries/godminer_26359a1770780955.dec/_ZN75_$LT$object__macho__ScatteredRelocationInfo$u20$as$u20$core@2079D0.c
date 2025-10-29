int __fastcall <object::macho::ScatteredRelocationInfo as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+50h] [bp-14h] BYREF
  int v4; // [sp+54h] [bp-10h] BYREF
  int v5; // [sp+58h] [bp-Ch] BYREF
  int v6; // [sp+5Ch] [bp-8h] BYREF
  int v7; // [sp+60h] [bp-4h] BYREF

  v4 = a1 + 8;
  v5 = a1 + 9;
  v3 = a1;
  v7 = a1 + 4;
  v6 = a1 + 10;
  return core::fmt::Formatter::debug_struct_field5_finish(
           a2,
           &unk_2A82EA,
           23,
           &unk_2A82BB,
           9,
           &v3,
           &off_2E0308,
           &unk_2A82D6,
           6,
           &v4,
           &off_2E00D0,
           &unk_2A7812,
           8,
           &v5,
           &off_2E00D0,
           &unk_2A82CF,
           7,
           &v6,
           &off_2E0328,
           &unk_2A8301,
           7,
           &v7,
           &off_2E0308);
}
