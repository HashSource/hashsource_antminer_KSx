int __fastcall sub_1A6F0C(int a1, unsigned int *a2, unsigned int a3, int a4)
{
  char *v4; // r4
  int v5; // r8
  unsigned int i; // r1
  __int16 v8; // r0
  __int16 v9; // r6
  unsigned int v10; // r3
  char *v11; // r11
  char v12; // r7
  char v13; // r5
  unsigned int v14; // r3
  unsigned int v15; // r0
  unsigned int v16; // r1
  unsigned __int64 v17; // r8
  unsigned int v18; // r4
  unsigned int v19; // r7
  unsigned int v20; // r11
  int v21; // r6
  unsigned int v22; // r12
  unsigned int v23; // r5
  unsigned int v24; // r2
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r6
  unsigned int v28; // r5
  unsigned int v29; // r2
  unsigned int v30; // r0
  unsigned int v31; // r2
  int v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r0
  unsigned int v36; // r2
  unsigned int *v37; // r2
  int v38; // r6
  unsigned int v39; // r2
  unsigned int v40; // r3
  int v41; // r7
  unsigned int v42; // r0
  unsigned __int8 *v43; // r1
  unsigned __int8 *v44; // r1
  unsigned int v45; // t1
  unsigned int v46; // r2
  unsigned int v47; // t1
  unsigned int v48; // r2
  unsigned int v49; // r2
  unsigned int v50; // t1
  unsigned __int16 *v51; // r1
  unsigned int v52; // r2
  int result; // r0
  unsigned __int16 *v54; // r0
  unsigned int v55; // r1
  int v56; // r12
  unsigned int v57; // r1
  unsigned int v58; // r2
  unsigned int v59; // r2
  char v60; // r3
  unsigned int v61; // r2
  unsigned int v62; // r8
  unsigned int v63; // lr
  int v64; // r4
  unsigned int v65; // r12
  int v66; // r0
  unsigned int v67; // r7
  unsigned int v68; // r2
  unsigned int v69; // r6
  unsigned int v70; // r5
  unsigned int v71; // r2
  unsigned int v72; // t1
  int v73; // r2
  unsigned int v74; // r0
  char *v75; // r1
  char v76; // t1
  unsigned int v77; // r2
  int v78; // t1
  unsigned int v79; // r7
  unsigned int v80; // lr
  unsigned int v81; // r5
  unsigned int v82; // r8
  int v83; // r4
  int v84; // r3
  int v85; // r2
  bool v86; // zf
  unsigned int v87; // r6
  unsigned int v88; // r0
  unsigned int v89; // r2
  unsigned int v90; // r0
  unsigned int v91; // r1
  __int64 v92; // r8
  unsigned int v93; // r4
  unsigned int v94; // r7
  int v95; // r6
  unsigned int v96; // r12
  unsigned int v97; // r2
  unsigned int v98; // r5
  unsigned int v99; // r3
  unsigned int v100; // r0
  _BYTE *v101; // r2
  unsigned int v102; // r1
  unsigned int v103; // r2
  unsigned int v104; // r0
  unsigned int v105; // r2
  unsigned int v106; // r1
  int v107; // r6
  unsigned int v108; // r5
  unsigned int v109; // r2
  unsigned int v110; // r0
  unsigned int v111; // r2
  int v112; // r0
  unsigned int v113; // r2
  unsigned int v114; // r6
  unsigned int v115; // r5
  int v116; // r3
  unsigned int v117; // r1
  unsigned int *v118; // r1
  unsigned int v119; // r2
  unsigned int v120; // r2
  unsigned int v121; // r1
  int v122; // r6
  unsigned int v123; // r5
  unsigned int v124; // r2
  unsigned int v125; // r0
  unsigned int v126; // r1
  int v127; // r6
  unsigned int v128; // r5
  unsigned int v129; // r2
  unsigned int v130; // r0
  int v131; // r2
  char v132; // r7
  unsigned int v133; // r2
  unsigned int v134; // r0
  unsigned int v135; // r1
  int v136; // r2
  int v137; // r3
  unsigned int v138; // r0
  unsigned int v139; // r1
  int v140; // r2
  int v141; // r3
  int v142; // r0
  int v143; // r2
  unsigned int v144; // r3
  int v145; // r3
  int v146; // r0
  unsigned int v147; // t1
  unsigned int v148; // t1
  unsigned int v149; // r0
  __int16 v150; // r3
  int v151; // r7
  unsigned int v152; // r0
  char v153; // r1
  __int16 v154; // r2
  int v155; // r3
  char v156; // r7
  __int16 v157; // r3
  __int16 v158; // r1
  int v159; // r3
  int v160; // r7
  int v161; // r3
  int v162; // r3
  int v163; // r0
  int v164; // r3
  bool v165; // nf
  char v166; // r2
  int v167; // r0
  int v168; // r0
  unsigned int v169; // r0
  char v170; // r3
  __int16 v171; // r7
  unsigned int v172; // r0
  unsigned int v173; // t1
  __int16 v174; // r1
  int v175; // r2
  unsigned int v176; // r7
  unsigned int v177; // r6
  unsigned int v178; // r6
  unsigned int v179; // r0
  unsigned int v180; // t1
  unsigned int v181; // r0
  unsigned int v182; // r2
  unsigned int v183; // r3
  int v184; // r2
  int v185; // r1
  unsigned int v186; // t1
  int v187; // r1
  int v188; // r7
  int v189; // r6
  char v190; // r7
  __int16 v191; // r6
  int v192; // [sp+4h] [bp-38h]
  __int128 v195; // [sp+10h] [bp-2Ch] BYREF
  _BYTE v196[7]; // [sp+24h] [bp-18h]
  __int16 v197; // [sp+2Ch] [bp-10h]
  char v198; // [sp+2Eh] [bp-Eh]
  _BYTE v199[11]; // [sp+30h] [bp-Ch]

  v5 = *(unsigned __int16 *)(a4 + 10);
  v192 = a1 + 9;
  i = HIWORD(a3);
  v8 = *(_WORD *)(a4 + 10);
  while ( 2 )
  {
    v9 = v8;
    switch ( v8 )
    {
      case 1:
        switch ( (char)a3 )
        {
          case 1:
            v42 = a2[1];
            v43 = (unsigned __int8 *)*a2;
            if ( !v42 )
              goto LABEL_302;
            a2[1] = v42 - 1;
            v45 = *v43;
            v44 = v43 + 1;
            v20 = v45;
            goto LABEL_314;
          case 2:
            v179 = a2[1];
            v43 = (unsigned __int8 *)*a2;
            if ( v179 < 2 )
              goto LABEL_302;
            a2[1] = v179 - 2;
            v180 = *(unsigned __int16 *)v43;
            v44 = v43 + 2;
            v20 = v180;
            goto LABEL_314;
          case 4:
            v181 = a2[1];
            v43 = (unsigned __int8 *)*a2;
            if ( v181 < 4 )
            {
LABEL_302:
              *(_DWORD *)((char *)&v195 + 7) = v43;
              *(_DWORD *)((char *)&v195 + 11) = 0;
              goto LABEL_305;
            }
            a2[1] = v181 - 4;
            v186 = *(_DWORD *)v43;
            v44 = v43 + 4;
            v20 = v186;
LABEL_314:
            *a2 = (unsigned int)v44;
            i = 0;
            goto LABEL_316;
          case 8:
            v182 = *a2;
            v183 = a2[1];
            if ( v183 < 8 )
            {
              *(_DWORD *)&v199[7] = *a2;
              *(_QWORD *)&v195 = *(_QWORD *)v199;
              WORD4(v195) = v182 >> 8;
              *(_DWORD *)((char *)&v195 + 11) = 0;
              BYTE10(v195) = HIBYTE(v182);
LABEL_305:
              result = 19;
LABEL_306:
              *(_DWORD *)&v196[3] = *(_DWORD *)((char *)&v195 + 3);
              *(_DWORD *)v196 = v195;
              *(_QWORD *)(v192 + 7) = *(_QWORD *)((char *)&v195 + 7);
              v184 = *(_DWORD *)&v196[3];
              v185 = *(_DWORD *)v196;
              *(_DWORD *)a1 = 46;
              *(_DWORD *)(a1 + 12) = v184;
              *(_DWORD *)(a1 + 4) = 0;
              *(_DWORD *)(a1 + 9) = v185;
              *(_BYTE *)(a1 + 8) = result;
              return result;
            }
            v20 = *(_DWORD *)v182;
            i = *(_DWORD *)(v182 + 4);
            *a2 = v182 + 8;
            a2[1] = v183 - 8;
LABEL_316:
            v38 = a1;
            v39 = v20 & 0xFFFF0000;
            LOBYTE(v40) = BYTE1(v20);
            v41 = 0;
            break;
          default:
            LOBYTE(v195) = a3;
            result = 23;
            goto LABEL_306;
        }
        goto LABEL_204;
      case 2:
LABEL_212:
        *(_QWORD *)a1 = 46;
        *(_BYTE *)(a1 + 8) = 12;
        return 12;
      case 3:
        v46 = a2[1];
        v20 = *a2;
        if ( v46 < 2 )
          goto LABEL_80;
        v47 = *(unsigned __int16 *)v20;
        v20 += 2;
        i = v47;
        v48 = v46 - 2;
        goto LABEL_79;
      case 4:
        v49 = a2[1];
        v20 = *a2;
        if ( v49 < 4 )
          goto LABEL_80;
        v50 = *(_DWORD *)v20;
        v20 += 4;
        i = v50;
        v48 = v49 - 4;
        goto LABEL_79;
      case 5:
        v51 = (unsigned __int16 *)*a2;
        v52 = a2[1];
        if ( v52 < 2 )
        {
          *(_QWORD *)a1 = 46;
          *(_DWORD *)(a1 + 16) = v51;
          *(_DWORD *)(a1 + 20) = 0;
          *(_BYTE *)(a1 + 8) = 19;
          return 19;
        }
        v148 = *v51;
        i = (unsigned int)(v51 + 1);
        LOBYTE(v20) = v148;
        v149 = v52 - 2;
        *a2 = i;
        v39 = 0;
        a2[1] = v149;
        v41 = 3;
        v40 = v148 >> 8;
        goto LABEL_203;
      case 6:
        if ( (a3 & 0xFF00) == 0x400 && gimli::read::unit::allow_section_offset(*(unsigned __int16 *)(a4 + 8), i) )
        {
          v54 = (unsigned __int16 *)*a2;
          v55 = a2[1];
          if ( v55 <= 3 )
          {
            *(_QWORD *)(a1 + 16) = (unsigned int)v54;
            *(_DWORD *)a1 = 46;
            *(_DWORD *)(a1 + 4) = 0;
            *(_BYTE *)(a1 + 8) = 19;
            return 19;
          }
          v41 = 10;
        }
        else
        {
          v54 = (unsigned __int16 *)*a2;
          v55 = a2[1];
          if ( v55 < 4 )
          {
LABEL_216:
            *(_QWORD *)(v192 + 7) = (unsigned int)v54;
            *(_QWORD *)a1 = 46;
            *(_BYTE *)(a1 + 8) = 19;
            return 19;
          }
          v41 = 4;
        }
        i = v55 - 4;
        a2[1] = i;
        *a2 = (unsigned int)(v54 + 2);
        v20 = *(_DWORD *)v54;
        LOBYTE(v40) = BYTE1(*(_DWORD *)v54);
        v39 = *(_DWORD *)v54 & 0xFFFF0000;
        goto LABEL_203;
      case 7:
        if ( (a3 & 0xFF00) == 0x800 && gimli::read::unit::allow_section_offset(*(unsigned __int16 *)(a4 + 8), i) )
        {
          v57 = *a2;
          v58 = a2[1];
          if ( v58 < 8 )
          {
            *(_DWORD *)((char *)&v195 + 7) = *a2;
            result = v195;
            *(_WORD *)v199 = v57 >> 8;
            v199[2] = BYTE10(v195);
            v56 = (__int64)v195 >> 24;
            v59 = HIBYTE(DWORD1(v195));
            v60 = 19;
LABEL_322:
            v190 = v199[2];
            v191 = *(_WORD *)v199;
            *(_BYTE *)(v192 + 2) = BYTE2(result);
            *(_WORD *)v192 = result;
            v196[2] = v190;
            *(_WORD *)v196 = v191;
            *(_QWORD *)a1 = 46;
            *(_BYTE *)(a1 + 19) = v190;
            *(_WORD *)(a1 + 17) = v191;
            *(_BYTE *)(a1 + 8) = v60;
            *(_DWORD *)(a1 + 20) = 0;
            *(_BYTE *)(a1 + 16) = v59;
            *(_DWORD *)(a1 + 12) = v56;
            return result;
          }
          result = *(_DWORD *)(v57 + 4);
          v59 = v58 - 8;
          v20 = *(_DWORD *)v57;
          i = v57 + 8;
          *a2 = i;
          a2[1] = v59;
          if ( result )
          {
            v60 = 53;
            goto LABEL_322;
          }
          v41 = 10;
        }
        else
        {
          v120 = *a2;
          v144 = a2[1];
          if ( v144 < 8 )
          {
LABEL_218:
            *(_DWORD *)&v199[7] = v120;
            *(_QWORD *)&v195 = *(_QWORD *)v199;
            WORD4(v195) = v120 >> 8;
            BYTE10(v195) = HIBYTE(v120);
            *(_DWORD *)v196 = *(_DWORD *)v199;
            *(_DWORD *)&v196[3] = *(_QWORD *)v199 >> 24;
            *(_DWORD *)(v192 + 7) = *(_DWORD *)((char *)&v195 + 7);
            *(_DWORD *)(v192 + 11) = 0;
            v145 = *(_DWORD *)&v196[3];
            v146 = *(_DWORD *)v196;
            *(_DWORD *)a1 = 46;
            *(_DWORD *)(a1 + 12) = v145;
            *(_DWORD *)(a1 + 4) = 0;
            *(_DWORD *)(a1 + 9) = v146;
            *(_BYTE *)(a1 + 8) = 19;
            return 19;
          }
          v20 = *(_DWORD *)v120;
          i = *(_DWORD *)(v120 + 4);
          *a2 = v120 + 8;
          a2[1] = v144 - 8;
          v41 = 5;
        }
        v38 = a1;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = BYTE1(v20);
        goto LABEL_204;
      case 8:
        v61 = a2[1];
        v20 = *a2;
        if ( !v61 )
          goto LABEL_156;
        for ( i = 0; i != v61; ++i )
        {
          if ( !*(_BYTE *)(v20 + i) )
          {
            *a2 = v20 + i + 1;
            a2[1] = ~i + v61;
            v39 = v20 & 0xFFFF0000;
            LOBYTE(v40) = BYTE1(v20);
            v41 = 31;
            goto LABEL_203;
          }
        }
LABEL_156:
        v73 = a1;
        *(_QWORD *)a1 = 46;
        *(_DWORD *)(a1 + 12) = v20;
LABEL_157:
        *(_DWORD *)(v73 + 16) = v20;
        *(_DWORD *)(v73 + 20) = 0;
        *(_BYTE *)(v73 + 8) = 19;
        return 19;
      case 9:
        v62 = *a2;
        v63 = a2[1];
        v64 = 0;
        if ( !v63 )
          goto LABEL_220;
        v65 = v62 + v63;
        v40 = 0;
        i = 0;
        v64 = 0;
        v66 = 0;
        while ( 2 )
        {
          v67 = *(unsigned __int8 *)(v62 - v40);
          if ( v66 == 63 && v67 >= 2 )
          {
LABEL_246:
            a2[1] = v63 + v40 - 1;
            result = 6;
            *a2 = v62 - v40 + 1;
            v64 = 0;
LABEL_247:
            LOBYTE(v67) = 0;
LABEL_289:
            v116 = a1;
LABEL_290:
            *(_DWORD *)v116 = 46;
            *(_DWORD *)(v116 + 16) = v65;
            *(_DWORD *)(v116 + 4) = 0;
            *(_DWORD *)(v116 + 20) = v64;
            *(_BYTE *)(v116 + 9) = v67;
            *(_BYTE *)(v116 + 8) = result;
            return result;
          }
          v68 = v67 & 0x7F;
          v69 = v68 << (v66 & 0x3F);
          if ( (v66 & 0x3F) - 32 >= 0 )
            v69 = 0;
          i |= v69;
          v70 = v68 >> (32 - (v66 & 0x3F));
          if ( (v66 & 0x3F) - 32 >= 0 )
            v70 = v68 << ((v66 & 0x3F) - 32);
          v64 |= v70;
          if ( (char)v67 <= -1 )
          {
            --v40;
            v66 += 7;
            if ( -v63 == v40 )
            {
LABEL_151:
              v116 = a1;
              v64 = 0;
              *a2 = v65;
              a2[1] = 0;
LABEL_221:
              result = 19;
              goto LABEL_290;
            }
            continue;
          }
          break;
        }
        v176 = v62 - v40;
        v177 = v63 + v40 - 1;
        v20 = v62 - v40 + 1;
        *a2 = v20;
        a2[1] = v177;
        if ( v64 )
        {
LABEL_288:
          result = 53;
          LOBYTE(v67) = 0;
          v65 = i;
          goto LABEL_289;
        }
        if ( v177 < i )
        {
LABEL_318:
          v65 = v176 + 1;
          result = 19;
          v64 = 0;
          goto LABEL_247;
        }
        v142 = v63 - i + v40 - 1;
        v143 = v62 + i - v40 + 1;
LABEL_214:
        *a2 = v143;
        a2[1] = v142;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = BYTE1(v20);
        v41 = 1;
LABEL_203:
        v38 = a1;
LABEL_204:
        *(_DWORD *)v38 = v41;
        *(_DWORD *)(v38 + 4) = 0;
        *(_WORD *)(v38 + 16) = *(_WORD *)(a4 + 8);
        *(_DWORD *)(v38 + 12) = i;
        result = (unsigned __int8)v20 | ((unsigned __int8)v40 << 8) | v39;
        *(_DWORD *)(v38 + 8) = result;
        return result;
      case 10:
        v71 = a2[1];
        v20 = *a2;
        if ( !v71 )
          goto LABEL_80;
        v72 = *(unsigned __int8 *)v20++;
        i = v72;
        v48 = v71 - 1;
LABEL_79:
        *a2 = v20;
        a2[1] = v48;
        if ( v48 < i )
        {
LABEL_80:
          v73 = a1;
          *(_QWORD *)a1 = 46;
          goto LABEL_157;
        }
        v142 = v48 - i;
        v143 = v20 + i;
        goto LABEL_214;
      case 11:
        v74 = a2[1];
        v75 = (char *)*a2;
        if ( !v74 )
          goto LABEL_219;
        a2[1] = v74 - 1;
        v76 = *v75;
        i = (unsigned int)(v75 + 1);
        LOBYTE(v20) = v76;
        LOBYTE(v40) = 0;
        *a2 = i;
        v41 = 2;
        goto LABEL_202;
      case 12:
        v75 = (char *)*a2;
        v77 = a2[1];
        if ( !v77 )
        {
LABEL_219:
          *(_QWORD *)a1 = 46;
          *(_DWORD *)(a1 + 20) = 0;
          *(_DWORD *)(a1 + 16) = v75;
          *(_BYTE *)(a1 + 8) = 19;
          return 19;
        }
        v78 = (unsigned __int8)*v75;
        i = (unsigned int)(v75 + 1);
        LOBYTE(v20) = v78;
        *a2 = i;
        LOBYTE(v40) = 0;
        a2[1] = v77 - 1;
        if ( v78 )
          LOBYTE(v20) = 1;
        v41 = 9;
LABEL_202:
        v39 = 0;
        goto LABEL_203;
      case 13:
        v79 = *a2;
        v80 = a2[1];
        v81 = 0;
        if ( v80 )
        {
          v82 = v79 + v80;
          v83 = 0;
          v20 = 0;
          i = 0;
          v84 = 0;
          while ( 1 )
          {
            v85 = *(unsigned __int8 *)(v79 - v83);
            if ( v84 == 63 )
            {
              v86 = v85 == 0;
              if ( *(_BYTE *)(v79 - v83) )
                v86 = v85 == 127;
              if ( !v86 )
                break;
            }
            v87 = v85 & 0x7F;
            v81 = v87 << (v84 & 0x3F);
            if ( (v84 & 0x3F) - 32 >= 0 )
              v81 = 0;
            v20 |= v81;
            v88 = v87 >> (32 - (v84 & 0x3F));
            if ( (v84 & 0x3F) - 32 >= 0 )
              v88 = v87 << ((v84 & 0x3F) - 32);
            i |= v88;
            if ( (char)v85 > -1 )
            {
              v162 = v84 + 7;
              *a2 = v79 - v83 + 1;
              a2[1] = v80 + v83 - 1;
              if ( v162 > 63 )
              {
                v38 = a1;
              }
              else
              {
                v38 = a1;
                if ( (v85 & 0x40) != 0 )
                {
                  v163 = v162 & 0x3F;
                  v164 = -1;
                  v166 = v163 - 32;
                  v165 = v163 - 32 < 0;
                  v167 = -1 << v163;
                  if ( !v165 )
                  {
                    v164 = -1 << v166;
                    v167 = 0;
                  }
                  i |= v164;
                  v20 |= v167;
                }
              }
              LOBYTE(v40) = BYTE1(v20);
              v39 = v20 & 0xFFFF0000;
              v41 = 6;
              goto LABEL_204;
            }
            --v83;
            v84 += 7;
            if ( -v80 == v83 )
            {
              v188 = a1;
              v189 = v192;
              v81 = 0;
              *a2 = v82;
              a2[1] = 0;
              goto LABEL_255;
            }
          }
          v187 = v79 - v83;
          v188 = a1;
          v189 = v192;
          LOBYTE(v85) = 0;
          a2[1] = v80 + v83 - 1;
          result = 7;
          *a2 = v187 + 1;
        }
        else
        {
          v82 = *a2;
          LOBYTE(v85) = 0;
          v188 = a1;
          v189 = v192;
LABEL_255:
          *(_WORD *)&v199[4] = WORD2(v195);
          result = 19;
          *(_DWORD *)v199 = v195;
        }
        v158 = *(_WORD *)&v199[4];
        v159 = *(_DWORD *)v199;
        *(_DWORD *)(v189 + 7) = v82;
        *(_DWORD *)(v189 + 11) = v81;
        *(_WORD *)&v196[4] = v158;
        *(_DWORD *)v196 = v159;
        *(_QWORD *)v188 = 46;
        *(_WORD *)(v188 + 14) = v158;
        *(_DWORD *)(v188 + 10) = v159;
        *(_BYTE *)(v188 + 9) = v85;
        *(_BYTE *)(v188 + 8) = result;
        return result;
      case 14:
        if ( BYTE1(a3) != 8 )
        {
          i = a2[1];
          v37 = (unsigned int *)*a2;
          if ( i < 4 )
            goto LABEL_235;
          v20 = *v37;
          *a2 = (unsigned int)(v37 + 1);
          a2[1] = i - 4;
          goto LABEL_269;
        }
        i = *a2;
        v89 = a2[1];
        if ( v89 < 8 )
          goto LABEL_103;
        v168 = *(_DWORD *)(i + 4);
        v20 = *(_DWORD *)i;
        *a2 = i + 8;
        a2[1] = v89 - 8;
        i = 53;
        if ( !v168 )
        {
LABEL_269:
          LOBYTE(v40) = BYTE1(v20);
          v39 = v20 & 0xFFFF0000;
          v41 = 26;
          goto LABEL_203;
        }
        goto LABEL_104;
      case 15:
        v90 = *a2;
        v91 = a2[1];
        HIDWORD(v92) = 0;
        if ( v91 )
        {
          LODWORD(v92) = v90 + v91;
          v93 = 1 - v91;
          v94 = v90 + 1;
          v20 = 0;
          i = 0;
          v95 = 0;
          while ( 1 )
          {
            v96 = *(unsigned __int8 *)(v94 - 1);
            if ( v95 == 63 && v96 >= 2 )
              break;
            v97 = v96 & 0x7F;
            v98 = v97 << (v95 & 0x3F);
            if ( (v95 & 0x3F) - 32 >= 0 )
              v98 = 0;
            v20 |= v98;
            v99 = v97 >> (32 - (v95 & 0x3F));
            if ( (v95 & 0x3F) - 32 >= 0 )
              v99 = v97 << ((v95 & 0x3F) - 32);
            i |= v99;
            if ( (char)v96 > -1 )
            {
              *a2 = v94;
              v39 = v20 & 0xFFFF0000;
              a2[1] = -v93;
              LOBYTE(v40) = BYTE1(v20);
              v41 = 7;
              goto LABEL_203;
            }
            ++v93;
            ++v94;
            v95 += 7;
            if ( v93 == 1 )
            {
              *a2 = v92;
              a2[1] = 0;
              goto LABEL_258;
            }
          }
          *a2 = v94;
          v160 = a1;
          LOBYTE(v96) = 0;
          v161 = v192;
          a2[1] = -v93;
          result = 6;
        }
        else
        {
          LOBYTE(v96) = 0;
          LODWORD(v92) = *a2;
LABEL_258:
          *(_WORD *)&v199[4] = WORD2(v195);
          result = 19;
          v160 = a1;
          v161 = v192;
          *(_DWORD *)v199 = v195;
        }
        v174 = *(_WORD *)&v199[4];
        v175 = *(_DWORD *)v199;
        *(_QWORD *)(v161 + 7) = v92;
        *(_DWORD *)v160 = 46;
        *(_WORD *)&v196[4] = v174;
        *(_DWORD *)v196 = v175;
        *(_DWORD *)(v160 + 4) = 0;
        *(_WORD *)(v160 + 14) = v174;
        *(_DWORD *)(v160 + 10) = v175;
        *(_BYTE *)(v160 + 9) = v96;
        *(_BYTE *)(v160 + 8) = result;
        return result;
      case 16:
        if ( i == 2 )
          sub_1A9D9C(&v195, a2);
        else
          sub_1A9CBC(&v195, a2, a3 >> 8);
        result = (unsigned __int8)v195;
        if ( (unsigned __int8)v195 == 75 )
        {
          LOBYTE(v20) = BYTE4(v195);
          v38 = a1;
          v41 = 14;
          LOBYTE(v40) = BYTE5(v195);
          v39 = DWORD1(v195) & 0xFFFF0000;
          goto LABEL_204;
        }
        v153 = BYTE3(v195);
        *(_QWORD *)(v192 + 7) = *((_QWORD *)&v195 + 1);
        v154 = *(_WORD *)((char *)&v195 + 1);
        v155 = DWORD1(v195);
        *(_BYTE *)(a1 + 11) = v153;
        v199[2] = v153;
        *(_WORD *)v199 = v154;
        *(_QWORD *)a1 = 46;
        *(_WORD *)(a1 + 9) = v154;
        *(_DWORD *)(a1 + 12) = v155;
        *(_BYTE *)(a1 + 8) = result;
        return result;
      case 17:
        v100 = a2[1];
        v101 = (_BYTE *)*a2;
        if ( !v100 )
          goto LABEL_210;
        a2[1] = v100 - 1;
        LOBYTE(v20) = *v101;
        LOBYTE(v40) = 0;
        *a2 = (unsigned int)(v101 + 1);
        v41 = 13;
        goto LABEL_202;
      case 18:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 2 )
          goto LABEL_210;
        v20 = *(unsigned __int16 *)v101;
        *a2 = (unsigned int)(v101 + 2);
        v39 = 0;
        a2[1] = i - 2;
        v41 = 13;
        v40 = v20 >> 8;
        goto LABEL_203;
      case 19:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 4 )
          goto LABEL_210;
        v20 = *(_DWORD *)v101;
        *a2 = (unsigned int)(v101 + 4);
        a2[1] = i - 4;
        goto LABEL_286;
      case 20:
        v102 = *a2;
        v103 = a2[1];
        if ( v103 < 8 )
          goto LABEL_191;
        v104 = *(_DWORD *)(v102 + 4);
        v105 = v103 - 8;
        v20 = *(_DWORD *)v102;
        i = v102 + 8;
        *a2 = i;
        a2[1] = v105;
        if ( v104 )
          goto LABEL_243;
        goto LABEL_286;
      case 21:
        v15 = *a2;
        v106 = a2[1];
        HIDWORD(v17) = 0;
        if ( !v106 )
          goto LABEL_187;
        LODWORD(v17) = v15 + v106;
        v18 = 1 - v106;
        v19 = v15 + 1;
        v20 = 0;
        i = 0;
        v107 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(v19 - 1);
          if ( v107 == 63 && v22 >= 2 )
            goto LABEL_189;
          v108 = v22 & 0x7F;
          v109 = v108 << (v107 & 0x3F);
          if ( (v107 & 0x3F) - 32 >= 0 )
            v109 = 0;
          v20 |= v109;
          v110 = v108 >> (32 - (v107 & 0x3F));
          if ( (v107 & 0x3F) - 32 >= 0 )
            v110 = v108 << ((v107 & 0x3F) - 32);
          i |= v110;
          if ( (char)v22 > -1 )
            break;
          ++v18;
          ++v19;
          v107 += 7;
          if ( v18 == 1 )
            goto LABEL_186;
        }
        *a2 = v19;
        a2[1] = -v18;
        if ( !i )
        {
LABEL_286:
          LOBYTE(v40) = BYTE1(v20);
          v39 = v20 & 0xFFFF0000;
          v41 = 13;
          goto LABEL_203;
        }
        goto LABEL_295;
      case 22:
        v10 = a2[1];
        v11 = (char *)*a2;
        if ( !v10 )
        {
          result = 19;
LABEL_308:
          *(_DWORD *)a1 = 46;
          *(_DWORD *)(a1 + 4) = 0;
          *(_DWORD *)(a1 + 16) = v11;
          *(_DWORD *)(a1 + 20) = 0;
          *(_WORD *)(a1 + 10) = v9;
          *(_BYTE *)(a1 + 8) = result;
          return result;
        }
        v4 = v11 + 1;
        v12 = *v11;
        v8 = *v11 & 0x7F;
        *a2 = (unsigned int)(v11 + 1);
        a2[1] = v10 - 1;
        if ( v12 <= -1 )
        {
          if ( v10 == 1 )
            goto LABEL_245;
          v13 = v11[1];
          v4 = v11 + 2;
          *a2 = (unsigned int)(v11 + 2);
          a2[1] = v10 - 2;
          v8 |= (v13 & 0x7F) << 7;
          if ( v13 <= -1 )
          {
            if ( v10 == 2 )
            {
LABEL_245:
              result = 19;
              v11 = v4;
              goto LABEL_308;
            }
            v4 = v11 + 3;
            *a2 = (unsigned int)(v11 + 3);
            a2[1] = v10 - 3;
            v14 = (unsigned __int8)v11[2];
            if ( v14 > 3 )
            {
              result = 6;
              goto LABEL_308;
            }
            v8 |= (_WORD)v14 << 14;
          }
        }
        continue;
      case 23:
        if ( BYTE1(a3) == 8 )
        {
          v33 = *a2;
          v111 = a2[1];
          if ( v111 < 8 )
          {
LABEL_140:
            *(_DWORD *)((char *)&v195 + 7) = v33;
            *(_WORD *)&v199[8] = v33 >> 8;
            v199[10] = HIBYTE(v33);
            *(_QWORD *)v199 = v195;
            i = *(_DWORD *)&v199[7];
            v36 = (__int64)v195 >> 24;
            result = 19;
            goto LABEL_272;
          }
          v169 = *(_DWORD *)(v33 + 4);
          v36 = v111 - 8;
          v20 = *(_DWORD *)v33;
          i = v33 + 8;
          *a2 = i;
          a2[1] = v36;
          if ( v169 )
          {
LABEL_271:
            result = 53;
LABEL_272:
            v170 = v199[2];
            v171 = *(_WORD *)v199;
            *(_BYTE *)(a1 + 11) = v199[2];
            v196[2] = v170;
            *(_WORD *)v196 = v171;
            *(_QWORD *)a1 = 46;
            *(_WORD *)(a1 + 9) = v171;
            *(_DWORD *)(a1 + 12) = v36;
            *(_DWORD *)(a1 + 16) = i;
            *(_DWORD *)(a1 + 20) = 0;
            *(_BYTE *)(a1 + 8) = result;
            return result;
          }
        }
        else
        {
          i = *a2;
          v36 = a2[1];
          if ( v36 < 4 )
          {
LABEL_232:
            result = 19;
            goto LABEL_272;
          }
          v173 = *(_DWORD *)i;
          i += 4;
          v20 = v173;
          *a2 = i;
          a2[1] = v36 - 4;
        }
        LOBYTE(v40) = BYTE1(v20);
        v39 = v20 & 0xFFFF0000;
        v41 = 10;
        goto LABEL_203;
      case 24:
        v62 = *a2;
        v63 = a2[1];
        v64 = 0;
        if ( !v63 )
        {
LABEL_220:
          LOBYTE(v67) = 0;
          v65 = v62;
          v116 = a1;
          goto LABEL_221;
        }
        v65 = v62 + v63;
        v40 = 0;
        i = 0;
        v64 = 0;
        v112 = 0;
        while ( 2 )
        {
          v67 = *(unsigned __int8 *)(v62 - v40);
          if ( v112 == 63 && v67 >= 2 )
            goto LABEL_246;
          v113 = v67 & 0x7F;
          v114 = v113 << (v112 & 0x3F);
          if ( (v112 & 0x3F) - 32 >= 0 )
            v114 = 0;
          i |= v114;
          v115 = v113 >> (32 - (v112 & 0x3F));
          if ( (v112 & 0x3F) - 32 >= 0 )
            v115 = v113 << ((v112 & 0x3F) - 32);
          v64 |= v115;
          if ( (char)v67 <= -1 )
          {
            --v40;
            v112 += 7;
            if ( -v63 == v40 )
              goto LABEL_151;
            continue;
          }
          break;
        }
        v176 = v62 - v40;
        v178 = v63 + v40 - 1;
        v20 = v62 - v40 + 1;
        *a2 = v20;
        a2[1] = v178;
        if ( v64 )
          goto LABEL_288;
        if ( v178 < i )
          goto LABEL_318;
        *a2 = v62 + i - v40 + 1;
        a2[1] = v63 - i + v40 - 1;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = (unsigned __int16)(v62 - v40 + 1) >> 8;
        v41 = 8;
        goto LABEL_203;
      case 25:
        LOBYTE(v40) = 0;
        v41 = 9;
        LOBYTE(v20) = 1;
        goto LABEL_202;
      case 26:
