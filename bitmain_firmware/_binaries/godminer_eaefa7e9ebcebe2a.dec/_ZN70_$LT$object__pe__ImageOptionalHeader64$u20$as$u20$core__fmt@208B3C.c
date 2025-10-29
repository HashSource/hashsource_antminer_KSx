int __fastcall <object::pe::ImageOptionalHeader64 as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[58]; // [sp+Ch] [bp-15Ch] BYREF
  int v4; // [sp+F4h] [bp-74h] BYREF
  int v5; // [sp+F8h] [bp-70h] BYREF
  int v6; // [sp+FCh] [bp-6Ch] BYREF
  int v7; // [sp+100h] [bp-68h] BYREF
  int v8; // [sp+104h] [bp-64h] BYREF
  int v9; // [sp+108h] [bp-60h] BYREF
  int v10; // [sp+10Ch] [bp-5Ch] BYREF
  int v11; // [sp+110h] [bp-58h] BYREF
  int v12; // [sp+114h] [bp-54h] BYREF
  int v13; // [sp+118h] [bp-50h] BYREF
  int v14; // [sp+11Ch] [bp-4Ch] BYREF
  int v15; // [sp+120h] [bp-48h] BYREF
  int v16; // [sp+124h] [bp-44h] BYREF
  int v17; // [sp+128h] [bp-40h] BYREF
  int v18; // [sp+12Ch] [bp-3Ch] BYREF
  int v19; // [sp+130h] [bp-38h] BYREF
  int v20; // [sp+134h] [bp-34h] BYREF
  int v21; // [sp+138h] [bp-30h] BYREF
  int v22; // [sp+13Ch] [bp-2Ch] BYREF
  int v23; // [sp+140h] [bp-28h] BYREF
  int v24; // [sp+144h] [bp-24h] BYREF
  int v25; // [sp+148h] [bp-20h] BYREF
  int v26; // [sp+14Ch] [bp-1Ch] BYREF
  int v27; // [sp+150h] [bp-18h] BYREF
  int v28; // [sp+154h] [bp-14h] BYREF
  int v29; // [sp+158h] [bp-10h] BYREF
  int v30; // [sp+15Ch] [bp-Ch] BYREF
  int v31; // [sp+160h] [bp-8h] BYREF
  int v32; // [sp+164h] [bp-4h] BYREF

  v5 = a1 + 2;
  v6 = a1 + 3;
  v7 = a1 + 4;
  v8 = a1 + 8;
  v9 = a1 + 12;
  v10 = a1 + 16;
  v11 = a1 + 20;
  v12 = a1 + 24;
  v13 = a1 + 32;
  v14 = a1 + 36;
  v15 = a1 + 40;
  v16 = a1 + 42;
  v17 = a1 + 44;
  v18 = a1 + 46;
  v19 = a1 + 48;
  v20 = a1 + 50;
  v21 = a1 + 52;
  v22 = a1 + 56;
  v23 = a1 + 60;
  v24 = a1 + 64;
  v25 = a1 + 68;
  v26 = a1 + 70;
  v27 = a1 + 72;
  v28 = a1 + 80;
  v29 = a1 + 88;
  v30 = a1 + 96;
  v4 = a1;
  v32 = a1 + 108;
  v3[56] = &v32;
  v3[54] = &v31;
  v3[52] = &v30;
  v3[50] = &v29;
  v3[48] = &v28;
  v3[46] = &v27;
  v3[44] = &v26;
  v3[42] = &v25;
  v3[40] = &v24;
  v3[38] = &v23;
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
  v3[45] = &off_2E0110;
  v3[43] = &off_2E0110;
  v3[33] = &off_2E0110;
  v3[31] = &off_2E0110;
  v3[29] = &off_2E0110;
  v3[27] = &off_2E0110;
  v3[25] = &off_2E0110;
  v3[23] = &off_2E0110;
  v3[1] = &off_2E0110;
  v31 = a1 + 104;
  v3[57] = &off_2E0638;
  v3[55] = &off_2E0638;
  v3[53] = &off_2E0C90;
  v3[51] = &off_2E0C90;
  v3[49] = &off_2E0C90;
  v3[47] = &off_2E0C90;
  v3[41] = &off_2E0638;
  v3[39] = &off_2E0638;
  v3[37] = &off_2E0638;
  v3[35] = &off_2E0638;
  v3[21] = &off_2E0638;
  v3[19] = &off_2E0638;
  v3[17] = &off_2E0C90;
  v3[15] = &off_2E0638;
  v3[13] = &off_2E0638;
  v3[11] = &off_2E0638;
  v3[9] = &off_2E0638;
  v3[7] = &off_2E0638;
  v3[5] = &off_2E00D0;
  v3[3] = &off_2E00D0;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A8B18, 21, &off_2E0BA8, 29, v3, 29);
}
