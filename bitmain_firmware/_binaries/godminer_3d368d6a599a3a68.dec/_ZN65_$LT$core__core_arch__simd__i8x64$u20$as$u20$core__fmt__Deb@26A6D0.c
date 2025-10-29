bool __fastcall <core::core_arch::simd::i8x64 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // r5
  int *v4; // r0
  int v5; // r4
  _DWORD *v6; // r5
  _DWORD v8[128]; // [sp+4h] [bp-30Ch] BYREF
  int v9; // [sp+204h] [bp-10Ch] BYREF
  int v10; // [sp+208h] [bp-108h] BYREF
  int v11; // [sp+20Ch] [bp-104h] BYREF
  int v12; // [sp+210h] [bp-100h] BYREF
  int v13; // [sp+214h] [bp-FCh] BYREF
  int v14; // [sp+218h] [bp-F8h] BYREF
  int v15; // [sp+21Ch] [bp-F4h] BYREF
  int v16; // [sp+220h] [bp-F0h] BYREF
  int v17; // [sp+224h] [bp-ECh] BYREF
  int v18; // [sp+228h] [bp-E8h] BYREF
  int v19; // [sp+22Ch] [bp-E4h] BYREF
  int v20; // [sp+230h] [bp-E0h] BYREF
  int v21; // [sp+234h] [bp-DCh] BYREF
  int v22; // [sp+238h] [bp-D8h] BYREF
  int v23; // [sp+23Ch] [bp-D4h] BYREF
  int v24; // [sp+240h] [bp-D0h] BYREF
  int v25; // [sp+244h] [bp-CCh] BYREF
  int v26; // [sp+248h] [bp-C8h] BYREF
  int v27; // [sp+24Ch] [bp-C4h] BYREF
  int v28; // [sp+250h] [bp-C0h] BYREF
  int v29; // [sp+254h] [bp-BCh] BYREF
  int v30; // [sp+258h] [bp-B8h] BYREF
  int v31; // [sp+25Ch] [bp-B4h] BYREF
  int v32; // [sp+260h] [bp-B0h] BYREF
  int v33; // [sp+264h] [bp-ACh] BYREF
  int v34; // [sp+268h] [bp-A8h] BYREF
  int v35; // [sp+26Ch] [bp-A4h] BYREF
  int v36; // [sp+270h] [bp-A0h] BYREF
  int v37; // [sp+274h] [bp-9Ch] BYREF
  int v38; // [sp+278h] [bp-98h] BYREF
  int v39; // [sp+27Ch] [bp-94h] BYREF
  int v40; // [sp+280h] [bp-90h] BYREF
  int v41; // [sp+284h] [bp-8Ch] BYREF
  int v42; // [sp+288h] [bp-88h] BYREF
  int v43; // [sp+28Ch] [bp-84h] BYREF
  int v44; // [sp+290h] [bp-80h] BYREF
  int v45; // [sp+294h] [bp-7Ch] BYREF
  int v46; // [sp+298h] [bp-78h] BYREF
  int v47; // [sp+29Ch] [bp-74h] BYREF
  int v48; // [sp+2A0h] [bp-70h] BYREF
  int v49; // [sp+2A4h] [bp-6Ch] BYREF
  int v50; // [sp+2A8h] [bp-68h] BYREF
  int v51; // [sp+2ACh] [bp-64h] BYREF
  int v52; // [sp+2B0h] [bp-60h] BYREF
  int v53; // [sp+2B4h] [bp-5Ch] BYREF
  int v54; // [sp+2B8h] [bp-58h] BYREF
  int v55; // [sp+2BCh] [bp-54h] BYREF
  int v56; // [sp+2C0h] [bp-50h] BYREF
  int v57; // [sp+2C4h] [bp-4Ch] BYREF
  int v58; // [sp+2C8h] [bp-48h] BYREF
  int v59; // [sp+2CCh] [bp-44h] BYREF
  int v60; // [sp+2D0h] [bp-40h] BYREF
  int v61; // [sp+2D4h] [bp-3Ch] BYREF
  int v62; // [sp+2D8h] [bp-38h] BYREF
  int v63; // [sp+2DCh] [bp-34h] BYREF
  int v64; // [sp+2E0h] [bp-30h] BYREF
  int v65; // [sp+2E4h] [bp-2Ch] BYREF
  int v66; // [sp+2E8h] [bp-28h] BYREF
  int v67; // [sp+2ECh] [bp-24h] BYREF
  int v68; // [sp+2F0h] [bp-20h] BYREF
  int v69; // [sp+2F4h] [bp-1Ch] BYREF
  int v70; // [sp+2F8h] [bp-18h] BYREF
  int v71; // [sp+2FCh] [bp-14h] BYREF
  int v72; // [sp+300h] [bp-10h] BYREF
  int v73; // [sp+304h] [bp-Ch] BYREF
  _DWORD *v74; // [sp+308h] [bp-8h]
  unsigned __int8 v75; // [sp+30Ch] [bp-4h]
  char v76; // [sp+30Dh] [bp-3h]

  v10 = a1 + 1;
  v11 = a1 + 2;
  v12 = a1 + 3;
  v13 = a1 + 4;
  v14 = a1 + 5;
  v15 = a1 + 6;
  v16 = a1 + 7;
  v17 = a1 + 8;
  v18 = a1 + 9;
  v19 = a1 + 10;
  v20 = a1 + 11;
  v21 = a1 + 12;
  v22 = a1 + 13;
  v23 = a1 + 14;
  v24 = a1 + 15;
  v25 = a1 + 16;
  v26 = a1 + 17;
  v27 = a1 + 18;
  v28 = a1 + 19;
  v29 = a1 + 20;
  v30 = a1 + 21;
  v31 = a1 + 22;
  v32 = a1 + 23;
  v33 = a1 + 24;
  v34 = a1 + 25;
  v35 = a1 + 26;
  v36 = a1 + 27;
  v37 = a1 + 28;
  v38 = a1 + 29;
  v39 = a1 + 30;
  v40 = a1 + 31;
  v41 = a1 + 32;
  v42 = a1 + 33;
  v43 = a1 + 34;
  v44 = a1 + 35;
  v45 = a1 + 36;
  v46 = a1 + 37;
  v47 = a1 + 38;
  v48 = a1 + 39;
  v49 = a1 + 40;
  v50 = a1 + 41;
  v51 = a1 + 42;
  v52 = a1 + 43;
  v53 = a1 + 44;
  v54 = a1 + 45;
  v55 = a1 + 46;
  v56 = a1 + 47;
  v57 = a1 + 48;
  v58 = a1 + 49;
  v59 = a1 + 50;
  v60 = a1 + 51;
  v61 = a1 + 52;
  v62 = a1 + 53;
  v63 = a1 + 54;
  v64 = a1 + 55;
  v65 = a1 + 56;
  v66 = a1 + 57;
  v67 = a1 + 58;
  v68 = a1 + 59;
  v69 = a1 + 60;
  v70 = a1 + 61;
  v9 = a1;
  v72 = a1 + 63;
  v8[126] = &v72;
  v8[124] = &v71;
  v8[122] = &v70;
  v8[120] = &v69;
  v8[118] = &v68;
  v8[116] = &v67;
  v8[114] = &v66;
  v8[112] = &v65;
  v8[110] = &v64;
  v8[108] = &v63;
  v8[106] = &v62;
  v8[104] = &v61;
  v8[102] = &v60;
  v8[100] = &v59;
  v8[98] = &v58;
  v8[96] = &v57;
  v8[94] = &v56;
  v8[92] = &v55;
  v8[90] = &v54;
  v8[88] = &v53;
  v8[86] = &v52;
  v8[84] = &v51;
  v8[82] = &v50;
  v8[80] = &v49;
  v8[78] = &v48;
  v8[76] = &v47;
  v8[74] = &v46;
  v8[72] = &v45;
  v8[70] = &v44;
  v8[68] = &v43;
  v8[66] = &v42;
  v8[64] = &v41;
  v8[62] = &v40;
  v8[60] = &v39;
  v8[58] = &v38;
  v8[56] = &v37;
  v8[54] = &v36;
  v8[52] = &v35;
  v8[50] = &v34;
  v8[48] = &v33;
  v8[46] = &v32;
  v8[44] = &v31;
  v8[42] = &v30;
  v8[40] = &v29;
  v8[38] = &v28;
  v8[36] = &v27;
  v8[34] = &v26;
  v8[32] = &v25;
  v8[30] = &v24;
  v8[28] = &v23;
  v8[26] = &v22;
  v8[24] = &v21;
  v8[22] = &v20;
  v8[20] = &v19;
  v8[18] = &v18;
  v8[16] = &v17;
  v8[14] = &v16;
  v8[12] = &v15;
  v8[10] = &v14;
  v8[8] = &v13;
  v8[6] = &v12;
  v8[4] = &v11;
  v8[2] = &v10;
  v71 = a1 + 62;
  v8[127] = &off_2E4C80;
  v8[125] = &off_2E4C80;
  v8[123] = &off_2E4C80;
  v8[121] = &off_2E4C80;
  v8[119] = &off_2E4C80;
  v8[117] = &off_2E4C80;
  v8[115] = &off_2E4C80;
  v8[113] = &off_2E4C80;
  v8[111] = &off_2E4C80;
  v8[109] = &off_2E4C80;
  v8[107] = &off_2E4C80;
  v8[105] = &off_2E4C80;
  v8[103] = &off_2E4C80;
  v8[101] = &off_2E4C80;
  v8[99] = &off_2E4C80;
  v8[97] = &off_2E4C80;
  v8[95] = &off_2E4C80;
  v8[93] = &off_2E4C80;
  v8[91] = &off_2E4C80;
  v8[89] = &off_2E4C80;
  v8[87] = &off_2E4C80;
  v8[85] = &off_2E4C80;
  v8[83] = &off_2E4C80;
  v8[81] = &off_2E4C80;
  v8[79] = &off_2E4C80;
  v8[77] = &off_2E4C80;
  v8[75] = &off_2E4C80;
  v8[73] = &off_2E4C80;
  v8[71] = &off_2E4C80;
  v8[69] = &off_2E4C80;
  v8[67] = &off_2E4C80;
  v8[65] = &off_2E4C80;
  v8[63] = &off_2E4C80;
  v8[61] = &off_2E4C80;
  v8[59] = &off_2E4C80;
  v8[57] = &off_2E4C80;
  v8[55] = &off_2E4C80;
  v8[53] = &off_2E4C80;
  v8[51] = &off_2E4C80;
  v8[49] = &off_2E4C80;
  v8[47] = &off_2E4C80;
  v8[45] = &off_2E4C80;
  v8[43] = &off_2E4C80;
  v8[41] = &off_2E4C80;
  v8[39] = &off_2E4C80;
  v8[37] = &off_2E4C80;
  v8[35] = &off_2E4C80;
  v8[33] = &off_2E4C80;
  v8[31] = &off_2E4C80;
  v8[29] = &off_2E4C80;
  v8[27] = &off_2E4C80;
  v8[25] = &off_2E4C80;
  v8[23] = &off_2E4C80;
  v8[21] = &off_2E4C80;
  v8[19] = &off_2E4C80;
  v8[17] = &off_2E4C80;
  v8[15] = &off_2E4C80;
  v8[13] = &off_2E4C80;
  v8[11] = &off_2E4C80;
  v8[9] = &off_2E4C80;
  v8[7] = &off_2E4C80;
  v8[5] = &off_2E4C80;
  v8[3] = &off_2E4C80;
  v8[1] = &off_2E4C80;
  v8[0] = &v9;
  v3 = 0;
  v75 = (*(int (__fastcall **)(_DWORD, void *, int))(a2[1] + 12))(*a2, &unk_2C5C62, 5);
  v74 = a2;
  v76 = 0;
  v4 = &v73;
  v73 = 0;
  do
  {
    v4 = core::fmt::builders::DebugTuple::field(v4, (int)&v8[v3], (int)&off_2E4268);
    v3 += 2;
  }
  while ( v3 != 128 );
  if ( v73 )
  {
    v5 = 1;
    if ( !v75 )
    {
      v6 = v74;
      if ( v73 != 1
        || !v76
        || (v74[6] & 4) != 0
        || (v5 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v74[1] + 12))(*v74, asc_2B488F, 1)) )
      {
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v6[1] + 12))(*v6, asc_2B4399, 1);
      }
    }
  }
  else
  {
    v5 = v75;
  }
  return v5 != 0;
}
