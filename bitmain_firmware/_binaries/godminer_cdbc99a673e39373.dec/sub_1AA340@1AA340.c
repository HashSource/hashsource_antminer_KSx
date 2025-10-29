int __fastcall sub_1AA340(int a1, unsigned __int8 **a2)
{
  unsigned __int64 v2; // r4
  unsigned int *v4; // r7
  unsigned __int8 *v5; // r0
  unsigned int v6; // r1
  _DWORD *v7; // r8
  unsigned int v8; // r12
  int v9; // r2
  unsigned int v10; // r6
  int v11; // r2
  unsigned int v12; // r6
  unsigned __int8 *v13; // r3
  int v14; // lr
  int v15; // r0
  unsigned int v16; // r10
  int v17; // r2
  int v18; // r3
  unsigned int v19; // r0
  unsigned int v20; // t1
  unsigned int v21; // r8
  unsigned int v22; // r7
  unsigned int v23; // r0
  unsigned __int8 *v24; // r2
  unsigned int v25; // r3
  unsigned int v26; // r0
  __int64 v27; // r2
  unsigned int v28; // r3
  unsigned int v29; // r0
  __int64 v30; // r2
  unsigned int v31; // r9
  unsigned int v32; // r0
  unsigned int v33; // r0
  unsigned int v34; // r6
  int v35; // lr
  unsigned int v36; // kr30_4
  int v37; // r3
  unsigned __int64 v38; // kr38_8
  int v39; // r9
  int result; // r0
  unsigned int v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r7
  unsigned int v45; // r9
  int v46; // r3
  unsigned __int8 *v47; // r8
  unsigned int v48; // r10
  unsigned int v49; // r2
  unsigned int v50; // r1
  int v51; // r2
  unsigned int v52; // r9
  int v53; // r3
  unsigned __int8 *v54; // r8
  unsigned int v55; // r7
  unsigned int v56; // r1
  unsigned int v57; // r9
  unsigned int v58; // r10
  char v59; // r7
  unsigned int v60; // r1
  unsigned int v61; // r0
  unsigned int v62; // r0
  unsigned int v63; // r2
  unsigned __int8 *v64; // r0
  __int64 v65; // r0
  unsigned int v66; // r9
  unsigned __int8 *v67; // r0
  __int64 v68; // r0
  int v69; // r8
  int v70; // r7
  unsigned int v71; // r10
  int v72; // r2
  unsigned int v73; // r11
  unsigned int v74; // t1
  unsigned int v75; // r5
  unsigned int v76; // r1
  int v77; // r7
  int v78; // r8
  unsigned int v79; // r10
  unsigned int v80; // r0
  unsigned int v81; // t1
  unsigned int v82; // r2
  unsigned int v83; // r1
  unsigned __int8 *v84; // r10
  unsigned int v85; // t1
  unsigned int v86; // r7
  unsigned int v87; // r1
  int v88; // r1
  int v89; // r2
  __int64 v90; // r0
  __int64 v91; // r0
  int v92; // r8
  __int64 v93; // r2
  unsigned int v94; // r0
  unsigned int v95; // r7
  unsigned int v96; // r1
  int v97; // r3
  __int64 v98; // r0
  __int64 v99; // r0
  __int64 v100; // r0
  int v101; // r7
  int v102; // r6
  __int64 v103; // r0
  int v104; // r7
  unsigned int v105; // r3
  unsigned int *v106; // r0
  unsigned int v107; // r3
  unsigned int *v108; // r0
  unsigned int v109; // r7
  unsigned int v110; // r7
  int v111; // r1
  int v112; // r2
  unsigned int v113; // r3
  int *v114; // r0
  unsigned int v115; // r6
  unsigned __int8 *v116; // [sp+0h] [bp-54h]
  unsigned int v117; // [sp+4h] [bp-50h]
  unsigned int v118; // [sp+8h] [bp-4Ch]
  unsigned int *v119; // [sp+Ch] [bp-48h]
  unsigned int v120; // [sp+10h] [bp-44h]
  unsigned __int8 *v121; // [sp+14h] [bp-40h]
  unsigned __int8 *v122; // [sp+18h] [bp-3Ch]
  unsigned __int8 *v123; // [sp+1Ch] [bp-38h]
  int v124; // [sp+1Ch] [bp-38h]
  int v125; // [sp+20h] [bp-34h]
  int *v126; // [sp+24h] [bp-30h]
  unsigned int v127; // [sp+28h] [bp-2Ch]
  unsigned int *v128; // [sp+2Ch] [bp-28h]
  int v129; // [sp+2Ch] [bp-28h]
  int v130; // [sp+33h] [bp-21h]
  int v131; // [sp+33h] [bp-21h]
  int v132; // [sp+33h] [bp-21h]
  int v133; // [sp+33h] [bp-21h]
  _BYTE v134[15]; // [sp+38h] [bp-1Ch]
  int v135; // [sp+3Fh] [bp-15h]
  __int64 v136; // [sp+3Fh] [bp-15h]
  _BYTE v137[11]; // [sp+48h] [bp-Ch]

  HIDWORD(v2) = a2[1];
  if ( !HIDWORD(v2) )
    goto LABEL_66;
  v4 = (unsigned int *)a2;
  v5 = a2[2];
  v6 = -1;
  v7 = (_DWORD *)(a1 + 8);
  v8 = (unsigned __int8)v5;
  v9 = (-8 * (_DWORD)v5) & 0x38;
  v128 = v4 + 4;
  v10 = 0xFFFFFFFF >> v9;
  v11 = v9 - 32;
  if ( v11 >= 0 )
  {
    v10 = 0;
    v6 = 0xFFFFFFFF >> v11;
  }
  v127 = v10;
  if ( !*((_BYTE *)v4 + 12) )
  {
    while ( 1 )
    {
      switch ( v8 )
      {
        case 1u:
          v29 = *v4;
          LODWORD(v30) = *v4 + 1;
          HIDWORD(v30) = *(unsigned __int8 *)*v4;
          *v4 = v30;
          v4[1] = HIDWORD(v2) - 1;
          if ( HIDWORD(v2) == 1 )
            goto LABEL_67;
          HIDWORD(v2) -= 2;
          LODWORD(v2) = v29 + 2;
          v31 = 0;
          *(_QWORD *)v4 = v2;
          v32 = *(unsigned __int8 *)(v29 + 1);
          goto LABEL_53;
        case 2u:
          v33 = *v4;
          if ( HIDWORD(v2) < 2 )
            goto LABEL_68;
          LODWORD(v30) = v33 + 2;
          HIDWORD(v30) = *(unsigned __int16 *)v33;
          *v4 = v33 + 2;
          v4[1] = HIDWORD(v2) - 2;
          if ( (unsigned int)(HIDWORD(v2) - 2) < 2 )
            goto LABEL_67;
          HIDWORD(v2) -= 4;
          *v4 = v33 + 4;
          v4[1] = HIDWORD(v2);
          v31 = 0;
          v32 = *(unsigned __int16 *)(v33 + 2);
          goto LABEL_53;
        case 4u:
          v33 = *v4;
          if ( HIDWORD(v2) < 4 )
          {
LABEL_68:
            v42 = 0;
            *(_DWORD *)&v134[7] = v33;
            *(_DWORD *)&v134[11] = 0;
            v43 = 19;
            v126 = (int *)v4;
LABEL_71:
            v41 = v43 | (v33 << 8);
            LODWORD(v2) = *(_DWORD *)&v134[7];
            v12 = HIBYTE(v33) | (v42 << 8);
            v14 = *(_DWORD *)&v134[11];
            goto LABEL_116;
          }
          LODWORD(v30) = v33 + 4;
          HIDWORD(v30) = *(_DWORD *)v33;
          *v4 = v33 + 4;
          v4[1] = HIDWORD(v2) - 4;
          if ( (unsigned int)(HIDWORD(v2) - 4) < 4 )
          {
LABEL_67:
            v12 = 0;
            v41 = 19;
            v126 = (int *)v4;
            v135 = v30;
            goto LABEL_115;
          }
          HIDWORD(v2) -= 8;
          *v4 = v33 + 8;
          v4[1] = HIDWORD(v2);
          v31 = 0;
          v32 = *(_DWORD *)(v33 + 4);
LABEL_53:
          LODWORD(v30) = 0;
          if ( !(HIDWORD(v30) | v32) )
          {
LABEL_65:
            *(_QWORD *)v4 = (unsigned int)aRustc9eb3afe9e;
LABEL_66:
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 4) = 0;
            return 0;
          }
          break;
        case 8u:
          v34 = *v4;
          if ( HIDWORD(v2) < 8 )
          {
            *(_DWORD *)&v137[7] = *v4;
            v126 = (int *)v4;
            v33 = *(_DWORD *)v137;
            v42 = *(_DWORD *)&v137[4];
            *(_WORD *)&v134[8] = v34 >> 8;
            v134[10] = HIBYTE(*v4);
            v43 = 19;
            *(_DWORD *)&v134[11] = 0;
            v134[7] = *v4;
            goto LABEL_71;
          }
          HIDWORD(v30) = *(_DWORD *)v34;
          LODWORD(v30) = *(_DWORD *)(v34 + 4);
          LODWORD(v2) = v34 + 8;
          *v4 = v34 + 8;
          v4[1] = HIDWORD(v2) - 8;
          if ( (unsigned int)(HIDWORD(v2) - 8) < 8 )
          {
            v137[7] = v34 + 8;
            v126 = (int *)v4;
            *(_WORD *)((char *)&v135 + 1) = (unsigned int)v2 >> 8;
            v41 = (*(_DWORD *)v137 << 8) | 0x13;
            HIBYTE(v135) = (v34 + 8) >> 24;
            LOBYTE(v135) = v34 + 8;
            v12 = *(__int64 *)v137 >> 24;
LABEL_115:
            LODWORD(v2) = v135;
            v14 = 0;
LABEL_116:
            HIDWORD(v2) = HIWORD(v41);
            v8 = v41 >> 8;
            goto LABEL_117;
          }
          HIDWORD(v2) -= 16;
          v32 = *(_DWORD *)v2;
          v31 = *(_DWORD *)(v34 + 12);
          LODWORD(v2) = v34 + 16;
          *(_QWORD *)v4 = v2;
          if ( !(HIDWORD(v30) | v32 | (unsigned int)v30 | v31) )
            goto LABEL_65;
          break;
        default:
          v134[0] = v8;
          v33 = *(_DWORD *)v134;
          v42 = *(unsigned __int16 *)&v134[4] | (v134[6] << 16);
          v43 = 23;
          v126 = (int *)v4;
          goto LABEL_71;
      }
      if ( v30 != __PAIR64__(v6, v127) )
        goto LABEL_59;
      *v128 = v32;
      v4[5] = v31;
      if ( !HIDWORD(v2) )
        goto LABEL_66;
    }
  }
  v12 = *v4;
  v13 = (unsigned __int8 *)v4[8];
  v14 = (int)&v13[v4[6]];
  v116 = (unsigned __int8 *)v4[6];
  v123 = (unsigned __int8 *)(v4[7] - (_DWORD)v13);
  v121 = v13;
  v125 = a1 + 8;
  v126 = (int *)v4;
  v120 = (unsigned __int8)v5;
  v119 = (unsigned int *)v14;
  v117 = v6;
  v122 = (unsigned __int8 *)v4[7];
  while ( 2 )
  {
    LODWORD(v2) = HIDWORD(v2) - 1;
    v4[1] = HIDWORD(v2) - 1;
    v16 = v12 + 1;
    v15 = *(unsigned __int8 *)v12;
    *v4 = v12 + 1;
    switch ( v15 )
    {
      case 0:
        goto LABEL_65;
      case 1:
        if ( HIDWORD(v2) == 1 )
          goto LABEL_95;
        v118 = v12;
        v17 = 2 - HIDWORD(v2);
        LODWORD(v2) = 0;
        v14 = 0;
        v18 = 0;
        ++v12;
        while ( 2 )
        {
          v20 = *(unsigned __int8 *)v12++;
          v19 = v20;
          if ( v18 == 63 && v19 >= 2 )
          {
            LOBYTE(v41) = 6;
LABEL_62:
            v7 = (_DWORD *)(a1 + 8);
            HIDWORD(v2) = 0;
            goto LABEL_117;
          }
          v8 = v19 & 0x7F;
          v21 = v8 << (v18 & 0x3F);
          v22 = v8 >> (32 - (v18 & 0x3F));
          if ( (v18 & 0x3F) - 32 >= 0 )
          {
            v21 = 0;
            v22 = v8 << ((v18 & 0x3F) - 32);
          }
          v14 |= v22;
          LODWORD(v2) = v21 | v2;
          if ( (v19 & 0x80u) != 0 )
          {
            ++v17;
            v18 += 7;
            v16 = v12;
            if ( v17 == 1 )
            {
              LOBYTE(v8) = v19;
              LODWORD(v2) = v118 + HIDWORD(v2);
              *v126 = v118 + HIDWORD(v2);
              v126[1] = 0;
              goto LABEL_63;
            }
            continue;
          }
          break;
        }
        HIDWORD(v2) = -v17;
        *v126 = v16 + 1;
        v126[1] = -v17;
        if ( v14 )
        {
          LOBYTE(v41) = 53;
          goto LABEL_62;
        }
        v7 = (_DWORD *)(a1 + 8);
        if ( v122 < v121 )
        {
          *(_DWORD *)&v134[11] = 0;
          v26 = (unsigned int)v116;
          goto LABEL_169;
        }
        v8 = v120;
        v24 = (unsigned __int8 *)(v2 * v120);
        if ( !is_mul_ok(v2, v120) )
        {
          result = 53;
LABEL_170:
          v130 = *(_DWORD *)&v134[3];
          LOBYTE(v130) = v134[3];
          v88 = *(_DWORD *)v134;
          v89 = v130;
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v134[7];
LABEL_171:
          *(_DWORD *)a1 = 2;
          *(_DWORD *)(a1 + 12) = v89;
          *(_DWORD *)(a1 + 4) = 0;
          *(_DWORD *)(a1 + 9) = v88;
          *(_BYTE *)(a1 + 8) = result;
          return result;
        }
        if ( v123 < v24 )
        {
          *(_DWORD *)&v134[11] = 0;
          v26 = (unsigned int)v119;
LABEL_169:
          *(_DWORD *)&v134[7] = v26;
          result = 19;
          goto LABEL_170;
        }
        v14 = (int)v119;
        v25 = v123 - v24;
        v26 = (unsigned int)&v24[(_DWORD)v119];
        switch ( v120 )
        {
          case 1u:
            if ( v123 == v24 )
              goto LABEL_168;
            v12 = v16 + 1;
            v27 = *(unsigned __int8 *)v26;
            goto LABEL_41;
          case 2u:
            if ( v25 < 2 )
              goto LABEL_168;
            v12 = v16 + 1;
            v27 = *(unsigned __int16 *)v26;
            goto LABEL_41;
          case 4u:
            if ( v25 < 4 )
            {
LABEL_168:
              *(_DWORD *)&v134[11] = 0;
              goto LABEL_169;
            }
            v12 = v16 + 1;
            v27 = *(unsigned int *)v26;
LABEL_41:
            v4 = (unsigned int *)v126;
            LOBYTE(v6) = v117;
            *(_QWORD *)v128 = v27;
            if ( !HIDWORD(v2) )
              goto LABEL_66;
            break;
          case 8u:
            if ( v25 < 8 )
            {
              v137[7] = (_BYTE)v119 + (_BYTE)v24;
              *(_DWORD *)v134 = *(_DWORD *)v137;
              *(_WORD *)&v134[8] = v26 >> 8;
              v134[10] = (unsigned int)&v24[(_DWORD)v119] >> 24;
              result = 19;
              *(_DWORD *)&v134[11] = 0;
              *(_DWORD *)&v134[4] = *(_DWORD *)&v137[4];
              goto LABEL_170;
            }
            v27 = *(_QWORD *)v26;
            v12 = v16 + 1;
            goto LABEL_41;
          default:
            result = 23;
            v134[0] = v120;
            goto LABEL_170;
        }
        continue;
      case 2:
        if ( HIDWORD(v2) == 1 )
          goto LABEL_95;
        LODWORD(v2) = v12 + HIDWORD(v2);
        v44 = 0;
        v45 = 0;
        v14 = 0;
        v46 = 0;
        while ( 1 )
        {
          v47 = (unsigned __int8 *)(v12 + v44);
          v48 = *(unsigned __int8 *)(v12 + v44 + 1);
          if ( v46 == 63 && v48 >= 2 )
          {
            LOBYTE(v41) = 6;
            goto LABEL_62;
          }
          v49 = v48 & 0x7F;
          v8 = v12;
          v12 = v49 << (v46 & 0x3F);
          if ( (v46 & 0x3F) - 32 >= 0 )
            v12 = 0;
          v45 |= v12;
          v50 = v49 >> (32 - (v46 & 0x3F));
          if ( (v46 & 0x3F) - 32 >= 0 )
            v50 = v49 << ((v46 & 0x3F) - 32);
          v14 |= v50;
          if ( (v48 & 0x80u) == 0 )
            break;
          ++v44;
          v46 += 7;
          v12 = v8;
          if ( v44 - HIDWORD(v2) == -1 )
          {
LABEL_94:
            LOBYTE(v8) = v48;
            *(_QWORD *)v126 = (unsigned int)v2;
LABEL_63:
            v7 = (_DWORD *)(a1 + 8);
LABEL_64:
            HIDWORD(v2) = 0;
            LOBYTE(v41) = 19;
            v14 = 0;
            goto LABEL_117;
          }
        }
        LODWORD(v2) = v47 + 2;
        LOBYTE(v41) = 53;
        *v126 = (int)(v47 + 2);
        v126[1] = HIDWORD(v2) - v44 - 2;
        if ( v14 )
        {
          LODWORD(v2) = v45;
          goto LABEL_62;
        }
        if ( v44 - HIDWORD(v2) == -2 )
        {
LABEL_222:
          HIDWORD(v2) = 0;
          LOBYTE(v41) = 19;
          v14 = 0;
          goto LABEL_210;
        }
        v129 = a1;
        v69 = (int)&v47[~v44 + 1 + HIDWORD(v2)];
        v70 = v44 - HIDWORD(v2) + 3;
        HIDWORD(v2) = 0;
        v71 = 0;
        v14 = 0;
        v72 = 0;
        v8 = v2;
        while ( 1 )
        {
          v74 = *(unsigned __int8 *)v8++;
          v73 = v74;
          if ( v72 == 63 && v73 >= 2 )
          {
            LOBYTE(v41) = 6;
LABEL_232:
            a1 = v129;
            goto LABEL_210;
          }
          v12 = v73 & 0x7F;
          v75 = v12 << (v72 & 0x3F);
          if ( (v72 & 0x3F) - 32 >= 0 )
            v75 = 0;
          v71 |= v75;
          v76 = v12 >> (32 - (v72 & 0x3F));
          if ( (v72 & 0x3F) - 32 >= 0 )
            v76 = v12 << ((v72 & 0x3F) - 32);
          v14 |= v76;
          if ( (v73 & 0x80u) == 0 )
            break;
          ++v70;
          v72 += 7;
          v2 = v8;
          if ( v70 == 1 )
          {
            LOBYTE(v8) = v73;
            a1 = v129;
            LODWORD(v2) = v69;
            *(_QWORD *)v126 = (unsigned int)v69;
            goto LABEL_222;
          }
        }
        HIDWORD(v100) = -v70;
        HIDWORD(v2) = 0;
        LODWORD(v100) = v2 + 1;
        *(_QWORD *)v126 = v100;
        if ( v14 )
        {
          LODWORD(v2) = v71;
          goto LABEL_232;
        }
        v101 = v129;
        v102 = v125;
        if ( v122 < v121 )
        {
          *(_DWORD *)&v134[11] = 0;
          *(_DWORD *)&v134[7] = v116;
          result = 19;
          goto LABEL_262;
        }
        v107 = v45 * v120;
        result = 53;
        if ( is_mul_ok(v45, v120) )
        {
          if ( (unsigned int)v123 < v107 )
          {
            *(_DWORD *)&v134[11] = 0;
            v108 = v119;
LABEL_259:
            *(_DWORD *)&v134[7] = v108;
LABEL_260:
            result = 19;
LABEL_261:
            v101 = v129;
            v102 = v125;
            goto LABEL_262;
          }
          v110 = (unsigned int)&v123[-v107];
          v108 = (unsigned int *)((char *)v119 + v107);
          switch ( v120 )
          {
            case 1u:
              if ( v123 == (unsigned __int8 *)v107 )
                goto LABEL_258;
              v8 = *(unsigned __int8 *)v108;
              v39 = 0;
              goto LABEL_273;
            case 2u:
              if ( v110 < 2 )
                goto LABEL_258;
              v8 = *(unsigned __int16 *)v108;
              v39 = 0;
              goto LABEL_273;
            case 4u:
              if ( v110 >= 4 )
              {
                v8 = *v108;
                v39 = 0;
                goto LABEL_273;
              }
LABEL_258:
              *(_DWORD *)&v134[11] = 0;
              goto LABEL_259;
            case 8u:
              if ( v110 < 8 )
              {
                v137[7] = (_BYTE)v119 + v107;
                *(_DWORD *)v134 = *(_DWORD *)v137;
                *(_WORD *)&v134[8] = (unsigned int)v108 >> 8;
                v134[14] = 0;
                *(_DWORD *)&v134[10] = ((unsigned int)v119 + v107) >> 24;
                *(_DWORD *)&v134[4] = *(_DWORD *)&v137[4];
                goto LABEL_260;
              }
              v8 = *v108;
              v39 = v108[1];
LABEL_273:
              v113 = v71 * v120;
              result = 53;
              if ( !is_mul_ok(v71, v120) )
                goto LABEL_284;
              if ( (unsigned int)v123 >= v113 )
              {
                v115 = (unsigned int)&v123[-v113];
                v114 = (int *)((char *)v119 + v113);
                switch ( v120 )
                {
                  case 1u:
                    if ( v123 == (unsigned __int8 *)v113 )
                      goto LABEL_282;
                    v35 = *(unsigned __int8 *)v114;
                    goto LABEL_288;
                  case 2u:
                    if ( v115 < 2 )
                      goto LABEL_282;
                    v35 = *(unsigned __int16 *)v114;
                    goto LABEL_288;
                  case 4u:
                    if ( v115 < 4 )
                    {
LABEL_282:
                      *(_DWORD *)&v134[11] = 0;
                      goto LABEL_283;
                    }
                    v35 = *v114;
LABEL_288:
                    v37 = 0;
                    a1 = v129;
                    goto LABEL_269;
                  case 8u:
                    if ( v115 < 8 )
                    {
                      v137[7] = (_BYTE)v119 + v113;
                      *(_DWORD *)v134 = *(_DWORD *)v137;
                      *(_WORD *)&v134[8] = (unsigned int)v114 >> 8;
                      v134[10] = ((unsigned int)v119 + v113) >> 24;
                      result = 19;
                      *(_DWORD *)&v134[11] = 0;
                      *(_DWORD *)&v134[4] = *(_DWORD *)&v137[4];
                      goto LABEL_284;
                    }
                    v35 = *v114;
                    v37 = v114[1];
                    a1 = v129;
                    break;
                  default:
                    v134[0] = v120;
                    result = 23;
                    goto LABEL_284;
                }
                goto LABEL_269;
              }
              *(_DWORD *)&v134[11] = 0;
              v114 = (int *)v119;
LABEL_283:
              *(_DWORD *)&v134[7] = v114;
              result = 19;
LABEL_284:
              v133 = *(_DWORD *)&v134[3];
              LOBYTE(v133) = v134[3];
              *(_QWORD *)(v125 + 8) = *(_QWORD *)&v134[7];
              v111 = *(_DWORD *)v134;
              v112 = v133;
              v101 = v129;
              break;
            default:
              v134[0] = v120;
              result = 23;
              goto LABEL_261;
          }
        }
        else
        {
LABEL_262:
          v132 = *(_DWORD *)&v134[3];
          LOBYTE(v132) = v134[3];
          v111 = *(_DWORD *)v134;
          v112 = v132;
          *(_QWORD *)(v102 + 8) = *(_QWORD *)&v134[7];
        }
        *(_DWORD *)v101 = 2;
        *(_DWORD *)(v101 + 12) = v112;
        *(_DWORD *)(v101 + 4) = 0;
        *(_DWORD *)(v101 + 9) = v111;
        *(_BYTE *)(v101 + 8) = result;
        return result;
      case 3:
        if ( HIDWORD(v2) == 1 )
        {
LABEL_95:
          LODWORD(v2) = v12 + 1;
          goto LABEL_64;
        }
        LODWORD(v2) = v12 + HIDWORD(v2);
        v51 = 0;
        v52 = 0;
        v14 = 0;
        v53 = 0;
        while ( 2 )
        {
          v54 = (unsigned __int8 *)(v12 + v51);
          v48 = *(unsigned __int8 *)(v12 + v51 + 1);
          if ( v53 == 63 && v48 >= 2 )
          {
            v67 = v54 + 2;
          }
          else
          {
            v55 = v48 & 0x7F;
            v8 = v12;
            v12 = v55 << (v53 & 0x3F);
            if ( (v53 & 0x3F) - 32 >= 0 )
              v12 = 0;
            v52 |= v12;
            v56 = v55 >> (32 - (v53 & 0x3F));
            if ( (v53 & 0x3F) - 32 >= 0 )
              v56 = v55 << ((v53 & 0x3F) - 32);
            v14 |= v56;
            if ( (char)v48 <= -1 )
            {
              ++v51;
              v53 += 7;
              v12 = v8;
              if ( v51 - HIDWORD(v2) == -1 )
                goto LABEL_94;
              continue;
            }
            LODWORD(v2) = v54 + 2;
            *v126 = (int)(v54 + 2);
            v126[1] = HIDWORD(v2) - v51 - 2;
            if ( v14 )
            {
              LOBYTE(v41) = 53;
              v2 = v52;
LABEL_210:
              v7 = (_DWORD *)v125;
              goto LABEL_117;
            }
            if ( v51 - HIDWORD(v2) == -2 )
              goto LABEL_63;
            v77 = v51 - HIDWORD(v2) + 3;
            v78 = (int)&v54[~v51 + 1 + HIDWORD(v2)];
            v14 = 0;
            v79 = 0;
            HIDWORD(v2) = 0;
            v8 = v2;
            while ( 1 )
            {
              v81 = *(unsigned __int8 *)v8++;
              v80 = v81;
              if ( HIDWORD(v2) == 63 && v80 >= 2 )
                break;
              v12 = v80 & 0x7F;
              v82 = v12 << (BYTE4(v2) & 0x3F);
              if ( (BYTE4(v2) & 0x3F) - 32 >= 0 )
                v82 = 0;
              v14 |= v82;
              v83 = v12 >> (32 - (BYTE4(v2) & 0x3F));
              if ( (BYTE4(v2) & 0x3F) - 32 >= 0 )
                v83 = v12 << ((BYTE4(v2) & 0x3F) - 32);
              v79 |= v83;
              if ( (char)v80 > -1 )
              {
                HIDWORD(v103) = -v77;
                LODWORD(v103) = v2 + 1;
                v104 = a1 + 8;
                *(_QWORD *)v126 = v103;
                if ( v122 >= v121 )
                {
                  v105 = v52 * v120;
                  result = 53;
                  if ( is_mul_ok(v52, v120) )
                  {
                    if ( (unsigned int)v123 >= v105 )
                    {
                      v109 = (unsigned int)&v123[-v105];
                      v106 = (unsigned int *)((char *)v119 + v105);
                      switch ( v120 )
                      {
                        case 1u:
                          if ( v123 == (unsigned __int8 *)v105 )
                            goto LABEL_248;
                          v8 = *(unsigned __int8 *)v106;
                          v39 = 0;
                          goto LABEL_268;
                        case 2u:
                          if ( v109 < 2 )
                            goto LABEL_248;
                          v8 = *(unsigned __int16 *)v106;
                          v39 = 0;
                          goto LABEL_268;
                        case 4u:
                          if ( v109 >= 4 )
                          {
                            v8 = *v106;
                            v39 = 0;
                            goto LABEL_268;
                          }
LABEL_248:
                          *(_DWORD *)&v134[11] = 0;
                          goto LABEL_249;
                        case 8u:
                          if ( v109 < 8 )
                          {
                            v137[7] = (_BYTE)v119 + v105;
                            *(_DWORD *)v134 = *(_DWORD *)v137;
                            *(_WORD *)&v134[8] = (unsigned int)v106 >> 8;
                            v134[14] = 0;
                            *(_DWORD *)&v134[10] = ((unsigned int)v119 + v105) >> 24;
                            *(_DWORD *)&v134[4] = *(_DWORD *)&v137[4];
                            goto LABEL_250;
                          }
                          v8 = *v106;
                          v39 = v106[1];
LABEL_268:
                          v37 = (__PAIR64__(v39, v8) + __PAIR64__(v79, v14)) >> 32;
                          v35 = v8 + v14;
LABEL_269:
                          v7 = (_DWORD *)v125;
                          v4 = (unsigned int *)v126;
                          if ( __PAIR64__(v37, v35) >= __PAIR64__(v39, v8) )
                            goto LABEL_217;
                          goto LABEL_60;
                        default:
                          v134[0] = v120;
                          result = 23;
                          goto LABEL_251;
                      }
                    }
                    *(_DWORD *)&v134[11] = 0;
                    v106 = v119;
LABEL_249:
                    *(_DWORD *)&v134[7] = v106;
LABEL_250:
                    result = 19;
LABEL_251:
                    v104 = a1 + 8;
                  }
                }
                else
                {
                  *(_DWORD *)&v134[11] = 0;
                  *(_DWORD *)&v134[7] = v116;
                  result = 19;
                }
                v131 = *(_DWORD *)&v134[3];
                LOBYTE(v131) = v134[3];
                v88 = *(_DWORD *)v134;
                v89 = v131;
                *(_QWORD *)(v104 + 8) = *(_QWORD *)&v134[7];
                goto LABEL_171;
              }
              ++v77;
              HIDWORD(v2) += 7;
              LODWORD(v2) = v8;
              if ( v77 == 1 )
              {
                LOBYTE(v8) = v80;
                LODWORD(v2) = v78;
                *(_QWORD *)v126 = (unsigned int)v78;
                goto LABEL_63;
              }
            }
            v67 = (unsigned __int8 *)(v2 + 1);
          }
          break;
        }
        *v126 = (int)v67;
        goto LABEL_209;
      case 4:
        if ( HIDWORD(v2) == 1 )
        {
          LODWORD(v2) = v12 + 1;
          goto LABEL_120;
        }
        v14 = v12;
        LODWORD(v2) = v12 + HIDWORD(v2);
        v8 = 0;
        v30 = 0;
        v12 = 0;
        while ( 1 )
        {
          v57 = v14 + v8;
          v58 = *(unsigned __int8 *)(v14 + v8 + 1);
          if ( v12 == 63 && v58 >= 2 )
          {
            HIDWORD(v68) = HIDWORD(v2) - v8 - 2;
            LODWORD(v68) = v57 + 2;
            goto LABEL_132;
          }
          v59 = v12 & 0x3F;
          v60 = v58 & 0x7F;
          v61 = v60 << (v12 & 0x3F);
          if ( (int)((v12 & 0x3F) - 32) >= 0 )
            v61 = 0;
          HIDWORD(v30) |= v61;
          v62 = v60 >> (32 - v59);
          if ( (int)((v12 & 0x3F) - 32) >= 0 )
            v62 = v60 << ((v12 & 0x3F) - 32);
          LODWORD(v30) = v62 | v30;
          if ( (char)v58 > -1 )
            break;
          ++v8;
          v12 += 7;
          LOBYTE(v6) = v58;
          if ( v8 - HIDWORD(v2) == -1 )
          {
            v7 = (_DWORD *)(a1 + 8);
            *(_QWORD *)v126 = (unsigned int)v2;
LABEL_120:
            HIDWORD(v2) = 0;
            LOBYTE(v41) = 19;
            v14 = 0;
            LOBYTE(v8) = v6;
            goto LABEL_117;
          }
        }
        v12 = v8 - HIDWORD(v2);
        LODWORD(v2) = v57 + 2;
        *v126 = v57 + 2;
        v126[1] = HIDWORD(v2) - v8 - 2;
        if ( v8 - HIDWORD(v2) == -2 )
          goto LABEL_213;
        v14 = v12 + 3;
        v124 = v57 + 1 + ~v8 + HIDWORD(v2);
        v32 = 0;
        v31 = 0;
        HIDWORD(v2) = 0;
        v84 = (unsigned __int8 *)v2;
        while ( 1 )
        {
          v85 = *v84++;
          v8 = v85;
          if ( HIDWORD(v2) == 63 && v8 >= 2 )
            break;
          v86 = v8 & 0x7F;
          v12 = v86 << (BYTE4(v2) & 0x3F);
          if ( (BYTE4(v2) & 0x3F) - 32 >= 0 )
            v12 = 0;
          v32 |= v12;
          v87 = v86 >> (32 - (BYTE4(v2) & 0x3F));
          if ( (BYTE4(v2) & 0x3F) - 32 >= 0 )
            v87 = v86 << ((BYTE4(v2) & 0x3F) - 32);
          v31 |= v87;
          if ( (char)v8 > -1 )
          {
            v4 = (unsigned int *)v126;
            v7 = (_DWORD *)(a1 + 8);
            *v126 = v2 + 1;
            v126[1] = -v14;
            v6 = v117;
LABEL_59:
            v35 = v6 & (*v128 + v32);
            v36 = HIDWORD(v30);
            v8 = v6 & (*v128 + HIDWORD(v30));
            v37 = v127 & (v31 + __CFADD__(*v128, v32) + v128[1]);
            v38 = *(_QWORD *)v128 + __PAIR64__(v30, v36);
            v39 = v127 & HIDWORD(v38);
            if ( __PAIR64__(v37, v35) < __PAIR64__(v127 & HIDWORD(v38), v8) )
            {
LABEL_60:
              *(_DWORD *)a1 = 2;
              *(_DWORD *)(a1 + 4) = 0;
              *(_BYTE *)(a1 + 8) = 48;
              *(_QWORD *)v4 = (unsigned int)aRustc9eb3afe9e;
              return (int)aRustc9eb3afe9e;
            }
LABEL_217:
            *(_QWORD *)a1 = 1;
            *v7 = v8;
            v7[1] = v39;
            v7[2] = v35;
            v7[3] = v37;
            return 1;
          }
          ++v14;
          HIDWORD(v2) += 7;
          v59 = v8;
          LODWORD(v2) = v84;
          if ( v14 == 1 )
          {
            LODWORD(v2) = v124;
            *v126 = v124;
            v126[1] = 0;
LABEL_213:
            HIDWORD(v2) = 0;
            LOBYTE(v41) = 19;
            v14 = 0;
            v7 = (_DWORD *)(a1 + 8);
            LOBYTE(v8) = v59;
LABEL_117:
            *(_DWORD *)a1 = 2;
            *(_DWORD *)(a1 + 4) = 0;
            v7[2] = v2;
            *(_QWORD *)v126 = (unsigned int)aRustc9eb3afe9e;
            v7[3] = v14;
            result = ((unsigned __int8)v8 << 8) | (HIDWORD(v2) << 16) | (unsigned __int8)v41;
            *v7 = result;
            v7[1] = v12;
            return result;
          }
        }
        HIDWORD(v68) = -v14;
        LODWORD(v68) = v2 + 1;
LABEL_132:
        *(_QWORD *)v126 = v68;
LABEL_209:
        LOBYTE(v41) = 6;
        HIDWORD(v2) = 0;
        goto LABEL_210;
      case 5:
        switch ( v8 )
        {
          case 1u:
            if ( HIDWORD(v2) == 1 )
              goto LABEL_118;
            HIDWORD(v2) -= 2;
            LODWORD(v2) = v12 + 2;
            *(_QWORD *)v4 = v2;
            v23 = *(unsigned __int8 *)(v12 + 1);
            goto LABEL_30;
          case 2u:
            if ( (unsigned int)v2 < 2 )
              goto LABEL_118;
            HIDWORD(v2) -= 3;
            LODWORD(v2) = v12 + 3;
            *(_QWORD *)v4 = v2;
            v23 = *(unsigned __int16 *)(v12 + 1);
            goto LABEL_30;
          case 4u:
            if ( (unsigned int)v2 < 4 )
            {
LABEL_118:
              HIDWORD(v2) = 0;
              *(_DWORD *)&v134[7] = v12 + 1;
              *(_DWORD *)&v134[11] = 0;
              LOBYTE(v41) = 19;
LABEL_127:
              LODWORD(v2) = *(_DWORD *)&v134[7];
              v14 = *(_DWORD *)&v134[11];
              goto LABEL_117;
            }
            HIDWORD(v2) -= 5;
            LODWORD(v2) = v12 + 5;
            *(_QWORD *)v4 = v2;
            v23 = *(_DWORD *)(v12 + 1);
LABEL_30:
            v28 = 0;
            v12 = v2;
            break;
          case 8u:
            if ( (unsigned int)v2 < 8 )
            {
              v137[7] = v12 + 1;
              LOBYTE(v8) = v137[0];
              *(_WORD *)&v134[8] = v16 >> 8;
              v134[10] = (v12 + 1) >> 24;
              v12 = *(__int64 *)v137 >> 24;
              HIDWORD(v2) = *(__int64 *)v137 >> 8;
              *(_DWORD *)&v134[11] = 0;
              LOBYTE(v41) = 19;
              v134[7] = v137[7];
              goto LABEL_127;
            }
            v23 = *(_DWORD *)v16;
            HIDWORD(v2) -= 9;
            v28 = *(_DWORD *)(v12 + 5);
            v12 += 9;
            *v4 = v12;
            v4[1] = HIDWORD(v2);
            break;
          default:
            LOBYTE(v41) = 23;
            HIDWORD(v2) = 0;
            goto LABEL_127;
        }
        *v128 = v23;
        v128[1] = v28;
        if ( !HIDWORD(v2) )
          goto LABEL_66;
        continue;
      case 6:
        LOBYTE(v41) = 23;
        v63 = 0;
        switch ( v8 )
        {
          case 1u:
            if ( HIDWORD(v2) == 1 )
              goto LABEL_176;
            v4[1] = HIDWORD(v2) - 2;
            v64 = (unsigned __int8 *)(v12 + 2);
            v8 = *(unsigned __int8 *)(v12 + 1);
            *v4 = v12 + 2;
            if ( HIDWORD(v2) == 2 )
              goto LABEL_190;
            HIDWORD(v65) = HIDWORD(v2) - 3;
            LODWORD(v65) = v12 + 3;
            *(_QWORD *)v4 = v65;
            v35 = *(unsigned __int8 *)(v12 + 2);
            goto LABEL_216;
          case 2u:
            if ( (unsigned int)v2 <= 1 )
              goto LABEL_176;
            v4[1] = HIDWORD(v2) - 3;
            v64 = (unsigned __int8 *)(v12 + 3);
            v8 = *(unsigned __int16 *)(v12 + 1);
            *v4 = v12 + 3;
            if ( (unsigned int)(HIDWORD(v2) - 3) < 2 )
              goto LABEL_190;
            HIDWORD(v90) = HIDWORD(v2) - 5;
            LODWORD(v90) = v12 + 5;
            *(_QWORD *)v4 = v90;
            v35 = *(unsigned __int16 *)(v12 + 3);
            goto LABEL_216;
          case 4u:
            if ( (unsigned int)v2 <= 3 )
            {
LABEL_176:
              v63 = 0;
              *(_DWORD *)&v134[11] = 0;
              LOBYTE(v41) = 19;
              *(_DWORD *)&v134[7] = v12 + 1;
              goto LABEL_187;
            }
            v4[1] = HIDWORD(v2) - 5;
            v64 = (unsigned __int8 *)(v12 + 5);
            v8 = *(_DWORD *)(v12 + 1);
            *v4 = v12 + 5;
            if ( (unsigned int)(HIDWORD(v2) - 5) < 4 )
            {
LABEL_190:
              HIDWORD(v2) = 0;
              v136 = (unsigned int)v64;
              goto LABEL_193;
            }
            HIDWORD(v98) = HIDWORD(v2) - 9;
            LODWORD(v98) = v12 + 9;
            *(_QWORD *)v4 = v98;
            v35 = *(_DWORD *)(v12 + 5);
LABEL_216:
            v37 = 0;
            v39 = 0;
            if ( (unsigned int)v35 >= (unsigned __int64)v8 )
              goto LABEL_217;
            goto LABEL_60;
          case 8u:
            if ( (unsigned int)v2 <= 7 )
            {
              v137[7] = v12 + 1;
              LOBYTE(v41) = 19;
              LOBYTE(v8) = v137[0];
              *(_WORD *)&v134[8] = v16 >> 8;
              v134[10] = (v12 + 1) >> 24;
              v12 = *(__int64 *)v137 >> 24;
              *(_DWORD *)&v134[11] = 0;
              v63 = *(__int64 *)v137 >> 8;
              v134[7] = v137[7];
LABEL_187:
              v2 = __PAIR64__(v63, *(unsigned int *)&v134[7]);
              v14 = *(_DWORD *)&v134[11];
              goto LABEL_117;
            }
            v8 = *(_DWORD *)v16;
            HIDWORD(v91) = HIDWORD(v2) - 9;
            v39 = *(_DWORD *)(v12 + 5);
            LODWORD(v91) = v12 + 9;
            *(_QWORD *)v4 = v91;
            if ( (unsigned int)(HIDWORD(v2) - 9) < 8 )
            {
              v137[7] = v12 + 9;
              *(_WORD *)((char *)&v136 + 1) = (unsigned int)v91 >> 8;
              LOBYTE(v8) = v137[0];
              HIBYTE(v136) = 0;
              v12 = *(__int64 *)v137 >> 24;
              HIDWORD(v2) = *(__int64 *)v137 >> 8;
              *(_DWORD *)((char *)&v136 + 3) = (v16 + 8) >> 24;
              LOBYTE(v136) = v137[7];
LABEL_193:
              LODWORD(v2) = v136;
              LOBYTE(v41) = 19;
              v14 = HIDWORD(v136);
              goto LABEL_117;
            }
            v35 = *(_DWORD *)v91;
            HIDWORD(v99) = HIDWORD(v2) - 17;
            v37 = *(_DWORD *)(v12 + 13);
            LODWORD(v99) = v12 + 17;
            *(_QWORD *)v4 = v99;
            if ( __PAIR64__(v37, v35) < __PAIR64__(v39, v8) )
              goto LABEL_60;
            break;
          default:
            goto LABEL_187;
        }
        goto LABEL_217;
      case 7:
        LOBYTE(v41) = 23;
        v66 = 0;
        switch ( v8 )
        {
          case 1u:
            if ( HIDWORD(v2) == 1 )
              goto LABEL_182;
            HIDWORD(v2) -= 2;
            LODWORD(v2) = v12 + 2;
            v39 = 0;
            *(_QWORD *)v4 = v2;
            v8 = *(unsigned __int8 *)(v12 + 1);
            goto LABEL_196;
          case 2u:
            if ( (unsigned int)v2 < 2 )
              goto LABEL_182;
            HIDWORD(v2) -= 3;
            LODWORD(v2) = v12 + 3;
            v39 = 0;
            *(_QWORD *)v4 = v2;
            v8 = *(unsigned __int16 *)(v12 + 1);
            goto LABEL_196;
          case 4u:
            if ( (unsigned int)v2 < 4 )
            {
LABEL_182:
              v66 = 0;
              LOBYTE(v41) = 19;
              *(_DWORD *)&v134[11] = 0;
              *(_DWORD *)&v134[7] = v12 + 1;
              goto LABEL_188;
            }
            HIDWORD(v2) -= 5;
            LODWORD(v2) = v12 + 5;
            v39 = 0;
            *(_QWORD *)v4 = v2;
            v8 = *(_DWORD *)(v12 + 1);
            goto LABEL_196;
          case 8u:
            if ( (unsigned int)v2 < 8 )
            {
              v137[7] = v12 + 1;
              LOBYTE(v41) = 19;
              LOBYTE(v8) = v137[0];
              *(_WORD *)&v134[8] = v16 >> 8;
              v134[10] = (v12 + 1) >> 24;
              v12 = *(__int64 *)v137 >> 24;
              v66 = *(__int64 *)v137 >> 8;
              *(_DWORD *)&v134[11] = 0;
              v134[7] = v137[7];
LABEL_188:
              v2 = __PAIR64__(v66, *(unsigned int *)&v134[7]);
              v14 = *(_DWORD *)&v134[11];
              goto LABEL_117;
            }
            v8 = *(_DWORD *)v16;
            HIDWORD(v2) -= 9;
            v39 = *(_DWORD *)(v12 + 5);
            LODWORD(v2) = v12 + 9;
            *(_QWORD *)v4 = v2;
LABEL_196:
            if ( !HIDWORD(v2) )
              goto LABEL_207;
            v92 = v2 + HIDWORD(v2);
            LODWORD(v93) = v2 + 1;
            HIDWORD(v93) = 1 - HIDWORD(v2);
            v12 = 0;
            v2 = 0;
            while ( 1 )
            {
              v16 = *(unsigned __int8 *)(v93 - 1);
              if ( (_DWORD)v2 == 63 && v16 >= 2 )
                break;
              v94 = v16 & 0x7F;
              v14 = (v2 & 0x3F) - 32;
              v95 = v94 << (v2 & 0x3F);
              if ( v14 >= 0 )
                v95 = 0;
              v12 |= v95;
              v96 = v94 >> (32 - (v2 & 0x3F));
              if ( (int)((v2 & 0x3F) - 32) >= 0 )
                v96 = v94 << v14;
              HIDWORD(v2) |= v96;
              if ( (char)v16 > -1 )
              {
                v4 = (unsigned int *)v126;
                v97 = -HIDWORD(v93);
                v7 = (_DWORD *)(a1 + 8);
                *(_QWORD *)v126 = v93;
                v37 = (__PAIR64__(HIDWORD(v2), v12) + __PAIR64__(v39, v8)) >> 32;
                v35 = v12 + v8;
                if ( __PAIR64__(HIDWORD(v2), v12) + __PAIR64__(v39, v8) < __PAIR64__(v39, v8) )
                  goto LABEL_60;
                goto LABEL_217;
              }
              v4 = (unsigned int *)v126;
              ++HIDWORD(v93);
              LODWORD(v93) = v93 + 1;
              LODWORD(v2) = v2 + 7;
              if ( HIDWORD(v93) == 1 )
              {
                LODWORD(v2) = v92;
                *v126 = v92;
                v126[1] = 0;
LABEL_207:
                HIDWORD(v2) = 0;
                LOBYTE(v41) = 19;
                v14 = 0;
                v7 = (_DWORD *)(a1 + 8);
                LOBYTE(v8) = v16;
                goto LABEL_117;
              }
            }
            HIDWORD(v93) = -HIDWORD(v93);
            *(_QWORD *)v4 = v93;
            break;
          default:
            goto LABEL_188;
        }
        goto LABEL_209;
      default:
        LOBYTE(v41) = 48;
        HIDWORD(v2) = 0;
        goto LABEL_117;
    }
  }
}