LABEL_22:
        v15 = *a2;
        v26 = a2[1];
        HIDWORD(v17) = 0;
        if ( !v26 )
          goto LABEL_187;
        LODWORD(v17) = v15 + v26;
        v18 = 1 - v26;
        v19 = v15 + 1;
        v20 = 0;
        i = 0;
        v27 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(v19 - 1);
          if ( v27 == 63 && v22 >= 2 )
            goto LABEL_189;
          v28 = v22 & 0x7F;
          v29 = v28 << (v27 & 0x3F);
          if ( (v27 & 0x3F) - 32 >= 0 )
            v29 = 0;
          v20 |= v29;
          v30 = v28 >> (32 - (v27 & 0x3F));
          if ( (v27 & 0x3F) - 32 >= 0 )
            v30 = v28 << ((v27 & 0x3F) - 32);
          i |= v30;
          if ( (char)v22 > -1 )
            break;
          ++v18;
          ++v19;
          v27 += 7;
          if ( v18 == 1 )
            goto LABEL_186;
        }
        *a2 = v19;
        a2[1] = -v18;
        if ( !i )
        {
LABEL_252:
          v39 = v20 & 0xFFFF0000;
LABEL_253:
          LOBYTE(v40) = BYTE1(v20);
          v41 = 29;
          goto LABEL_203;
        }
        goto LABEL_295;
      case 27:
