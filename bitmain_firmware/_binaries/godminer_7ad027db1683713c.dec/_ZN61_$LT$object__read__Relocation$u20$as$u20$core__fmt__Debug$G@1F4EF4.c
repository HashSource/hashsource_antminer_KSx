int __fastcall <object::read::Relocation as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _DWORD v3[12]; // [sp+10h] [bp-48h] BYREF
  int v4; // [sp+40h] [bp-18h] BYREF
  int v5; // [sp+44h] [bp-14h] BYREF
  int v6; // [sp+48h] [bp-10h] BYREF
  int v7; // [sp+4Ch] [bp-Ch] BYREF
  int v8; // [sp+50h] [bp-8h] BYREF
  int v9; // [sp+54h] [bp-4h] BYREF

  v3[10] = &v9;
  v3[8] = &v8;
  v4 = a1 + 8;
  v3[6] = &v7;
  v5 = a1 + 25;
  v3[4] = &v6;
  v6 = a1 + 24;
  v3[2] = &v5;
  v7 = a1 + 16;
  v3[0] = &v4;
  v3[11] = &off_2CB328;
  v8 = a1;
  v9 = a1 + 26;
  v3[9] = &off_2CB538;
  v3[7] = &off_2CB528;
  v3[5] = &off_2CB0D0;
  v3[3] = &off_2CB518;
  v3[1] = &off_2CB508;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, (int)aRelocation, 10, (int)&off_2CB4D8, 6, (int)v3, 6);
}
