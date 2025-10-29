unsigned __int8 *__fastcall keccak::f200(unsigned __int8 *a1)
{
  int v1; // r3
  int v2; // r7
  int v3; // r9
  int v4; // r1
  int v5; // r0
  int v6; // r5
  int v7; // lr
  int v8; // r7
  int v9; // r9
  int v10; // r1
  int v11; // r6
  int v12; // r0
  int v13; // r12
  int v14; // r4
  int v15; // r5
  int v16; // r1
  int v17; // r2
  int v18; // r7
  int v19; // r8
  int v20; // r3
  int v21; // r4
  int v22; // r8
  int v23; // r5
  int v24; // r6
  int v25; // r4
  int v26; // r1
  int v27; // r2
  int v28; // r7
  int v29; // r1
  int v30; // r2
  int v31; // r4
  int v32; // lr
  int v33; // r7
  int v34; // r12
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r7
  int v39; // r5
  int v40; // r0
  int v41; // r1
  int v44; // [sp+4h] [bp-94h]
  int v45; // [sp+8h] [bp-90h]
  int v46; // [sp+Ch] [bp-8Ch]
  int v47; // [sp+10h] [bp-88h]
  int v48; // [sp+14h] [bp-84h]
  int v49; // [sp+18h] [bp-80h]
  int v50; // [sp+1Ch] [bp-7Ch]
  int v51; // [sp+20h] [bp-78h]
  int v52; // [sp+24h] [bp-74h]
  int v53; // [sp+24h] [bp-74h]
  int v54; // [sp+28h] [bp-70h]
  int v55; // [sp+2Ch] [bp-6Ch]
  int v56; // [sp+30h] [bp-68h]
  int v57; // [sp+34h] [bp-64h]
  int v58; // [sp+38h] [bp-60h]
  int v59; // [sp+3Ch] [bp-5Ch]
  int v60; // [sp+40h] [bp-58h]
  int v61; // [sp+44h] [bp-54h]
  int v62; // [sp+44h] [bp-54h]
  int v63; // [sp+48h] [bp-50h]
  int v64; // [sp+4Ch] [bp-4Ch]
  int v65; // [sp+50h] [bp-48h]
  int v66; // [sp+54h] [bp-44h]
  int v67; // [sp+58h] [bp-40h]
  int v68; // [sp+5Ch] [bp-3Ch]
  int v69; // [sp+60h] [bp-38h]
  int v70; // [sp+64h] [bp-34h]
  int v71; // [sp+68h] [bp-30h]
  int v72; // [sp+6Ch] [bp-2Ch]
  int v73; // [sp+70h] [bp-28h]
  int v74; // [sp+74h] [bp-24h]
  int v75; // [sp+78h] [bp-20h]
  int v76; // [sp+7Ch] [bp-1Ch]
  int v77; // [sp+80h] [bp-18h]
  int v78; // [sp+84h] [bp-14h]
  int v79; // [sp+88h] [bp-10h]
  int v80; // [sp+8Ch] [bp-Ch]
  int v81; // [sp+90h] [bp-8h]
  int v82; // [sp+94h] [bp-4h]

  v65 = *a1;
  v79 = a1[1];
  v76 = a1[2];
  v77 = a1[3];
  v73 = a1[24];
  v72 = a1[19];
  v67 = a1[14];
  v82 = a1[9];
  v60 = a1[4];
  v71 = a1[23];
  v69 = a1[18];
  v64 = a1[8];
  v81 = a1[17];
  v63 = a1[12];
  v75 = a1[7];
  v66 = a1[21];
  v80 = a1[11];
  v61 = a1[6];
  v78 = a1[15];
  v1 = a1[13];
  v2 = a1[16];
  v3 = a1[20];
  v4 = a1[10];
  v74 = a1[5];
  v70 = 0;
  v5 = a1[22];
  do
  {
    v58 = v5;
    v6 = v2;
    v49 = v1;
    v59 = v4;
    v7 = v81 ^ v5 ^ v63 ^ v75 ^ v76;
    v52 = v78 ^ v3 ^ v4 ^ v74 ^ v65;
    v68 = v52 ^ ((2 * v7) | ((unsigned __int8)v7 >> 7));
    v55 = v2;
    v8 = (16 * (v68 ^ v61)) | ((unsigned __int8)(v68 ^ v61) >> 4);
    v48 = v3;
    v9 = v69 ^ v71 ^ v1 ^ v64 ^ v77;
    v10 = v6 ^ v66 ^ v80 ^ v61 ^ v79;
    v62 = v10 ^ ((2 * v9) | ((unsigned __int8)v9 >> 7));
    v56 = v8;
    v57 = (8 * (v62 ^ v63)) | ((unsigned __int8)(v62 ^ v63) >> 5);
    v11 = v72 ^ v73 ^ v67 ^ v82 ^ v60;
    v12 = ((2 * v10) | ((unsigned __int8)v10 >> 7)) ^ v11;
    v54 = v65 ^ v12;
    v65 ^= v12 ^ byte_2A4D48[v70] ^ v57 & ~v8;
    v13 = v62;
    v14 = (4 * (v68 ^ v66)) | ((unsigned __int8)(v68 ^ v66) >> 6);
    v15 = ((v13 ^ v76) << 6) | ((unsigned __int8)(v13 ^ v76) >> 2);
    v16 = v7 ^ ((2 * v11) | ((unsigned __int8)v11 >> 7));
    v17 = ((v16 ^ v64) << 7) | ((unsigned __int8)(v16 ^ v64) >> 1);
    v51 = v14 ^ v17 & ~v15;
    v18 = (2 * (v12 ^ v78)) | ((unsigned __int8)(v12 ^ v78) >> 7);
    v45 = v15 & ~v14 ^ v18;
    v19 = v14 & ~v18;
    v20 = ((2 * v52) | ((unsigned __int8)v52 >> 7)) ^ v9;
    v21 = ((v20 ^ v67) << 7) | ((unsigned __int8)(v20 ^ v67) >> 1);
    v50 = v19 ^ v21;
    v66 = v18 & ~v21 ^ v17;
    v53 = v21 & ~v17 ^ v15;
    v22 = v12;
    v23 = (8 * (v20 ^ v60)) | ((unsigned __int8)(v20 ^ v60) >> 5);
    v24 = v16;
    v25 = (16 * (v74 ^ v12)) | ((unsigned __int8)(v74 ^ v12) >> 4);
    v26 = v16 ^ v71;
    v47 = v25 & ~v23 ^ v26;
    v27 = ((v13 ^ v81) << 7) | ((unsigned __int8)(v13 ^ v81) >> 1);
    v46 = v23 & ~v26 ^ v27;
    v28 = (4 * (v68 ^ v80)) | ((unsigned __int8)(v68 ^ v80) >> 6);
    v81 = v28 ^ v26 & ~v27;
    v44 = v27 & ~v28 ^ v25;
    v78 = v28 & ~v25 ^ v23;
    v29 = (4 * (v22 ^ v48)) | ((unsigned __int8)(v22 ^ v48) >> 6);
    v30 = (2 * (v68 ^ v79)) | ((unsigned __int8)(v68 ^ v79) >> 7);
    v31 = ((v13 ^ v75) << 6) | ((unsigned __int8)(v13 ^ v75) >> 2);
    v67 = v31 & ~v30 ^ v29;
    v32 = v30 & ~v29 ^ v20 ^ v72;
    v33 = (2 * (v24 ^ v49)) | ((unsigned __int8)(v24 ^ v49) >> 7);
    v63 = v29 & ~(v20 ^ v72) ^ v33;
    v80 = (v20 ^ v72) & ~v33 ^ v31;
    v34 = v30 ^ v33 & ~v31;
    v35 = (32 * (v62 ^ v58)) | ((unsigned __int8)(v62 ^ v58) >> 3);
    v71 = v45;
    v36 = (16 * (v24 ^ v77)) | ((unsigned __int8)(v24 ^ v77) >> 4);
    v37 = (16 * (v20 ^ v82)) | ((unsigned __int8)(v20 ^ v82) >> 4);
    v82 = v37 & ~v36 ^ v35;
    v3 = v53;
    v38 = (32 * (v68 ^ v55)) | ((unsigned __int8)(v68 ^ v55) >> 3);
    v64 = v38 ^ v36 & ~v35;
    v39 = (8 * (v22 ^ v59)) | ((unsigned __int8)(v22 ^ v59) >> 5);
    v75 = v35 & ~v38 ^ v39;
    v61 = v38 & ~v39 ^ v37;
    v74 = v39 & ~v37 ^ v36;
    v40 = ((v20 ^ v73) << 6) | ((unsigned __int8)(v20 ^ v73) >> 2);
    v60 = v56 & ~v54 ^ v40;
    v41 = (32 * (v24 ^ v69)) | ((unsigned __int8)(v24 ^ v69) >> 3);
    v76 = v40 & ~v41 ^ v57;
    v77 = v54 & ~v40 ^ v41;
    v79 = v56 ^ v41 & ~v57;
    v1 = v32;
    v2 = v44;
    v70 += 8;
    v72 = v47;
    v4 = v34;
    v73 = v51;
    v69 = v46;
    v5 = v50;
  }
  while ( v70 != 144 );
  a1[21] = v66;
  a1[17] = v81;
  a1[15] = v78;
  a1[14] = v67;
  a1[12] = v63;
  a1[11] = v80;
  a1[9] = v82;
  a1[8] = v64;
  a1[7] = v75;
  a1[6] = v61;
  a1[5] = v74;
  a1[4] = v60;
  a1[3] = v77;
  a1[2] = v76;
  a1[1] = v79;
  a1[24] = v51;
  a1[23] = v45;
  a1[22] = v50;
  a1[20] = v53;
  a1[19] = v47;
  a1[18] = v46;
  a1[16] = v44;
  a1[13] = v32;
  a1[10] = v34;
  *a1 = v65;
  return a1;
}
