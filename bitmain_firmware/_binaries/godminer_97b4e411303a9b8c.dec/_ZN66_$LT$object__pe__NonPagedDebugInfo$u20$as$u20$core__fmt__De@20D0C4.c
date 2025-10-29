int __fastcall <object::pe::NonPagedDebugInfo as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[18]; // [sp+Ch] [bp-6Ch] BYREF
  int v4; // [sp+54h] [bp-24h] BYREF
  int v5; // [sp+58h] [bp-20h] BYREF
  int v6; // [sp+5Ch] [bp-1Ch] BYREF
  int v7; // [sp+60h] [bp-18h] BYREF
  int v8; // [sp+64h] [bp-14h] BYREF
  int v9; // [sp+68h] [bp-10h] BYREF
  int v10; // [sp+6Ch] [bp-Ch] BYREF
  int v11; // [sp+70h] [bp-8h] BYREF
  int v12; // [sp+74h] [bp-4h] BYREF

  v3[16] = &v12;
  v3[14] = &v11;
  v5 = a1 + 2;
  v3[12] = &v10;
  v6 = a1 + 4;
  v3[10] = &v9;
  v7 = a1 + 8;
  v3[8] = &v8;
  v8 = a1 + 10;
  v3[6] = &v7;
  v9 = a1 + 12;
  v3[4] = &v6;
  v10 = a1 + 16;
  v3[2] = &v5;
  v4 = a1;
  v12 = a1 + 24;
  v3[15] = &off_2E1638;
  v3[13] = &off_2E1638;
  v3[11] = &off_2E1638;
  v3[5] = &off_2E1638;
  v11 = a1 + 20;
  v3[0] = &v4;
  v3[17] = &off_2E1C90;
  v3[9] = &off_2E1110;
  v3[7] = &off_2E1110;
  v3[3] = &off_2E1110;
  v3[1] = &off_2E1110;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, aNonpageddebugi, 17, &off_2E24D0, 9, v3, 9);
}
