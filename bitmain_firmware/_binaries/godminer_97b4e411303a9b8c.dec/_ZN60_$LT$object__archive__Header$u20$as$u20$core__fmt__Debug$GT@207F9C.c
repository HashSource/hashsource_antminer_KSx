int __fastcall <object::archive::Header as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[14]; // [sp+Ch] [bp-54h] BYREF
  int v4; // [sp+44h] [bp-1Ch] BYREF
  int v5; // [sp+48h] [bp-18h] BYREF
  int v6; // [sp+4Ch] [bp-14h] BYREF
  int v7; // [sp+50h] [bp-10h] BYREF
  int v8; // [sp+54h] [bp-Ch] BYREF
  int v9; // [sp+58h] [bp-8h] BYREF
  int v10; // [sp+5Ch] [bp-4h] BYREF

  v3[12] = &v10;
  v3[10] = &v9;
  v5 = a1 + 16;
  v3[8] = &v8;
  v6 = a1 + 28;
  v3[6] = &v7;
  v7 = a1 + 34;
  v3[4] = &v6;
  v8 = a1 + 40;
  v3[2] = &v5;
  v4 = a1;
  v9 = a1 + 48;
  v3[0] = &v4;
  v3[13] = &off_2E15D0;
  v10 = a1 + 58;
  v3[9] = &off_2E15B0;
  v3[11] = &off_2E15C0;
  v3[7] = &off_2E15A0;
  v3[5] = &off_2E15A0;
  v3[3] = &off_2E1590;
  v3[1] = &off_2E14B8;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A8F5E, 6, &off_2E1558, 7, v3, 7);
}