LABEL_11:
        v15 = *a2;
        v16 = a2[1];
        HIDWORD(v17) = 0;
        if ( !v16 )
          goto LABEL_187;
        LODWORD(v17) = v15 + v16;
        v18 = 1 - v16;
        v19 = v15 + 1;
        v20 = 0;
        i = 0;
        v21 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(v19 - 1);
          if ( v21 == 63 && v22 >= 2 )
            goto LABEL_189;
          v23 = v22 & 0x7F;
          v24 = v23 << (v21 & 0x3F);
          if ( (v21 & 0x3F) - 32 >= 0 )
            v24 = 0;
          v20 |= v24;
          v25 = v23 >> (32 - (v21 & 0x3F));
          if ( (v21 & 0x3F) - 32 >= 0 )
            v25 = v23 << ((v21 & 0x3F) - 32);
          i |= v25;
          if ( (char)v22 > -1 )
            break;
          ++v18;
          ++v19;
          v21 += 7;
          if ( v18 == 1 )
            goto LABEL_186;
        }
        *a2 = v19;
        a2[1] = -v18;
        if ( !i )
        {
LABEL_249:
          v39 = v20 & 0xFFFF0000;
LABEL_250:
          LOBYTE(v40) = BYTE1(v20);
          v41 = 12;
          goto LABEL_203;
        }
        goto LABEL_295;
      case 28:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 4 )
          goto LABEL_210;
        v20 = *(_DWORD *)v101;
        *a2 = (unsigned int)(v101 + 4);
        a2[1] = i - 4;
        goto LABEL_240;
      case 29:
