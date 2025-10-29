bool __fastcall <core::core_arch::simd::i16x32 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  int *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0
  int *v28; // r0
  int *v29; // r0
  int *v30; // r0
  int *v31; // r0
  int *v32; // r0
  int *v33; // r0
  int v34; // r4
  _DWORD *v35; // r5
  _DWORD v37[2]; // [sp+4h] [bp-18Ch] BYREF
  _DWORD v38[2]; // [sp+Ch] [bp-184h] BYREF
  _DWORD v39[2]; // [sp+14h] [bp-17Ch] BYREF
  _DWORD v40[2]; // [sp+1Ch] [bp-174h] BYREF
  _DWORD v41[2]; // [sp+24h] [bp-16Ch] BYREF
  _DWORD v42[2]; // [sp+2Ch] [bp-164h] BYREF
  _DWORD v43[2]; // [sp+34h] [bp-15Ch] BYREF
  _DWORD v44[2]; // [sp+3Ch] [bp-154h] BYREF
  _DWORD v45[2]; // [sp+44h] [bp-14Ch] BYREF
  _DWORD v46[2]; // [sp+4Ch] [bp-144h] BYREF
  _DWORD v47[2]; // [sp+54h] [bp-13Ch] BYREF
  _DWORD v48[2]; // [sp+5Ch] [bp-134h] BYREF
  _DWORD v49[2]; // [sp+64h] [bp-12Ch] BYREF
  _DWORD v50[2]; // [sp+6Ch] [bp-124h] BYREF
  _DWORD v51[2]; // [sp+74h] [bp-11Ch] BYREF
  _DWORD v52[2]; // [sp+7Ch] [bp-114h] BYREF
  _DWORD v53[2]; // [sp+84h] [bp-10Ch] BYREF
  _DWORD v54[2]; // [sp+8Ch] [bp-104h] BYREF
  _DWORD v55[2]; // [sp+94h] [bp-FCh] BYREF
  _DWORD v56[2]; // [sp+9Ch] [bp-F4h] BYREF
  _DWORD v57[2]; // [sp+A4h] [bp-ECh] BYREF
  _DWORD v58[2]; // [sp+ACh] [bp-E4h] BYREF
  _DWORD v59[2]; // [sp+B4h] [bp-DCh] BYREF
  _DWORD v60[2]; // [sp+BCh] [bp-D4h] BYREF
  _DWORD v61[2]; // [sp+C4h] [bp-CCh] BYREF
  _DWORD v62[2]; // [sp+CCh] [bp-C4h] BYREF
  _DWORD v63[2]; // [sp+D4h] [bp-BCh] BYREF
  _DWORD v64[2]; // [sp+DCh] [bp-B4h] BYREF
  _DWORD v65[2]; // [sp+E4h] [bp-ACh] BYREF
  _DWORD v66[2]; // [sp+ECh] [bp-A4h] BYREF
  _DWORD v67[2]; // [sp+F4h] [bp-9Ch] BYREF
  _DWORD v68[2]; // [sp+FCh] [bp-94h] BYREF
  int v69; // [sp+104h] [bp-8Ch] BYREF
  int v70; // [sp+108h] [bp-88h] BYREF
  int v71; // [sp+10Ch] [bp-84h] BYREF
  int v72; // [sp+110h] [bp-80h] BYREF
  int v73; // [sp+114h] [bp-7Ch] BYREF
  int v74; // [sp+118h] [bp-78h] BYREF
  int v75; // [sp+11Ch] [bp-74h] BYREF
  int v76; // [sp+120h] [bp-70h] BYREF
  int v77; // [sp+124h] [bp-6Ch] BYREF
  int v78; // [sp+128h] [bp-68h] BYREF
  int v79; // [sp+12Ch] [bp-64h] BYREF
  int v80; // [sp+130h] [bp-60h] BYREF
  int v81; // [sp+134h] [bp-5Ch] BYREF
  int v82; // [sp+138h] [bp-58h] BYREF
  int v83; // [sp+13Ch] [bp-54h] BYREF
  int v84; // [sp+140h] [bp-50h] BYREF
  int v85; // [sp+144h] [bp-4Ch] BYREF
  int v86; // [sp+148h] [bp-48h] BYREF
  int v87; // [sp+14Ch] [bp-44h] BYREF
  int v88; // [sp+150h] [bp-40h] BYREF
  int v89; // [sp+154h] [bp-3Ch] BYREF
  int v90; // [sp+158h] [bp-38h] BYREF
  int v91; // [sp+15Ch] [bp-34h] BYREF
  int v92; // [sp+160h] [bp-30h] BYREF
  int v93; // [sp+164h] [bp-2Ch] BYREF
  int v94; // [sp+168h] [bp-28h] BYREF
  int v95; // [sp+16Ch] [bp-24h] BYREF
  int v96; // [sp+170h] [bp-20h] BYREF
  int v97; // [sp+174h] [bp-1Ch] BYREF
  int v98; // [sp+178h] [bp-18h] BYREF
  int v99; // [sp+17Ch] [bp-14h] BYREF
  int v100; // [sp+180h] [bp-10h] BYREF
  int v101; // [sp+184h] [bp-Ch] BYREF
  _DWORD *v102; // [sp+188h] [bp-8h]
  unsigned __int8 v103; // [sp+18Ch] [bp-4h]
  char v104; // [sp+18Dh] [bp-3h]

  v70 = a1 + 2;
  v71 = a1 + 4;
  v72 = a1 + 6;
  v73 = a1 + 8;
  v74 = a1 + 10;
  v75 = a1 + 12;
  v76 = a1 + 14;
  v77 = a1 + 16;
  v78 = a1 + 18;
  v79 = a1 + 20;
  v80 = a1 + 22;
  v81 = a1 + 24;
  v82 = a1 + 26;
  v83 = a1 + 28;
  v84 = a1 + 30;
  v85 = a1 + 32;
  v86 = a1 + 34;
  v87 = a1 + 36;
  v88 = a1 + 38;
  v89 = a1 + 40;
  v90 = a1 + 42;
  v91 = a1 + 44;
  v92 = a1 + 46;
  v93 = a1 + 48;
  v94 = a1 + 50;
  v95 = a1 + 52;
  v96 = a1 + 54;
  v97 = a1 + 56;
  v98 = a1 + 58;
  v69 = a1;
  v100 = a1 + 62;
  v68[0] = &v100;
  v67[0] = &v99;
  v66[0] = &v98;
  v65[0] = &v97;
  v64[0] = &v96;
  v63[0] = &v95;
  v62[0] = &v94;
  v61[0] = &v93;
  v60[0] = &v92;
  v59[0] = &v91;
  v58[0] = &v90;
  v57[0] = &v89;
  v56[0] = &v88;
  v55[0] = &v87;
  v54[0] = &v86;
  v53[0] = &v85;
  v52[0] = &v84;
  v51[0] = &v83;
  v50[0] = &v82;
  v49[0] = &v81;
  v48[0] = &v80;
  v47[0] = &v79;
  v46[0] = &v78;
  v45[0] = &v77;
  v44[0] = &v76;
  v43[0] = &v75;
  v42[0] = &v74;
  v41[0] = &v73;
  v40[0] = &v72;
  v39[0] = &v71;
  v38[0] = &v70;
  v99 = a1 + 60;
  v68[1] = &off_2E6678;
  v67[1] = &off_2E6678;
  v66[1] = &off_2E6678;
  v65[1] = &off_2E6678;
  v64[1] = &off_2E6678;
  v63[1] = &off_2E6678;
  v62[1] = &off_2E6678;
  v61[1] = &off_2E6678;
  v60[1] = &off_2E6678;
  v59[1] = &off_2E6678;
  v58[1] = &off_2E6678;
  v57[1] = &off_2E6678;
  v56[1] = &off_2E6678;
  v55[1] = &off_2E6678;
  v54[1] = &off_2E6678;
  v53[1] = &off_2E6678;
  v52[1] = &off_2E6678;
  v51[1] = &off_2E6678;
  v50[1] = &off_2E6678;
  v49[1] = &off_2E6678;
  v48[1] = &off_2E6678;
  v47[1] = &off_2E6678;
  v46[1] = &off_2E6678;
  v45[1] = &off_2E6678;
  v44[1] = &off_2E6678;
  v43[1] = &off_2E6678;
  v42[1] = &off_2E6678;
  v41[1] = &off_2E6678;
  v40[1] = &off_2E6678;
  v39[1] = &off_2E6678;
  v38[1] = &off_2E6678;
  v37[1] = &off_2E6678;
  v37[0] = &v69;
  v103 = (*(int (__fastcall **)(_DWORD, void *, int))(a2[1] + 12))(*a2, &unk_2C778C, 6);
  v102 = a2;
  v104 = 0;
  v101 = 0;
  v3 = core::fmt::builders::DebugTuple::field(&v101, (int)v37, (int)&off_2E6268);
  v4 = core::fmt::builders::DebugTuple::field(v3, (int)v38, (int)&off_2E6268);
  v5 = core::fmt::builders::DebugTuple::field(v4, (int)v39, (int)&off_2E6268);
  v6 = core::fmt::builders::DebugTuple::field(v5, (int)v40, (int)&off_2E6268);
  v7 = core::fmt::builders::DebugTuple::field(v6, (int)v41, (int)&off_2E6268);
  v8 = core::fmt::builders::DebugTuple::field(v7, (int)v42, (int)&off_2E6268);
  v9 = core::fmt::builders::DebugTuple::field(v8, (int)v43, (int)&off_2E6268);
  v10 = core::fmt::builders::DebugTuple::field(v9, (int)v44, (int)&off_2E6268);
  v11 = core::fmt::builders::DebugTuple::field(v10, (int)v45, (int)&off_2E6268);
  v12 = core::fmt::builders::DebugTuple::field(v11, (int)v46, (int)&off_2E6268);
  v13 = core::fmt::builders::DebugTuple::field(v12, (int)v47, (int)&off_2E6268);
  v14 = core::fmt::builders::DebugTuple::field(v13, (int)v48, (int)&off_2E6268);
  v15 = core::fmt::builders::DebugTuple::field(v14, (int)v49, (int)&off_2E6268);
  v16 = core::fmt::builders::DebugTuple::field(v15, (int)v50, (int)&off_2E6268);
  v17 = core::fmt::builders::DebugTuple::field(v16, (int)v51, (int)&off_2E6268);
  v18 = core::fmt::builders::DebugTuple::field(v17, (int)v52, (int)&off_2E6268);
  v19 = core::fmt::builders::DebugTuple::field(v18, (int)v53, (int)&off_2E6268);
  v20 = core::fmt::builders::DebugTuple::field(v19, (int)v54, (int)&off_2E6268);
  v21 = core::fmt::builders::DebugTuple::field(v20, (int)v55, (int)&off_2E6268);
  v22 = core::fmt::builders::DebugTuple::field(v21, (int)v56, (int)&off_2E6268);
  v23 = core::fmt::builders::DebugTuple::field(v22, (int)v57, (int)&off_2E6268);
  v24 = core::fmt::builders::DebugTuple::field(v23, (int)v58, (int)&off_2E6268);
  v25 = core::fmt::builders::DebugTuple::field(v24, (int)v59, (int)&off_2E6268);
  v26 = core::fmt::builders::DebugTuple::field(v25, (int)v60, (int)&off_2E6268);
  v27 = core::fmt::builders::DebugTuple::field(v26, (int)v61, (int)&off_2E6268);
  v28 = core::fmt::builders::DebugTuple::field(v27, (int)v62, (int)&off_2E6268);
  v29 = core::fmt::builders::DebugTuple::field(v28, (int)v63, (int)&off_2E6268);
  v30 = core::fmt::builders::DebugTuple::field(v29, (int)v64, (int)&off_2E6268);
  v31 = core::fmt::builders::DebugTuple::field(v30, (int)v65, (int)&off_2E6268);
  v32 = core::fmt::builders::DebugTuple::field(v31, (int)v66, (int)&off_2E6268);
  v33 = core::fmt::builders::DebugTuple::field(v32, (int)v67, (int)&off_2E6268);
  core::fmt::builders::DebugTuple::field(v33, (int)v68, (int)&off_2E6268);
  if ( v101 )
  {
    v34 = 1;
    if ( !v103 )
    {
      v35 = v102;
      if ( v101 != 1
        || !v104
        || (v102[6] & 4) != 0
        || (v34 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v102[1] + 12))(*v102, asc_2B63AF, 1)) )
      {
        v34 = (*(int (__fastcall **)(_DWORD, const char *, int))(v35[1] + 12))(*v35, asc_2B5EB9, 1);
      }
    }
  }
  else
  {
    v34 = v103;
  }
  return v34 != 0;
}
