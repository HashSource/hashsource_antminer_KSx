int __fastcall <object::pe::ImageLoadConfigDirectory64 as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[84]; // [sp+10h] [bp-1F8h] BYREF
  int v4; // [sp+160h] [bp-A8h] BYREF
  int v5; // [sp+164h] [bp-A4h] BYREF
  int v6; // [sp+168h] [bp-A0h] BYREF
  int v7; // [sp+16Ch] [bp-9Ch] BYREF
  int v8; // [sp+170h] [bp-98h] BYREF
  int v9; // [sp+174h] [bp-94h] BYREF
  int v10; // [sp+178h] [bp-90h] BYREF
  int v11; // [sp+17Ch] [bp-8Ch] BYREF
  int v12; // [sp+180h] [bp-88h] BYREF
  int v13; // [sp+184h] [bp-84h] BYREF
  int v14; // [sp+188h] [bp-80h] BYREF
  int v15; // [sp+18Ch] [bp-7Ch] BYREF
  int v16; // [sp+190h] [bp-78h] BYREF
  int v17; // [sp+194h] [bp-74h] BYREF
  int v18; // [sp+198h] [bp-70h] BYREF
  int v19; // [sp+19Ch] [bp-6Ch] BYREF
  int v20; // [sp+1A0h] [bp-68h] BYREF
  int v21; // [sp+1A4h] [bp-64h] BYREF
  int v22; // [sp+1A8h] [bp-60h] BYREF
  int v23; // [sp+1ACh] [bp-5Ch] BYREF
  int v24; // [sp+1B0h] [bp-58h] BYREF
  int v25; // [sp+1B4h] [bp-54h] BYREF
  int v26; // [sp+1B8h] [bp-50h] BYREF
  int v27; // [sp+1BCh] [bp-4Ch] BYREF
  int v28; // [sp+1C0h] [bp-48h] BYREF
  int v29; // [sp+1C4h] [bp-44h] BYREF
  int v30; // [sp+1C8h] [bp-40h] BYREF
  int v31; // [sp+1CCh] [bp-3Ch] BYREF
  int v32; // [sp+1D0h] [bp-38h] BYREF
  int v33; // [sp+1D4h] [bp-34h] BYREF
  int v34; // [sp+1D8h] [bp-30h] BYREF
  int v35; // [sp+1DCh] [bp-2Ch] BYREF
  int v36; // [sp+1E0h] [bp-28h] BYREF
  int v37; // [sp+1E4h] [bp-24h] BYREF
  int v38; // [sp+1E8h] [bp-20h] BYREF
  int v39; // [sp+1ECh] [bp-1Ch] BYREF
  int v40; // [sp+1F0h] [bp-18h] BYREF
  int v41; // [sp+1F4h] [bp-14h] BYREF
  int v42; // [sp+1F8h] [bp-10h] BYREF
  int v43; // [sp+1FCh] [bp-Ch] BYREF
  int v44; // [sp+200h] [bp-8h] BYREF
  int v45; // [sp+204h] [bp-4h] BYREF

  v5 = a1 + 4;
  v6 = a1 + 8;
  v7 = a1 + 10;
  v8 = a1 + 12;
  v9 = a1 + 16;
  v10 = a1 + 20;
  v11 = a1 + 24;
  v12 = a1 + 32;
  v13 = a1 + 40;
  v14 = a1 + 48;
  v15 = a1 + 56;
  v16 = a1 + 64;
  v17 = a1 + 72;
  v18 = a1 + 76;
  v19 = a1 + 78;
  v20 = a1 + 80;
  v21 = a1 + 88;
  v22 = a1 + 96;
  v23 = a1 + 104;
  v24 = a1 + 112;
  v25 = a1 + 120;
  v26 = a1 + 128;
  v27 = a1 + 136;
  v28 = a1 + 144;
  v29 = a1 + 148;
  v30 = a1 + 160;
  v31 = a1 + 168;
  v32 = a1 + 176;
  v33 = a1 + 184;
  v34 = a1 + 192;
  v35 = a1 + 200;
  v36 = a1 + 208;
  v37 = a1 + 216;
  v38 = a1 + 224;
  v39 = a1 + 228;
  v40 = a1 + 230;
  v41 = a1 + 232;
  v42 = a1 + 240;
  v43 = a1 + 244;
  v4 = a1;
  v45 = a1 + 256;
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
  v3[79] = &off_2CC638;
  v3[77] = &off_2CC638;
  v3[69] = &off_2CC638;
  v3[49] = &off_2CC638;
  v3[27] = &off_2CC638;
  v3[13] = &off_2CC638;
  v3[11] = &off_2CC638;
  v3[9] = &off_2CC638;
  v3[3] = &off_2CC638;
  v3[1] = &off_2CC638;
  v44 = a1 + 248;
  v3[83] = &off_2CCC90;
  v3[81] = &off_2CCC90;
  v3[75] = &off_2CCC90;
  v3[73] = &off_2CC110;
  v3[71] = &off_2CC110;
  v3[67] = &off_2CCC90;
  v3[65] = &off_2CCC90;
  v3[63] = &off_2CCC90;
  v3[61] = &off_2CCC90;
  v3[59] = &off_2CCC90;
  v3[57] = &off_2CCC90;
  v3[55] = &off_2CCC90;
  v3[53] = &off_2CCC90;
  v3[51] = &off_2CD140;
  v3[47] = &off_2CCC90;
  v3[45] = &off_2CCC90;
  v3[43] = &off_2CCC90;
  v3[41] = &off_2CCC90;
  v3[39] = &off_2CCC90;
  v3[37] = &off_2CCC90;
  v3[35] = &off_2CCC90;
  v3[33] = &off_2CCC90;
  v3[31] = &off_2CC110;
  v3[29] = &off_2CC110;
  v3[25] = &off_2CCC90;
  v3[23] = &off_2CCC90;
  v3[21] = &off_2CCC90;
  v3[19] = &off_2CCC90;
  v3[17] = &off_2CCC90;
  v3[15] = &off_2CCC90;
  v3[7] = &off_2CC110;
  v3[5] = &off_2CC110;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_295DDD, 26, &off_2CD150, 42, v3, 42);
}
