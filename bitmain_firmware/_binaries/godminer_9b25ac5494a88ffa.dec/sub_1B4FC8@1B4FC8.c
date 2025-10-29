unsigned int __fastcall sub_1B4FC8(int *a1, int *a2, _BYTE *a3)
{
  unsigned int v3; // r5
  int (*v4)(); // r8
  int v5; // r9
  _WORD *v6; // r11
  int **v7; // r0
  int *v8; // r2
  int v9; // r7
  int v10; // r10
  char **v11; // r4
  int *v12; // r0
  unsigned __int16 v13; // r12
  int v14; // r1
  int (*v15)(); // r2
  int v16; // r5
  const char *v17; // r6
  int v18; // r7
  int v19; // r1
  int v20; // r3
  int v21; // r7
  int v22; // r3
  int v23; // r3
  unsigned int v24; // r0
  int *v25; // r5
  unsigned int v26; // r9
  int v27; // r4
  unsigned int v28; // r7
  unsigned int v29; // r0
  int v30; // r1
  int v31; // r3
  int v32; // r6
  int v33; // r1
  int v34; // r3
  int v35; // r1
  int v36; // r1
  int **v38; // r0
  unsigned int v41; // [sp+Ch] [bp-70h]
  int v42; // [sp+10h] [bp-6Ch]
  int v43; // [sp+10h] [bp-6Ch]
  const char *v44; // [sp+14h] [bp-68h]
  int (*v45)(); // [sp+14h] [bp-68h]
  int v46; // [sp+18h] [bp-64h]
  char **v47; // [sp+18h] [bp-64h]
  int v48; // [sp+1Ch] [bp-60h]
  const char *v49; // [sp+20h] [bp-5Ch]
  int v50; // [sp+24h] [bp-58h]
  int *v51; // [sp+28h] [bp-54h] BYREF
  int (*v52)(); // [sp+2Ch] [bp-50h]
  char **v53; // [sp+30h] [bp-4Ch]
  int v54; // [sp+38h] [bp-44h] BYREF
  int (*v55)(); // [sp+3Ch] [bp-40h]
  char **v56; // [sp+40h] [bp-3Ch]
  int v57; // [sp+44h] [bp-38h]
  int **v58; // [sp+48h] [bp-34h]
  int v59; // [sp+4Ch] [bp-30h]
  int v60; // [sp+50h] [bp-2Ch]
  int v61; // [sp+58h] [bp-24h] BYREF
  int (*v62)(); // [sp+5Ch] [bp-20h]
  char **v63; // [sp+60h] [bp-1Ch]
  int v64; // [sp+64h] [bp-18h]
  const char *v65; // [sp+68h] [bp-14h]
  int v66; // [sp+6Ch] [bp-10h]
  int v67; // [sp+70h] [bp-Ch]
  _DWORD v68[2]; // [sp+74h] [bp-8h] BYREF

  v3 = a2[2];
  v4 = (int (*)())a2[1];
  v5 = *a2;
  v6 = (_WORD *)((char *)v4 + 268);
  v7 = (int **)((char *)v4 + 12 * v3 + 4);
  v8 = *v7;
  v9 = 3 * v3 + 3;
  v10 = *((unsigned __int16 *)v4 + 135);
  v11 = (char **)v7[2];
  v52 = (int (*)())v7[1];
  v53 = v11;
  v51 = v8;
  v41 = v3;
  memmove(v7, (char *)v4 + 4 * v9 + 4, 12 * (v10 + ~v3));
  v12 = (int *)((char *)v4 + 12 * v3 + 136);
  v42 = *v12;
  v44 = (const char *)v12[1];
  v46 = v12[2];
  memmove(v12, (char *)v4 + 4 * v9 + 136, 12 * (v10 + ~v3));
  v13 = v10 - 1;
  v14 = (int)v51;
  v15 = v52;
  *((_WORD *)v4 + 135) = v10 - 1;
  v63 = v11;
  v62 = v15;
  v61 = v14;
  v64 = v42;
  v65 = v44;
  v66 = v46;
  v54 = v14;
  v55 = v15;
  v56 = v11;
  v57 = v42;
  v58 = (int **)v44;
  v59 = v46;
  v16 = v42;
  v17 = v44;
  v18 = v46;
  v43 = v14;
  v45 = v15;
  v47 = v11;
  v48 = v16;
  v49 = v17;
  v50 = v18;
  if ( (unsigned __int16)(v10 - 1) >= 5u )
    goto LABEL_29;
  v19 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    v20 = (unsigned __int16)*v6;
    if ( *v6 )
    {
      v21 = v20 - 1;
      v22 = *(_DWORD *)(v19 + 4 * (v20 - 1) + 272);
      if ( *(unsigned __int16 *)(v22 + 270) + (unsigned int)v13 + 1 < 0xC )
      {
        v67 = v21;
        v66 = v19;
        v65 = (const char *)(v5 + 1);
        v64 = (int)v4;
        v63 = (char **)v5;
        v62 = (int (*)())v22;
        v61 = v5;
        sub_1B4D10(&v51, &v61, 1, v41);
        goto LABEL_13;
      }
      v67 = v21;
      v66 = v19;
      v65 = (const char *)(v5 + 1);
      v64 = (int)v4;
      v63 = (char **)v5;
      v62 = (int (*)())v22;
      v61 = v5;
      sub_1B3A48(&v61, 1u);
      v24 = v41 + 1;
      goto LABEL_12;
    }
    if ( !*(_WORD *)(v19 + 270) )
    {
      v57 = 1;
      v54 = 0;
      v56 = &off_2DD418;
      v38 = &v51;
      v52 = <core::fmt::Arguments as core::fmt::Display>::fmt;
      v51 = &v61;
LABEL_31:
      v64 = 1;
      v63 = &off_2DD420;
      v66 = 0;
      v65 = aRustc9eb3afe9e;
      v61 = 0;
      v58 = v38;
      v59 = 1;
      core::panicking::panic_fmt((int)&v54, (int)&off_2DD428);
    }
    v23 = *(_DWORD *)(v19 + 276);
    if ( *(unsigned __int16 *)(v23 + 270) + (unsigned int)v13 + 1 < 0xC )
    {
      v66 = *(_DWORD *)v4;
      v67 = 0;
      v65 = (const char *)(v5 + 1);
      v64 = v23;
      v63 = (char **)v5;
      v62 = v4;
      v61 = v5;
      sub_1B4D10(&v51, &v61, 0, v41);
      goto LABEL_13;
    }
    v66 = *(_DWORD *)v4;
    v67 = 0;
    v65 = (const char *)(v5 + 1);
    v64 = v23;
    v63 = (char **)v5;
    v62 = v4;
    v61 = v5;
    sub_1B3FC8(&v61, 1u);
  }
  v24 = v41;
