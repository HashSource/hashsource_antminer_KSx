int __fastcall <object::pe::ImageDosHeader as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _DWORD v3[38]; // [sp+Ch] [bp-E4h] BYREF
  int v4; // [sp+A4h] [bp-4Ch] BYREF
  int v5; // [sp+A8h] [bp-48h] BYREF
  int v6; // [sp+ACh] [bp-44h] BYREF
  int v7; // [sp+B0h] [bp-40h] BYREF
  int v8; // [sp+B4h] [bp-3Ch] BYREF
  int v9; // [sp+B8h] [bp-38h] BYREF
  int v10; // [sp+BCh] [bp-34h] BYREF
  int v11; // [sp+C0h] [bp-30h] BYREF
  int v12; // [sp+C4h] [bp-2Ch] BYREF
  int v13; // [sp+C8h] [bp-28h] BYREF
  int v14; // [sp+CCh] [bp-24h] BYREF
  int v15; // [sp+D0h] [bp-20h] BYREF
  int v16; // [sp+D4h] [bp-1Ch] BYREF
  int v17; // [sp+D8h] [bp-18h] BYREF
  int v18; // [sp+DCh] [bp-14h] BYREF
  int v19; // [sp+E0h] [bp-10h] BYREF
  int v20; // [sp+E4h] [bp-Ch] BYREF
  int v21; // [sp+E8h] [bp-8h] BYREF
  int v22; // [sp+ECh] [bp-4h] BYREF

  v5 = a1 + 2;
  v6 = a1 + 4;
  v7 = a1 + 6;
  v8 = a1 + 8;
  v9 = a1 + 10;
  v10 = a1 + 12;
  v11 = a1 + 14;
  v12 = a1 + 16;
  v13 = a1 + 18;
  v14 = a1 + 20;
  v15 = a1 + 22;
  v16 = a1 + 24;
  v17 = a1 + 26;
  v18 = a1 + 28;
  v19 = a1 + 36;
  v20 = a1 + 38;
  v4 = a1;
  v22 = a1 + 60;
  v3[36] = &v22;
  v3[34] = &v21;
  v3[32] = &v20;
  v3[30] = &v19;
  v3[28] = &v18;
  v3[26] = &v17;
  v3[24] = &v16;
  v3[22] = &v15;
  v3[20] = &v14;
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
  v3[33] = &off_2CB110;
  v3[31] = &off_2CB110;
  v3[27] = &off_2CB110;
  v3[25] = &off_2CB110;
  v3[23] = &off_2CB110;
  v3[21] = &off_2CB110;
  v3[19] = &off_2CB110;
  v3[17] = &off_2CB110;
  v3[15] = &off_2CB110;
  v3[13] = &off_2CB110;
  v3[11] = &off_2CB110;
  v3[9] = &off_2CB110;
  v3[7] = &off_2CB110;
  v3[5] = &off_2CB110;
  v3[3] = &off_2CB110;
  v3[1] = &off_2CB110;
  v21 = a1 + 40;
  v3[37] = &off_2CB638;
  v3[35] = &off_2CB750;
  v3[29] = &off_2CB740;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, (int)&unk_29370F, 14, (int)&off_2CB6A8, 19, (int)v3, 19);
}