LABEL_33:
        if ( BYTE1(a3) == 8 )
        {
          i = *a2;
          v31 = a2[1];
          if ( v31 < 8 )
          {
LABEL_103:
            *(_DWORD *)((char *)&v195 + 7) = i;
            *(_QWORD *)v199 = v195;
            LOBYTE(i) = 19;
            *(_WORD *)&v199[8] = WORD4(v195);
            v199[10] = BYTE10(v195);
LABEL_104:
            v37 = *(unsigned int **)&v199[7];
LABEL_236:
            v38 = a1;
LABEL_237:
            result = v199[2];
            v150 = *(_WORD *)v199;
            v151 = *(_DWORD *)&v199[3];
            *(_BYTE *)(v38 + 11) = v199[2];
            v196[2] = result;
            *(_WORD *)v196 = v150;
            *(_QWORD *)v38 = 46;
            *(_WORD *)(v38 + 9) = v150;
            *(_DWORD *)(v38 + 12) = v151;
            *(_DWORD *)(v38 + 16) = v37;
            *(_DWORD *)(v38 + 20) = 0;
            *(_BYTE *)(v38 + 8) = i;
            return result;
          }
          v32 = *(_DWORD *)(i + 4);
          v20 = *(_DWORD *)i;
          *a2 = i + 8;
          a2[1] = v31 - 8;
          i = 53;
          if ( v32 )
            goto LABEL_104;
        }
        else
        {
          i = a2[1];
          v37 = (unsigned int *)*a2;
          if ( i < 4 )
            goto LABEL_235;
          v20 = *v37;
          *a2 = (unsigned int)(v37 + 1);
          a2[1] = i - 4;
        }
        v38 = a1;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = BYTE1(v20);
        v41 = 27;
        goto LABEL_204;
      case 30:
        v117 = a2[1];
        v20 = *a2;
        if ( v117 < 0x10 )
          goto LABEL_156;
        *a2 = v20 + 16;
        a2[1] = v117 - 16;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = BYTE1(v20);
        v41 = 1;
        i = 16;
        goto LABEL_203;
      case 31:
        if ( BYTE1(a3) == 8 )
        {
          v118 = (unsigned int *)*a2;
          v119 = a2[1];
          if ( v119 < 8 )
          {
            v38 = a1;
            *(_DWORD *)((char *)&v195 + 7) = *a2;
            *(_QWORD *)v199 = v195;
            LOBYTE(i) = 19;
            *(_WORD *)&v199[8] = WORD4(v195);
            v199[10] = BYTE10(v195);
LABEL_274:
            v37 = *(unsigned int **)&v199[7];
            goto LABEL_237;
          }
          v172 = v118[1];
          v20 = *v118;
          v38 = a1;
          *a2 = (unsigned int)(v118 + 2);
          a2[1] = v119 - 8;
          i = 53;
          if ( v172 )
            goto LABEL_274;
        }
        else
        {
          i = a2[1];
          v37 = (unsigned int *)*a2;
          if ( i < 4 )
          {
LABEL_235:
            LOBYTE(i) = 19;
            goto LABEL_236;
          }
          v20 = *v37;
          v38 = a1;
          *a2 = (unsigned int)(v37 + 1);
          a2[1] = i - 4;
        }
        LOBYTE(v40) = BYTE1(v20);
        v39 = v20 & 0xFFFF0000;
        v41 = 30;
        goto LABEL_204;
      case 32:
        v120 = *a2;
        v40 = a2[1];
        if ( v40 < 8 )
          goto LABEL_218;
        v20 = *(_DWORD *)v120;
        i = *(_DWORD *)(v120 + 4);
        *a2 = v120 + 8;
        a2[1] = v40 - 8;
        v39 = v20 & 0xFFFF0000;
        LOBYTE(v40) = BYTE1(v20);
        v41 = 25;
        goto LABEL_203;
      case 33:
        if ( v5 == 33 )
        {
          v41 = 6;
          v20 = *(_DWORD *)a4;
          i = *(_DWORD *)(a4 + 4);
          LOBYTE(v40) = BYTE1(*(_DWORD *)a4);
          v39 = *(_DWORD *)a4 & 0xFFFF0000;
          goto LABEL_203;
        }
        *(_QWORD *)a1 = 46;
        *(_BYTE *)(a1 + 8) = 70;
        return 70;
      case 34:
        v15 = *a2;
        v121 = a2[1];
        HIDWORD(v17) = 0;
        if ( !v121 )
          goto LABEL_187;
        LODWORD(v17) = v15 + v121;
        v18 = 1 - v121;
        v19 = v15 + 1;
        v20 = 0;
        i = 0;
        v122 = 0;
        while ( 1 )
        {
          v22 = *(unsigned __int8 *)(v19 - 1);
          if ( v122 == 63 && v22 >= 2 )
          {
LABEL_189:
            *a2 = v19;
            v132 = 6;
            LOBYTE(v22) = 0;
            a2[1] = -v18;
            goto LABEL_296;
          }
          v123 = v22 & 0x7F;
          v124 = v123 << (v122 & 0x3F);
          if ( (v122 & 0x3F) - 32 >= 0 )
            v124 = 0;
          v20 |= v124;
          v125 = v123 >> (32 - (v122 & 0x3F));
          if ( (v122 & 0x3F) - 32 >= 0 )
            v125 = v123 << ((v122 & 0x3F) - 32);
          i |= v125;
          if ( (char)v22 > -1 )
            break;
          ++v18;
          ++v19;
          v122 += 7;
          if ( v18 == 1 )
          {
LABEL_186:
            *a2 = v17;
            a2[1] = 0;
LABEL_188:
            v131 = a1;
            v132 = 19;
            goto LABEL_297;
          }
        }
        *a2 = v19;
        a2[1] = -v18;
        if ( !i )
        {
          LOBYTE(v40) = BYTE1(v20);
          v39 = v20 & 0xFFFF0000;
          v41 = 19;
          goto LABEL_203;
        }