LABEL_12:
  v53 = (char **)v24;
  v52 = v4;
  v51 = (int *)v5;
LABEL_13:
  v25 = v51;
  v4 = v52;
  v26 = (unsigned int)v53;
  v27 = *(_DWORD *)v52;
  if ( !*(_DWORD *)v52 )
    goto LABEL_28;
  v28 = (unsigned int)v51 + 1;
  while ( 1 )
  {
    v29 = *(unsigned __int16 *)(v27 + 270);
    if ( v29 > 4 )
      goto LABEL_28;
    v30 = *(_DWORD *)v27;
    if ( !*(_DWORD *)v27 )
      break;
    v31 = *(unsigned __int16 *)(v27 + 268);
    if ( *(_WORD *)(v27 + 268) )
    {
      v59 = *(_DWORD *)v27;
      v60 = v31 - 1;
      v58 = (int **)(v28 + 1);
      v57 = v27;
      v32 = *(_DWORD *)(v30 + 4 * (v31 - 1) + 272);
      v56 = (char **)v28;
      v55 = (int (*)())v32;
      v33 = *(unsigned __int16 *)(v32 + 270);
      v54 = v28;
      if ( v29 + v33 + 1 >= 0xC )
      {
        sub_1B3A48(&v54, 5 - v29);
        goto LABEL_28;
      }
    }
    else
    {
      if ( !*(_WORD *)(v30 + 270) )
      {
        v57 = 1;
        v54 = 0;
        v68[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        v56 = &off_2DD418;
        v38 = (int **)v68;
        v68[0] = &v61;
        goto LABEL_31;
      }
      v34 = *(_DWORD *)(v30 + 276);
      v59 = *(_DWORD *)v27;
      v60 = 0;
      v35 = *(unsigned __int16 *)(v34 + 270);
      v58 = (int **)(v28 + 1);
      v57 = v34;
      v56 = (char **)v28;
      v55 = (int (*)())v27;
      v54 = v28;
      if ( v29 + v35 + 1 >= 0xC )
      {
        sub_1B3FC8(&v54, 5 - v29);
        goto LABEL_28;
      }
    }
    v61 = v54;
    v62 = v55;
    v63 = v56;
    v64 = v57;
    v65 = (const char *)v58;
    v66 = v59;
    v67 = v60;
    v28 = sub_1B4810(&v61);
    v27 = v36;
    if ( !v36 )
      goto LABEL_28;
  }
  if ( !*(_WORD *)(v27 + 270) )
    *a3 = 1;
LABEL_28:
  v41 = v26;
  v5 = (int)v25;
LABEL_29:
  *a1 = v43;
  a1[1] = (int)v45;
  a1[2] = (int)v47;
  a1[3] = v48;
  a1[4] = (int)v49;
  a1[5] = v50;
  a1[6] = v5;
  a1[7] = (int)v4;
  a1[8] = v41;
  return v41;
}
