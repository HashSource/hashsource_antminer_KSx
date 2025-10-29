int __fastcall sub_922F0(unsigned __int16 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r12
  unsigned __int16 *v4; // lr
  int v5; // r3
  int v6; // r4
  int v7; // r3
  int v8; // r4
  int v9; // r2
  int v10; // r3
  int v11; // r5
  int v12; // r2
  int v13; // r12
  int v14; // r2
  int v15; // r4
  int v16; // r3
  int v17; // r2
  int v18; // r2
  int v19; // r3
  unsigned __int16 *v20; // lr
  int v21; // r6
  int v22; // r3
  int v23; // r5
  int v24; // r2
  int v25; // r12
  int v26; // r4
  int v27; // r2
  int v28; // r4
  int v29; // r3
  int v30; // r12
  int v31; // r2
  int v32; // r5
  int v33; // r2
  int v34; // r3
  int v35; // r2
  unsigned __int16 *v36; // lr
  int v37; // r7
  int v38; // r6
  int v39; // r2
  int v40; // r5
  int v41; // r3
  int v42; // r12
  int v43; // r4
  int v44; // r2
  int v45; // r4
  int v46; // r3
  int v47; // r12
  int v48; // r2
  int v49; // r5
  int v50; // r2
  int v51; // r3
  int v52; // r2
  int v53; // r12
  int v54; // r3
  int v55; // r12
  int v56; // r4
  int v57; // r3
  int v58; // r12
  int v59; // r12
  int v61; // lr

  v3 = a3 - 559038737 + a2;
  if ( ((unsigned __int8)a1 & 3) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      v4 = a1 + 6;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
      do
      {
        a2 -= 12;
        v7 = v5 + *((_DWORD *)v4 - 1);
        a1 = v4;
        v8 = v6 + *((_DWORD *)v4 - 2);
        v9 = (*((_DWORD *)v4 - 3) - v7 + v3) ^ __ROR4__(v7, 28);
        v10 = v8 + v7;
        v11 = v9 + v10;
        v12 = (v8 - v9) ^ __ROR4__(v9, 26);
        v4 += 6;
        v13 = v12 + v11;
        v14 = (v10 - v12) ^ __ROR4__(v12, 24);
        v15 = v14 + v13;
        v16 = (v11 - v14) ^ __ROR4__(v14, 16);
        v17 = v13 - v16;
        v3 = v16 + v15;
        v18 = v17 ^ __ROR4__(v16, 13);
        v19 = v15 - v18;
        v6 = v18 + v3;
        v5 = v19 ^ __ROR4__(v18, 28);
      }
      while ( a2 > 0xC );
    }
    switch ( a2 )
    {
      case 1u:
        goto LABEL_27;
      case 2u:
        goto LABEL_32;
      case 3u:
        v53 = (*(_DWORD *)a1 & 0xFFFFFF) + v3;
        goto LABEL_28;
      case 4u:
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 6u:
        v6 += a1[2];
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 7u:
        v53 = v3 + *(_DWORD *)a1;
        v6 += *((_DWORD *)a1 + 1) & 0xFFFFFF;
        goto LABEL_28;
      case 8u:
        v6 += *((_DWORD *)a1 + 1);
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 9u:
        v61 = *((unsigned __int8 *)a1 + 8);
        goto LABEL_35;
      case 0xAu:
        v61 = a1[4];
        goto LABEL_35;
      case 0xBu:
        v5 += *((_DWORD *)a1 + 2) & 0xFFFFFF;
        v6 += *((_DWORD *)a1 + 1);
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 0xCu:
        v61 = *((_DWORD *)a1 + 2);
LABEL_35:
        v5 += v61;
        v6 += *((_DWORD *)a1 + 1);
        v53 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      default:
        return v5;
    }
  }
  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      v20 = a1 + 6;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
      do
      {
        a2 -= 12;
        a1 = v20;
        v21 = *(v20 - 3);
        v22 = *(v20 - 2) + (*(v20 - 1) << 16) + v5;
        v23 = *(v20 - 4);
        v24 = *(v20 - 6) + (*(v20 - 5) << 16) - v22;
        v20 += 6;
        v25 = (v24 + v3) ^ __ROR4__(v22, 28);
        v26 = v23 + (v21 << 16) + v6;
        v27 = v26 - v25;
        v28 = v26 + v22;
        v29 = v27 ^ __ROR4__(v25, 26);
        v30 = v25 + v28;
        v31 = (v28 - v29) ^ __ROR4__(v29, 24);
        v32 = v31 + v29 + v30;
        v33 = (v30 - v31) ^ __ROR4__(v31, 16);
        v34 = v29 + v30 - v33;
        v3 = v33 + v32;
        v35 = v34 ^ __ROR4__(v33, 13);
        v6 = v35 + v3;
        v5 = (v32 - v35) ^ __ROR4__(v35, 28);
      }
      while ( a2 > 0xC );
    }
    switch ( a2 )
    {
      case 1u:
        goto LABEL_27;
      case 2u:
        goto LABEL_32;
      case 3u:
        v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_32:
        v53 = *a1 + v3;
        goto LABEL_28;
      case 4u:
        goto LABEL_50;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
LABEL_50:
        v53 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      case 6u:
        goto LABEL_44;
      case 7u:
        v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_44:
        v53 = *a1 + v3 + (a1[1] << 16);
        v6 += a1[2];
        goto LABEL_28;
      case 8u:
        goto LABEL_46;
      case 9u:
        v5 += *((unsigned __int8 *)a1 + 8);
LABEL_46:
        v6 += a1[2] + (a1[3] << 16);
        v53 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      case 0xAu:
        goto LABEL_48;
      case 0xBu:
        v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_48:
        v6 += a1[2] + (a1[3] << 16);
        v53 = *a1 + v3 + (a1[1] << 16);
        v5 += a1[4];
        goto LABEL_28;
      case 0xCu:
        v5 += a1[4] + (a1[5] << 16);
        v6 += a1[2] + (a1[3] << 16);
        v53 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      default:
        return v5;
    }
  }
  if ( a2 > 0xC )
  {
    v36 = a1 + 6;
    v5 = a3 - 559038737 + a2;
    v6 = v5;
    do
    {
      a2 -= 12;
      a1 = v36;
      v37 = *((unsigned __int8 *)v36 - 1);
      v38 = (*((unsigned __int8 *)v36 - 2) << 16) + (*((unsigned __int8 *)v36 - 3) << 8) + *((unsigned __int8 *)v36 - 4);
      v39 = (*((unsigned __int8 *)v36 - 10) << 16) + (*((unsigned __int8 *)v36 - 11) << 8);
      v40 = *((unsigned __int8 *)v36 - 6);
      v36 += 6;
      v41 = v38 + (v37 << 24) + v5;
      v42 = (v39 + *((unsigned __int8 *)v36 - 24) + (*((unsigned __int8 *)v36 - 21) << 24) - v41 + v3)
          ^ __ROR4__(v41, 28);
      v43 = (v40 << 16)
          + (*((unsigned __int8 *)v36 - 19) << 8)
          + *((unsigned __int8 *)v36 - 20)
          + (*((unsigned __int8 *)v36 - 17) << 24)
          + v6;
      v44 = v43 - v42;
      v45 = v43 + v41;
      v46 = v44 ^ __ROR4__(v42, 26);
      v47 = v42 + v45;
      v48 = (v45 - v46) ^ __ROR4__(v46, 24);
      v49 = v48 + v46 + v47;
      v50 = (v47 - v48) ^ __ROR4__(v48, 16);
      v51 = v46 + v47 - v50;
      v3 = v50 + v49;
      v52 = v51 ^ __ROR4__(v50, 13);
      v6 = v52 + v3;
      v5 = (v49 - v52) ^ __ROR4__(v52, 28);
    }
    while ( a2 > 0xC );
  }
  else
  {
    v5 = a3 - 559038737 + a2;
    v6 = v5;
  }
  switch ( a2 )
  {
    case 1u:
      goto LABEL_27;
    case 2u:
      goto LABEL_26;
    case 3u:
      goto LABEL_25;
    case 4u:
      goto LABEL_24;
    case 5u:
      goto LABEL_23;
    case 6u:
      goto LABEL_22;
    case 7u:
      goto LABEL_21;
    case 8u:
      goto LABEL_20;
    case 9u:
      goto LABEL_19;
    case 0xAu:
      goto LABEL_18;
    case 0xBu:
      goto LABEL_17;
    case 0xCu:
      v5 += *((unsigned __int8 *)a1 + 11) << 24;
LABEL_17:
      v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_18:
      v5 += *((unsigned __int8 *)a1 + 9) << 8;
LABEL_19:
      v5 += *((unsigned __int8 *)a1 + 8);
LABEL_20:
      v6 += *((unsigned __int8 *)a1 + 7) << 24;
LABEL_21:
      v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_22:
      v6 += *((unsigned __int8 *)a1 + 5) << 8;
LABEL_23:
      v6 += *((unsigned __int8 *)a1 + 4);
LABEL_24:
      v3 += *((unsigned __int8 *)a1 + 3) << 24;
LABEL_25:
      v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_26:
      v3 += *((unsigned __int8 *)a1 + 1) << 8;
LABEL_27:
      v53 = *(unsigned __int8 *)a1 + v3;
LABEL_28:
      v54 = (v5 ^ v6) - __ROR4__(v6, 18);
      v55 = (v53 ^ v54) - __ROR4__(v54, 21);
      v56 = (v6 ^ v55) - __ROR4__(v55, 7);
      v57 = (v54 ^ v56) - __ROR4__(v56, 16);
      v58 = (v55 ^ v57) - __ROR4__(v57, 28);
      v59 = (v56 ^ v58) - __ROR4__(v58, 18);
      v5 = (v57 ^ v59) - __ROR4__(v59, 8);
      break;
    default:
      return v5;
  }
  return v5;
}
