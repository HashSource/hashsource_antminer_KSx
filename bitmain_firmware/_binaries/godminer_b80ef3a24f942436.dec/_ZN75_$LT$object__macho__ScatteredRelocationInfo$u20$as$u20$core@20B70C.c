int __fastcall <object::macho::ScatteredRelocationInfo as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_2B3BEA,
           23,
           (int)&unk_2B3BBB,
           9u,
           (int)&v3,
           (int)&off_2EB308,
           (int)&unk_2B3BD6,
           6u,
           (int)&v4,
           (int)&off_2EB0D0,
           (int)&unk_2B3112,
           8u,
           (int)&v5,
           (int)&off_2EB0D0,
           (int)&unk_2B3BCF,
           7u,
           (int)&v6,
           (int)&off_2EB328,
           (int)&unk_2B3C01,
           7u,
           (int)&v7,
           (int)&off_2EB308);
}
