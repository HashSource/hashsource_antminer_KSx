int __fastcall <object::pe::ImageVxdHeader as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[102]; // [sp+Ch] [bp-264h] BYREF
  int v4; // [sp+1A4h] [bp-CCh] BYREF
  int v5; // [sp+1A8h] [bp-C8h] BYREF
  int v6; // [sp+1ACh] [bp-C4h] BYREF
  int v7; // [sp+1B0h] [bp-C0h] BYREF
  int v8; // [sp+1B4h] [bp-BCh] BYREF
  int v9; // [sp+1B8h] [bp-B8h] BYREF
  int v10; // [sp+1BCh] [bp-B4h] BYREF
  int v11; // [sp+1C0h] [bp-B0h] BYREF
  int v12; // [sp+1C4h] [bp-ACh] BYREF
  int v13; // [sp+1C8h] [bp-A8h] BYREF
  int v14; // [sp+1CCh] [bp-A4h] BYREF
  int v15; // [sp+1D0h] [bp-A0h] BYREF
  int v16; // [sp+1D4h] [bp-9Ch] BYREF
  int v17; // [sp+1D8h] [bp-98h] BYREF
  int v18; // [sp+1DCh] [bp-94h] BYREF
  int v19; // [sp+1E0h] [bp-90h] BYREF
  int v20; // [sp+1E4h] [bp-8Ch] BYREF
  int v21; // [sp+1E8h] [bp-88h] BYREF
  int v22; // [sp+1ECh] [bp-84h] BYREF
  int v23; // [sp+1F0h] [bp-80h] BYREF
  int v24; // [sp+1F4h] [bp-7Ch] BYREF
  int v25; // [sp+1F8h] [bp-78h] BYREF
  int v26; // [sp+1FCh] [bp-74h] BYREF
  int v27; // [sp+200h] [bp-70h] BYREF
  int v28; // [sp+204h] [bp-6Ch] BYREF
  int v29; // [sp+208h] [bp-68h] BYREF
  int v30; // [sp+20Ch] [bp-64h] BYREF
  int v31; // [sp+210h] [bp-60h] BYREF
  int v32; // [sp+214h] [bp-5Ch] BYREF
  int v33; // [sp+218h] [bp-58h] BYREF
  int v34; // [sp+21Ch] [bp-54h] BYREF
  int v35; // [sp+220h] [bp-50h] BYREF
  int v36; // [sp+224h] [bp-4Ch] BYREF
  int v37; // [sp+228h] [bp-48h] BYREF
  int v38; // [sp+22Ch] [bp-44h] BYREF
  int v39; // [sp+230h] [bp-40h] BYREF
  int v40; // [sp+234h] [bp-3Ch] BYREF
  int v41; // [sp+238h] [bp-38h] BYREF
  int v42; // [sp+23Ch] [bp-34h] BYREF
  int v43; // [sp+240h] [bp-30h] BYREF
  int v44; // [sp+244h] [bp-2Ch] BYREF
  int v45; // [sp+248h] [bp-28h] BYREF
  int v46; // [sp+24Ch] [bp-24h] BYREF
  int v47; // [sp+250h] [bp-20h] BYREF
  int v48; // [sp+254h] [bp-1Ch] BYREF
  int v49; // [sp+258h] [bp-18h] BYREF
  int v50; // [sp+25Ch] [bp-14h] BYREF
  int v51; // [sp+260h] [bp-10h] BYREF
  int v52; // [sp+264h] [bp-Ch] BYREF
  int v53; // [sp+268h] [bp-8h] BYREF
  int v54; // [sp+26Ch] [bp-4h] BYREF

  v5 = a1 + 2;
  v6 = a1 + 3;
  v7 = a1 + 4;
  v8 = a1 + 8;
  v9 = a1 + 10;
  v10 = a1 + 12;
  v11 = a1 + 16;
  v12 = a1 + 20;
  v13 = a1 + 24;
  v14 = a1 + 28;
  v15 = a1 + 32;
  v16 = a1 + 36;
  v17 = a1 + 40;
  v18 = a1 + 44;
  v19 = a1 + 48;
  v20 = a1 + 52;
  v21 = a1 + 56;
  v22 = a1 + 60;
  v23 = a1 + 64;
  v24 = a1 + 68;
  v25 = a1 + 72;
  v26 = a1 + 76;
  v27 = a1 + 80;
  v28 = a1 + 84;
  v29 = a1 + 88;
  v30 = a1 + 92;
  v31 = a1 + 96;
  v32 = a1 + 100;
  v33 = a1 + 104;
  v34 = a1 + 108;
  v35 = a1 + 112;
  v36 = a1 + 116;
  v37 = a1 + 120;
  v38 = a1 + 124;
  v39 = a1 + 128;
  v40 = a1 + 132;
  v41 = a1 + 136;
  v42 = a1 + 140;
  v43 = a1 + 144;
  v44 = a1 + 148;
  v45 = a1 + 152;
  v46 = a1 + 156;
  v47 = a1 + 160;
  v48 = a1 + 164;
  v49 = a1 + 168;
  v50 = a1 + 172;
  v51 = a1 + 184;
  v52 = a1 + 188;
  v4 = a1;
  v54 = a1 + 194;
  v3[100] = &v54;
  v3[98] = &v53;
  v3[96] = &v52;
  v3[94] = &v51;
  v3[92] = &v50;
  v3[90] = &v49;
  v3[88] = &v48;
  v3[86] = &v47;
  v3[84] = &v46;
  v3[82] = &v45;
  v3[80] = &v44;
  v3[78] = &v43;
  v3[76] = &v42;
  v3[74] = &v41;
  v3[72] = &v40;
  v3[70] = &v39;
  v3[68] = &v38;
  v3[66] = &v37;
  v3[64] = &v36;
  v3[62] = &v35;
  v3[60] = &v34;
  v3[58] = &v33;
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
  v3[101] = &off_2E0110;
  v3[99] = &off_2E0110;
  v3[11] = &off_2E0110;
  v3[9] = &off_2E0110;
  v3[1] = &off_2E0110;
  v53 = a1 + 192;
  v3[97] = &off_2E0638;
  v3[95] = &off_2E0638;
  v3[93] = &off_2E0590;
  v3[91] = &off_2E0638;
  v3[89] = &off_2E0638;
  v3[87] = &off_2E0638;
  v3[85] = &off_2E0638;
  v3[83] = &off_2E0638;
  v3[81] = &off_2E0638;
  v3[79] = &off_2E0638;
  v3[77] = &off_2E0638;
  v3[75] = &off_2E0638;
  v3[73] = &off_2E0638;
  v3[71] = &off_2E0638;
  v3[69] = &off_2E0638;
  v3[67] = &off_2E0638;
  v3[65] = &off_2E0638;
  v3[63] = &off_2E0638;
  v3[61] = &off_2E0638;
  v3[59] = &off_2E0638;
  v3[57] = &off_2E0638;
  v3[55] = &off_2E0638;
  v3[53] = &off_2E0638;
  v3[51] = &off_2E0638;
  v3[49] = &off_2E0638;
  v3[47] = &off_2E0638;
  v3[45] = &off_2E0638;
  v3[43] = &off_2E0638;
  v3[41] = &off_2E0638;
  v3[39] = &off_2E0638;
  v3[37] = &off_2E0638;
  v3[35] = &off_2E0638;
  v3[33] = &off_2E0638;
  v3[31] = &off_2E0638;
  v3[29] = &off_2E0638;
  v3[27] = &off_2E0638;
  v3[25] = &off_2E0638;
  v3[23] = &off_2E0638;
  v3[21] = &off_2E0638;
  v3[19] = &off_2E0638;
  v3[17] = &off_2E0638;
  v3[15] = &off_2E0638;
  v3[13] = &off_2E0638;
  v3[7] = &off_2E0638;
  v3[5] = &off_2E00D0;
  v3[3] = &off_2E00D0;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A8679, 14, &off_2E0870, 51, v3, 51);
}
