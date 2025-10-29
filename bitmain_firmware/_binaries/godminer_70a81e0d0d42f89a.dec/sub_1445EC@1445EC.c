int __fastcall sub_1445EC(int *a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r3
  int v5; // r7
  int v6; // r3
  int v7; // r9
  int v8; // r3
  int v9; // r0
  int v10; // r9
  int v11; // r5
  int v12; // r8
  int v13; // r12
  int v14; // r2
  int v15; // r0
  int v16; // r3
  int v17; // r10
  int v18; // r2
  int v19; // r11
  int v20; // r3
  int v21; // r7
  int v22; // r2
  int v23; // r0
  int v24; // r2
  int v25; // r4
  int v26; // r12
  int v27; // r0
  int v28; // r2
  int v29; // r5
  int v30; // r0
  int v31; // r3
  int v32; // lr
  int v33; // r5
  int v34; // r12
  bool v35; // zf
  int v36; // r8
  int v37; // r11
  int v38; // r9
  int v39; // r10
  int v40; // r2
  int v41; // r3
  int v42; // r4
  int v43; // r7
  int v44; // r6
  int v45; // lr
  int v46; // r12
  int v47; // r1
  int v48; // r0
  int v49; // r7
  int v50; // r12
  int v52; // [sp+0h] [bp-74h]
  int v53; // [sp+4h] [bp-70h]
  int v54; // [sp+4h] [bp-70h]
  int v55; // [sp+8h] [bp-6Ch]
  int v56; // [sp+Ch] [bp-68h]
  int v57; // [sp+10h] [bp-64h]
  int v58; // [sp+10h] [bp-64h]
  int v59; // [sp+14h] [bp-60h]
  int v60; // [sp+18h] [bp-5Ch]
  int v61; // [sp+1Ch] [bp-58h]
  int v62; // [sp+20h] [bp-54h]
  int v63; // [sp+24h] [bp-50h]
  int v64; // [sp+28h] [bp-4Ch]
  int v65; // [sp+2Ch] [bp-48h]
  int v66; // [sp+30h] [bp-44h]
  int v67; // [sp+34h] [bp-40h]
  int v68; // [sp+38h] [bp-3Ch]
  int v69; // [sp+3Ch] [bp-38h]
  int v70; // [sp+40h] [bp-34h]
  int v71; // [sp+44h] [bp-30h]
  int v72; // [sp+48h] [bp-2Ch]
  int v73; // [sp+4Ch] [bp-28h]
  int v74; // [sp+50h] [bp-24h]
  int v75; // [sp+54h] [bp-20h]
  int v76; // [sp+58h] [bp-1Ch]
  int v77; // [sp+5Ch] [bp-18h]
  int v78; // [sp+60h] [bp-14h]
  int v79; // [sp+64h] [bp-10h]
  int v80; // [sp+68h] [bp-Ch]
  int *v81; // [sp+6Ch] [bp-8h]

  v64 = 4;
  v3 = *a1 ^ *a2;
  v4 = a1[1];
  *a1 = v3;
  v5 = a1[2];
  v6 = v4 ^ a2[1];
  a1[1] = v6;
  v7 = a1[3];
  v66 = v6;
  v60 = v6;
  v8 = v5 ^ a2[2];
  a1[2] = v8;
  v9 = a1[4];
  v10 = v7 ^ a2[3];
  a1[3] = v10;
  v11 = a1[5];
  v12 = v9 ^ a2[4];
  a1[4] = v12;
  v13 = a2[5];
  v67 = v8;
  v57 = v8;
  a1[5] = v11 ^ v13;
  v65 = v3;
  v53 = v3;
  v70 = v11 ^ v13;
  v14 = a1[7];
  v68 = v10;
  v69 = v12;
  v55 = v11 ^ v13;
  v15 = a1[6] ^ a2[6];
  a1[6] = v15;
  v16 = a1[8];
  v17 = v14 ^ a2[7];
  a1[7] = v17;
  v18 = a1[9];
  v19 = v16 ^ a2[8];
  a1[8] = v19;
  v20 = a1[10];
  v21 = v18 ^ a2[9];
  a1[9] = v21;
  v22 = a1[11];
  v71 = v15;
  v61 = v15;
  v23 = v20 ^ a2[10];
  a1[10] = v23;
  v75 = v23;
  v24 = v22 ^ a2[11];
  v56 = v23;
  a1[11] = v24;
  v76 = v24;
  v25 = a1[12] ^ a2[12];
  v26 = a1[13];
  v62 = v24;
  a1[12] = v25;
  v27 = a1[14];
  v28 = v26 ^ a2[13];
  v72 = v17;
  v73 = v19;
  v74 = v21;
  v77 = v25;
  v78 = v28;
  a1[13] = v28;
  v29 = a1[15];
  v30 = v27 ^ a2[14];
  a1[14] = v30;
  v31 = v30;
  v79 = v30;
  v32 = v57;
  v80 = v29 ^ a2[15];
  v33 = v80;
  v52 = v25;
  v81 = a1;
  do
  {
    v34 = v12 ^ __ROR4__(v53 + v52, 25);
    v35 = v64 == 1;
    v36 = v31 ^ __ROR4__(v61 + v56, 25);
    --v64;
    v37 = v19 ^ __ROR4__(v34 + v53, 23);
    v38 = v10 ^ __ROR4__(v62 + v33, 25);
    v63 = v34;
    v58 = v21 ^ __ROR4__(v60 + v55, 25);
    v39 = v17 ^ __ROR4__(v38 + v33, 23);
    v40 = v28 ^ __ROR4__(v58 + v55, 23);
    v41 = v32 ^ __ROR4__(v36 + v56, 23);
    v42 = v52 ^ __ROR4__(v34 + v37, 19);
    v43 = v62 ^ __ROR4__(v38 + v39, 19);
    v44 = v61 ^ __ROR4__(v36 + v41, 19);
    v45 = v60 ^ __ROR4__(v58 + v40, 19);
    v46 = v53 ^ __ROR4__(v37 + v42, 14);
    v59 = v33 ^ __ROR4__(v39 + v43, 14);
    v47 = v56 ^ __ROR4__(v41 + v44, 14);
    v54 = v36;
    v48 = v55 ^ __ROR4__(v40 + v45, 14);
    v52 = v42 ^ __ROR4__(v36 + v59, 25);
    v49 = v43 ^ __ROR4__(v58 + v47, 25);
    v61 = v44 ^ __ROR4__(v63 + v48, 25);
    v60 = v45 ^ __ROR4__(v38 + v46, 25);
    v19 = v37 ^ __ROR4__(v47 + v49, 23);
    v17 = v39 ^ __ROR4__(v48 + v61, 23);
    v32 = v41 ^ __ROR4__(v46 + v60, 23);
    v62 = v49;
    v10 = v38 ^ __ROR4__(v60 + v32, 19);
    v28 = v40 ^ __ROR4__(v59 + v52, 23);
    v12 = v63 ^ __ROR4__(v61 + v17, 19);
    v21 = v58 ^ __ROR4__(v49 + v19, 19);
    v31 = v54 ^ __ROR4__(v52 + v28, 19);
    v50 = v46 ^ __ROR4__(v32 + v10, 14);
    v53 = v50;
    v55 = v48 ^ __ROR4__(v17 + v12, 14);
    v33 = v59 ^ __ROR4__(v28 + v31, 14);
    v56 = v47 ^ __ROR4__(v19 + v21, 14);
  }
  while ( !v35 );
  *v81 = v65 + v50;
  v81[1] = v66 + v60;
  v81[2] = v67 + v32;
  v81[3] = v68 + v10;
  v81[6] = v71 + v61;
  v81[5] = v70 + v55;
  v81[10] = v75 + v56;
  v81[7] = v72 + v17;
  v81[8] = v73 + v19;
  v81[4] = v69 + v12;
  v81[9] = v74 + v21;
  v81[11] = v76 + v62;
  v81[12] = v77 + v52;
  v81[13] = v78 + v28;
  v81[14] = v79 + v31;
  v81[15] = v80 + v33;
  return v76;
}