LABEL_295:
        v132 = 53;
        LOBYTE(v22) = 0;
        v17 = __PAIR64__(i, v20);
LABEL_296:
        v131 = a1;
LABEL_297:
        *(_BYTE *)(v131 + 9) = v22;
        *(_QWORD *)v131 = 46;
        *(_BYTE *)(v131 + 8) = v132;
        *(_QWORD *)(v192 + 7) = v17;
        return 46;
      case 35:
        v15 = *a2;
        v126 = a2[1];
        HIDWORD(v17) = 0;
        if ( !v126 )
        {
LABEL_187:
          LOBYTE(v22) = 0;
          LODWORD(v17) = v15;
          goto LABEL_188;
        }
        LODWORD(v17) = v15 + v126;
        v18 = 1 - v126;
        v19 = v15 + 1;
        v20 = 0;
        i = 0;
        v127 = 0;
        while ( 2 )
        {
          v22 = *(unsigned __int8 *)(v19 - 1);
          if ( v127 == 63 && v22 >= 2 )
            goto LABEL_189;
          v128 = v22 & 0x7F;
          v129 = v128 << (v127 & 0x3F);
          if ( (v127 & 0x3F) - 32 >= 0 )
            v129 = 0;
          v20 |= v129;
          v130 = v128 >> (32 - (v127 & 0x3F));
          if ( (v127 & 0x3F) - 32 >= 0 )
            v130 = v128 << ((v127 & 0x3F) - 32);
          i |= v130;
          if ( (char)v22 <= -1 )
          {
            ++v18;
            ++v19;
            v127 += 7;
            if ( v18 == 1 )
              goto LABEL_186;
            continue;
          }
          break;
        }
        *a2 = v19;
        a2[1] = -v18;
        if ( i )
          goto LABEL_295;
        v40 = v20 >> 8;
        v39 = v20 & 0xFFFF0000;
        v41 = 24;
        goto LABEL_203;
      case 36:
        v102 = *a2;
        v133 = a2[1];
        if ( v133 >= 8 )
        {
          v152 = *(_DWORD *)(v102 + 4);
          v105 = v133 - 8;
          v20 = *(_DWORD *)v102;
          i = v102 + 8;
          *a2 = i;
          a2[1] = v105;
          if ( !v152 )
          {
LABEL_240:
            LOBYTE(v40) = BYTE1(v20);
            v39 = v20 & 0xFFFF0000;
            v41 = 15;
            goto LABEL_203;
          }
LABEL_243:
          result = 53;
        }
        else
        {
LABEL_191:
          *(_DWORD *)&v199[7] = v102;
          WORD4(v195) = v102 >> 8;
          i = 0;
          DWORD1(v195) = *(_DWORD *)&v199[4];
          BYTE10(v195) = v199[10];
          v4 = *(char **)((char *)&v195 + 7);
          LODWORD(v195) = *(_DWORD *)v199;
          *(_WORD *)v196 = *(_WORD *)v199;
          v105 = *(__int64 *)v199 >> 24;
          result = 19;
          *(_DWORD *)((char *)&v195 + 11) = 0;
          v196[2] = v199[2];
        }
        v156 = v196[2];
        *(_DWORD *)(v192 + 7) = v4;
        v157 = *(_WORD *)v196;
        *(_DWORD *)(v192 + 11) = i;
        *(_DWORD *)a1 = 46;
        *(_BYTE *)(a1 + 11) = v156;
        v197 = v157;
        v198 = v156;
        *(_DWORD *)(a1 + 4) = 0;
        *(_WORD *)(a1 + 9) = v157;
        *(_DWORD *)(a1 + 12) = v105;
        *(_BYTE *)(a1 + 8) = result;
        return result;
      case 37:
        v134 = a2[1];
        v101 = (_BYTE *)*a2;
        if ( !v134 )
          goto LABEL_210;
        a2[1] = v134 - 1;
        LOBYTE(v20) = *v101;
        LOBYTE(v40) = 0;
        *a2 = (unsigned int)(v101 + 1);
        v41 = 29;
        goto LABEL_202;
      case 38:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 2 )
          goto LABEL_210;
        v20 = *(unsigned __int16 *)v101;
        *a2 = (unsigned int)(v101 + 2);
        v39 = 0;
        a2[1] = i - 2;
        v41 = 29;
        v40 = v20 >> 8;
        goto LABEL_203;
      case 39:
        v54 = (unsigned __int16 *)*a2;
        v135 = a2[1];
        if ( v135 < 3 )
          goto LABEL_216;
        v136 = *((unsigned __int8 *)v54 + 2);
        i = v135 - 3;
        v137 = *v54;
        *a2 = (unsigned int)v54 + 3;
        a2[1] = i;
        v20 = v137 | (v136 << 16);
        v39 = v20 & 0xFF0000;
        goto LABEL_253;
      case 40:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 4 )
          goto LABEL_210;
        v20 = *(_DWORD *)v101;
        *a2 = (unsigned int)(v101 + 4);
        a2[1] = i - 4;
        goto LABEL_252;
      case 41:
        v138 = a2[1];
        v101 = (_BYTE *)*a2;
        if ( !v138 )
          goto LABEL_210;
        a2[1] = v138 - 1;
        LOBYTE(v20) = *v101;
        LOBYTE(v40) = 0;
        *a2 = (unsigned int)(v101 + 1);
        v41 = 12;
        goto LABEL_202;
      case 42:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 2 )
          goto LABEL_210;
        v20 = *(unsigned __int16 *)v101;
        *a2 = (unsigned int)(v101 + 2);
        v39 = 0;
        a2[1] = i - 2;
        v41 = 12;
        v40 = v20 >> 8;
        goto LABEL_203;
      case 43:
        v54 = (unsigned __int16 *)*a2;
        v139 = a2[1];
        if ( v139 < 3 )
          goto LABEL_216;
        v140 = *((unsigned __int8 *)v54 + 2);
        i = v139 - 3;
        v141 = *v54;
        *a2 = (unsigned int)v54 + 3;
        a2[1] = i;
        v20 = v141 | (v140 << 16);
        v39 = v20 & 0xFF0000;
        goto LABEL_250;
      case 44:
        i = a2[1];
        v101 = (_BYTE *)*a2;
        if ( i < 4 )
        {
LABEL_210:
          *(_DWORD *)a1 = 46;
          *(_DWORD *)(a1 + 4) = 0;
          *(_QWORD *)(a1 + 16) = (unsigned int)v101;
          *(_BYTE *)(a1 + 8) = 19;
          return 19;
        }
        v20 = *(_DWORD *)v101;
        *a2 = (unsigned int)(v101 + 4);
        a2[1] = i - 4;
        goto LABEL_249;
      default:
        switch ( v8 )
        {
          case 7937:
            goto LABEL_11;
          case 7938:
            goto LABEL_22;
          case 7968:
            if ( BYTE1(a3) == 8 )
            {
              v33 = *a2;
              v34 = a2[1];
              if ( v34 < 8 )
                goto LABEL_140;
              v35 = *(_DWORD *)(v33 + 4);
              v36 = v34 - 8;
              v20 = *(_DWORD *)v33;
              i = v33 + 8;
              *a2 = i;
              a2[1] = v36;
              if ( v35 )
                goto LABEL_271;
            }
            else
            {
              i = *a2;
              v36 = a2[1];
              if ( v36 < 4 )
                goto LABEL_232;
              v147 = *(_DWORD *)i;
              i += 4;
              v20 = v147;
              *a2 = i;
              a2[1] = v36 - 4;
            }
            v38 = a1;
            v39 = v20 & 0xFFFF0000;
            LOBYTE(v40) = BYTE1(v20);
            v41 = 15;
            goto LABEL_204;
          case 7969:
            goto LABEL_33;
          default:
            goto LABEL_212;
        }
    }
  }
}
