int __fastcall <object::pe::ImageTlsDirectory64 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
  v5 = a1 + 8;
  v3[6] = &v7;
  v6 = a1 + 16;
  v3[4] = &v6;
  v7 = a1 + 24;
  v3[2] = &v5;
  v4 = a1;
  v9 = a1 + 36;
  v3[7] = &off_2CBC90;
  v3[5] = &off_2CBC90;
  v3[3] = &off_2CBC90;
  v3[1] = &off_2CBC90;
  v8 = a1 + 32;
  v3[0] = &v4;
  v3[11] = &off_2CB638;
  v3[9] = &off_2CB638;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, (int)aImagetlsdirect, 19, (int)&off_2CBF50, 6, (int)v3, 6);
}
