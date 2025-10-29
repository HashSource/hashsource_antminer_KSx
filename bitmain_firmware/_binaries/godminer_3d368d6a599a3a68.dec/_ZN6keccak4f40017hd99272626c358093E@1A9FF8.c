int __fastcall keccak::f400(unsigned __int16 *a1)
{
  int v1; // r7
  int v2; // r1
  int v3; // r6
  int v4; // r7
  int v5; // r11
  int v6; // r12
  int v7; // r3
  int v8; // r5
  int v9; // r4
  int v10; // r1
  int v11; // r8
  int v12; // r0
  int v13; // r9
  int v14; // r5
  int v15; // r6
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r5
  int v20; // r2
  int v21; // r4
  int v22; // r8
  unsigned int v23; // lr
  int v24; // r0
  int v25; // r10
  int v26; // r12
  int v27; // r2
  int v28; // r5
  int v29; // r0
  int v30; // r1
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r2
  int v35; // r6
  int v36; // r5
  int v39; // [sp+4h] [bp-98h]
  int v40; // [sp+8h] [bp-94h]
  int v41; // [sp+Ch] [bp-90h]
  int v42; // [sp+10h] [bp-8Ch]
  int v43; // [sp+18h] [bp-84h]
  int v44; // [sp+1Ch] [bp-80h]
  int v45; // [sp+20h] [bp-7Ch]
  int v46; // [sp+24h] [bp-78h]
  int v47; // [sp+28h] [bp-74h]
  int v48; // [sp+2Ch] [bp-70h]
  int v49; // [sp+30h] [bp-6Ch]
  int v50; // [sp+34h] [bp-68h]
  int v51; // [sp+38h] [bp-64h]
  int v52; // [sp+3Ch] [bp-60h]
  int v53; // [sp+40h] [bp-5Ch]
  int v54; // [sp+44h] [bp-58h]
  int v55; // [sp+48h] [bp-54h]
  int v56; // [sp+4Ch] [bp-50h]
  int v57; // [sp+50h] [bp-4Ch]
  int v58; // [sp+54h] [bp-48h]
  int v59; // [sp+58h] [bp-44h]
  int v60; // [sp+5Ch] [bp-40h]
  int v61; // [sp+60h] [bp-3Ch]
  int v62; // [sp+64h] [bp-38h]
  int v63; // [sp+68h] [bp-34h]
  int v64; // [sp+6Ch] [bp-30h]
  int v65; // [sp+70h] [bp-2Ch]
  int v66; // [sp+74h] [bp-28h]
  unsigned int v67; // [sp+74h] [bp-28h]
  int v68; // [sp+78h] [bp-24h]
  int v69; // [sp+7Ch] [bp-20h]
  int v70; // [sp+80h] [bp-1Ch]
  int v71; // [sp+84h] [bp-18h]
  int v72; // [sp+84h] [bp-18h]
  int v73; // [sp+88h] [bp-14h]
  int v74; // [sp+8Ch] [bp-10h]
  int v75; // [sp+90h] [bp-Ch]
  int v76; // [sp+94h] [bp-8h]
  int v77; // [sp+98h] [bp-4h]

  v1 = 0;
  v74 = a1[1];
  v63 = a1[24];
  v64 = a1[19];
  v57 = a1[14];
  v77 = a1[9];
  v56 = a1[4];
  v66 = a1[23];
  v61 = a1[18];
  v62 = a1[13];
  v54 = a1[8];
  v75 = a1[3];
  v58 = a1[22];
  v69 = a1[17];
  v65 = a1[12];
  v70 = a1[7];
  v53 = a1[2];
  v55 = a1[21];
  v60 = a1[16];
  v2 = a1[6];
  v3 = a1[10];
  v71 = a1[11];
  v76 = a1[15];
  v59 = a1[20];
  v73 = a1[5];
  v68 = *a1;
  do
  {
    v52 = v1;
    v48 = v2;
    v4 = v69 ^ v58 ^ v65 ^ v70 ^ v53;
    v49 = v3;
    v5 = v76 ^ v59 ^ v3 ^ v73 ^ v68;
    v40 = v5 ^ ((2 * v4) | ((unsigned __int16)v4 >> 15));
    v6 = (4 * (v40 ^ v55)) | ((unsigned __int16)(v40 ^ v55) >> 14);
    v7 = v61 ^ v66 ^ v62 ^ v54 ^ v75;
    v8 = v60 ^ v55 ^ v71 ^ v2 ^ v74;
    v39 = v8 ^ ((2 * v7) | ((unsigned __int16)v7 >> 15));
    v9 = ((v39 ^ v53) << 14) | ((unsigned __int16)(v39 ^ v53) >> 2);
    v10 = v64 ^ v63 ^ v57 ^ v77 ^ v56;
    v11 = v4 ^ ((2 * v10) | ((unsigned __int16)v10 >> 15));
    v12 = ((v11 ^ v54) << 7) | ((unsigned __int16)(v11 ^ v54) >> 9);
    v51 = v12 & ~v9 ^ v6;
    v13 = ((2 * v8) | ((unsigned __int16)v8 >> 15)) ^ v10;
    v14 = ((v13 ^ v76) << 9) | ((unsigned __int16)(v13 ^ v76) >> 7);
    v15 = ((2 * v5) | ((unsigned __int16)v5 >> 15)) ^ v7;
    v50 = v14 ^ v9 & ~v6;
    v16 = ((v15 ^ v57) << 7) | ((unsigned __int16)(v15 ^ v57) >> 9);
    v47 = v6 & ~v14 ^ v16;
    v55 = v14 & ~v16 ^ v12;
    v46 = v9 ^ v16 & ~v12;
    v17 = ((v15 ^ v56) << 11) | ((unsigned __int16)(v15 ^ v56) >> 5);
    v18 = (16 * (v13 ^ v73)) | ((unsigned __int16)(v13 ^ v73) >> 12);
    v67 = bswap32(v11 ^ v66);
    v44 = v18 & ~v17 ^ HIWORD(v67);
    v19 = ((v39 ^ v69) << 15) | ((unsigned __int16)(v39 ^ v69) >> 1);
    v43 = v19 ^ v17 & ~HIWORD(v67);
    v72 = ((v40 ^ v71) << 10) | ((unsigned __int16)(v40 ^ v71) >> 6);
    v45 = v18 ^ v19 & ~v72;
    v76 = v72 & ~v18 ^ v17;
    v20 = (4 * (v13 ^ v59)) | ((unsigned __int16)(v13 ^ v59) >> 14);
    v21 = (2 * (v40 ^ v74)) | ((unsigned __int16)(v40 ^ v74) >> 15);
    v22 = ((v39 ^ v70) << 6) | ((unsigned __int16)(v39 ^ v70) >> 10);
    v57 = v20 ^ v22 & ~v21;
    v23 = bswap32(v15 ^ v64);
    v42 = v21 & ~v20 ^ HIWORD(v23);
    v24 = v4 ^ ((2 * v10) | ((unsigned __int16)v10 >> 15));
    v25 = ((v24 ^ v62) << 9) | ((unsigned __int16)(v24 ^ v62) >> 7);
    v41 = v20 & ~HIWORD(v23) ^ v25;
    v26 = v24;
    v27 = ((v39 ^ v58) << 13) | ((unsigned __int16)(v39 ^ v58) >> 3);
    v28 = ((v24 ^ v75) << 12) | ((unsigned __int16)(v24 ^ v75) >> 4);
    v29 = (16 * (v15 ^ v77)) | ((unsigned __int16)(v15 ^ v77) >> 12);
    v77 = v27 ^ v29 & ~v28;
    v30 = ((v40 ^ v60) << 13) | ((unsigned __int16)(v40 ^ v60) >> 3);
    v54 = v28 & ~v27 ^ v30;
    v31 = v27 & ~v30;
    v32 = (8 * (v13 ^ v49)) | ((unsigned __int16)(v13 ^ v49) >> 13);
    v2 = v30 & ~v32 ^ v29;
    v73 = v32 & ~v29 ^ v28;
    v70 = v32 ^ v31;
    v33 = ((v15 ^ v63) << 14) | ((unsigned __int16)(v15 ^ v63) >> 2);
    v34 = ((v40 ^ v48) << 12) | ((unsigned __int16)(v40 ^ v48) >> 4);
    v56 = v34 & ~(v13 ^ v68) ^ v33;
    v35 = (32 * (v26 ^ v61)) | ((unsigned __int16)(v26 ^ v61) >> 11);
    v75 = (v13 ^ v68) & ~v33 ^ v35;
    v36 = ((v39 ^ v65) << 11) | ((unsigned __int16)(v39 ^ v65) >> 5);
    v53 = v36 ^ v33 & ~v35;
    v74 = v35 & ~v36 ^ v34;
    v1 = v52 - 8;
    v68 ^= v36 & ~v34 ^ v13 ^ *(unsigned __int16 *)&byte_2A4AE8[-v52];
    v3 = v25 & ~v22 ^ v21;
    v64 = v44;
    v61 = v43;
    v69 = ~(((v39 ^ v69) << 15) | ((unsigned __int16)(v39 ^ v69) >> 1)) & HIWORD(v67) ^ v72;
    v63 = v51;
    v71 = v22 ^ ~v25 & HIWORD(v23);
    v66 = v50;
    v58 = v47;
    v62 = v42;
    v59 = v46;
    v65 = v41;
    v60 = v45;
  }
  while ( v52 != -152 );
  a1[18] = v43;
  a1[15] = v76;
  a1[21] = v55;
  a1[14] = v57;
  a1[24] = v51;
  a1[11] = v71;
  a1[9] = v77;
  a1[17] = v69;
  a1[8] = v54;
  a1[5] = v73;
  a1[7] = v70;
  a1[4] = v56;
  a1[2] = v53;
  a1[23] = v50;
  a1[22] = v47;
  a1[20] = v46;
  a1[19] = v44;
  a1[16] = v45;
  a1[13] = v42;
  a1[12] = v41;
  a1[10] = v25 & ~(_WORD)v22 ^ v21;
  a1[6] = v2;
  a1[3] = v75;
  *a1 = v68;
  a1[1] = v74;
  return v68;
}
