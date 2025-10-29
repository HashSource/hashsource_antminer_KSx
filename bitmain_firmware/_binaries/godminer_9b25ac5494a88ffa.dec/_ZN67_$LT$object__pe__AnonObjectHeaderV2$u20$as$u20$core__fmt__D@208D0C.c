int __fastcall <object::pe::AnonObjectHeaderV2 as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[20]; // [sp+10h] [bp-78h] BYREF
  int v4; // [sp+60h] [bp-28h] BYREF
  int v5; // [sp+64h] [bp-24h] BYREF
  int v6; // [sp+68h] [bp-20h] BYREF
  int v7; // [sp+6Ch] [bp-1Ch] BYREF
  int v8; // [sp+70h] [bp-18h] BYREF
  int v9; // [sp+74h] [bp-14h] BYREF
  int v10; // [sp+78h] [bp-10h] BYREF
  int v11; // [sp+7Ch] [bp-Ch] BYREF
  int v12; // [sp+80h] [bp-8h] BYREF
  int v13; // [sp+84h] [bp-4h] BYREF

  v5 = a1 + 2;
  v6 = a1 + 4;
  v7 = a1 + 6;
  v8 = a1 + 8;
  v9 = a1 + 12;
  v10 = a1 + 28;
  v11 = a1 + 32;
  v4 = a1;
  v13 = a1 + 40;
  v3[18] = &v13;
  v3[16] = &v12;
  v3[14] = &v11;
  v3[12] = &v10;
  v3[10] = &v9;
  v3[8] = &v8;
  v3[6] = &v7;
  v3[4] = &v6;
  v3[2] = &v5;
  v3[0] = &v4;
  v3[7] = &off_2DF110;
  v3[5] = &off_2DF110;
  v3[3] = &off_2DF110;
  v3[1] = &off_2DF110;
  v12 = a1 + 36;
  v3[19] = &off_2DF638;
  v3[17] = &off_2DF638;
  v3[15] = &off_2DF638;
  v3[13] = &off_2DF638;
  v3[11] = &off_2DFD18;
  v3[9] = &off_2DF638;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A855D, 18, &off_2DFD28, 10, v3, 10);
}
