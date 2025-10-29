int __fastcall <gimli::read::abbrev::Abbreviation as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+3Ch] [bp+18h] BYREF
  int v4; // [sp+40h] [bp+1Ch] BYREF
  int v5; // [sp+44h] [bp+20h] BYREF
  int v6; // [sp+48h] [bp+24h] BYREF

  v4 = a1 + 96;
  v3 = a1;
  v5 = a1 + 98;
  v6 = a1 + 8;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           (int)&unk_2BB05B,
           12,
           (int)&unk_2B5CF6,
           4u,
           (int)&v3,
           (int)&off_2ECEEC,
           (int)&unk_2BB067,
           3u,
           (int)&v4,
           (int)&off_2ECE1C,
           (int)&unk_2BB06A,
           0xCu,
           (int)&v5,
           (int)&off_2ECE2C,
           (int)&unk_2BB076,
           0xAu,
           (int)&v6,
           (int)&off_2ECE3C);
}
