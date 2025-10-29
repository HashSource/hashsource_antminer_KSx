int __fastcall sub_1C96A0(int a1, int *a2, int a3, int a4, int a5, unsigned int *a6, unsigned int *a7, int a8)
{
  int v8; // r4
  int v9; // r8
  int v11; // r10
  int v12; // r5
  int v13; // r1
  int v14; // r11
  int v15; // r0
  int v16; // r1
  int result; // r0
  int v18; // r1
  int v19; // r6
  __int64 v20; // r2
  int v21; // r1
  int v22; // r1
  int v23; // r0
  int v24; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r1
  _DWORD *v28; // r9
  int v29; // r10
  int v30; // r5
  int v31; // r8
  __int64 v32; // r0
  int v33; // r0
  int v34; // r0
  unsigned int v35; // r3
  unsigned int v36; // r6
  unsigned int v37; // r2
  unsigned int v38; // r4
  __int64 v39; // r0
  bool v40; // zf
  __int64 v41; // r0
  int v42; // r4
  int v43; // r0
  __int64 v44; // r0
  int v45; // r4
  int v46; // r0
  __int64 v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r1
  int v50; // r1
  int v51; // r1
  __int64 v52; // r0
  __int64 v53; // r0
  int v54; // r6
  unsigned int v55; // r1
  unsigned int v56; // r2
  unsigned int v57; // r0
  unsigned int v58; // r3
  int v59; // r2
  unsigned int v60; // r3
  unsigned int v61; // r6
  unsigned int v62; // r3
  int v63; // r1
  unsigned int *v64; // r4
  unsigned int v65; // r6
  unsigned int v66; // r0
  unsigned int v67; // r1
  _DWORD *v68; // r1
  unsigned int *v69; // r3
  unsigned int v70; // r0
  unsigned int v71; // r11
  unsigned int *v72; // r2
  unsigned int *v73; // r6
  unsigned int v74; // r1
  unsigned int v75; // r6
  unsigned int v76; // lr
  unsigned int v77; // r12
  unsigned int v78; // r3
  __int64 v79; // r8
  int v80; // r5
  unsigned __int64 v81; // r0
  unsigned int v82; // r6
  unsigned int *v83; // r5
  unsigned int v84; // r0
  int v85; // r2
  int v86; // r1
  unsigned int v87; // r0
  int v88; // r4
  unsigned __int64 v89; // r8
  __int64 v90; // r10
  int v91; // r1
  int v92; // r1
  unsigned int v93; // r0
  int v94; // r2
  int v95; // r1
  _DWORD *v96; // r0
  int v97; // r1
  unsigned int v98; // r0
  int v99; // r2
  int v100; // r1
  unsigned int v101; // r0
  int v102; // r1
  int v103; // r2
  int v104; // r3
  char v105; // r1
  __int64 v106; // r2
  int v107; // r7
  int v108; // r1
  __int64 v109; // r2
  int v110; // r7
  int v111; // r7
  int v112; // r12
  unsigned int v113; // r5
  unsigned int v114; // [sp+18h] [bp-114h]
  unsigned int v115; // [sp+1Ch] [bp-110h]
  unsigned int v116; // [sp+20h] [bp-10Ch]
  unsigned int v117; // [sp+24h] [bp-108h]
  int v118; // [sp+28h] [bp-104h]
  __int64 *v119; // [sp+4Ch] [bp-E0h]
  unsigned int v120; // [sp+50h] [bp-DCh]
  int v121; // [sp+58h] [bp-D4h]
  int v122; // [sp+60h] [bp-CCh]
  int v123; // [sp+68h] [bp-C4h]
  unsigned int v125; // [sp+74h] [bp-B8h]
  unsigned int v126; // [sp+78h] [bp-B4h]
  unsigned int v128; // [sp+80h] [bp-ACh]
  int v129; // [sp+84h] [bp-A8h]
  int v130; // [sp+88h] [bp-A4h]
  int v131; // [sp+8Ch] [bp-A0h]
  int v132; // [sp+90h] [bp-9Ch]
  int v133; // [sp+94h] [bp-98h]
  int v135; // [sp+9Ch] [bp-90h]
  int v136; // [sp+A0h] [bp-8Ch]
  int v137; // [sp+A8h] [bp-84h]
  __int128 v138; // [sp+B0h] [bp-7Ch] BYREF
  __int128 v139; // [sp+C0h] [bp-6Ch] BYREF
  __int16 v140; // [sp+D4h] [bp-58h]
  char v141; // [sp+D6h] [bp-56h]
  int v142; // [sp+D8h] [bp-54h]
  _DWORD v143[3]; // [sp+DCh] [bp-50h]
  _BYTE v144[24]; // [sp+E8h] [bp-44h] BYREF
  unsigned int v145; // [sp+100h] [bp-2Ch]
  unsigned int v146; // [sp+104h] [bp-28h]
  int v147; // [sp+108h] [bp-24h]
  unsigned __int64 v148; // [sp+110h] [bp-1Ch] BYREF
  __int64 v149; // [sp+118h] [bp-14h]
  unsigned __int64 v150; // [sp+120h] [bp-Ch]

  v8 = a2[2];
  v9 = a1;
  if ( v8 <= a3 )
  {
LABEL_133:
    *(_BYTE *)v9 = 75;
    return 75;
  }
  v11 = a3;
  v119 = (__int64 *)(a4 + 80);
  v12 = 4;
  v13 = a2[3];
  if ( *(_BYTE *)(v13 + 41) == 8 )
    v12 = 12;
  v14 = *(_DWORD *)(v13 + 32) + *a2 + v12 - (*(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 16));
  while ( 1 )
  {
    sub_1BE468((int)v144, a2);
    result = v144[0];
    if ( v144[0] != 75 )
    {
      v105 = v144[3];
      v106 = *(_QWORD *)&v144[4];
      v107 = *(_DWORD *)&v144[12];
      *(_WORD *)(v9 + 1) = *(_WORD *)&v144[1];
      *(_BYTE *)(v9 + 3) = v105;
      *(_QWORD *)(v9 + 4) = v106;
      *(_DWORD *)(v9 + 12) = v107;
      *(_BYTE *)v9 = result;
      return result;
    }
    if ( !*(_DWORD *)&v144[4] )
      goto LABEL_6;
    v22 = *(unsigned __int16 *)(*(_DWORD *)&v144[4] + 96);
    if ( v22 != 29 )
    {
      v23 = *(_DWORD *)&v144[4] + 8;
      if ( v22 == 46 )
      {
LABEL_13:
        v24 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v23);
        sub_1BD738((int)v144, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v24, v25);
        result = v144[0];
        if ( v144[0] == 75 )
        {
          while ( 1 )
          {
            if ( a2[2] <= v8 )
              goto LABEL_6;
            sub_1BE468((int)v144, a2);
            result = v144[0];
            if ( v144[0] != 75 )
              break;
            if ( *(_DWORD *)&v144[4] )
            {
              v23 = *(_DWORD *)&v144[4] + 8;
              goto LABEL_13;
            }
          }
          v102 = *(_DWORD *)&v144[12];
          v103 = *(_DWORD *)&v144[8];
          v104 = *(_DWORD *)&v144[4];
          LOWORD(v148) = *(_WORD *)&v144[1];
          BYTE2(v148) = v144[3];
        }
        else
        {
          v102 = *(_DWORD *)&v144[12];
          v103 = *(_DWORD *)&v144[8];
          v104 = *(_DWORD *)&v144[4];
          BYTE2(v148) = v144[3];
          LOWORD(v148) = *(_WORD *)&v144[1];
        }
        *(_BYTE *)(v9 + 3) = BYTE2(v148);
        *(_WORD *)(v9 + 1) = v148;
        *(_DWORD *)(v9 + 12) = v102;
        *(_DWORD *)(v9 + 8) = v103;
        *(_DWORD *)(v9 + 4) = v104;
        *(_BYTE *)v9 = result;
        return result;
      }
      v15 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v23);
      sub_1BD738((int)v144, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v15, v16);
      result = v144[0];
      if ( v144[0] != 75 )
      {
        v108 = *(_DWORD *)&v144[1];
        v109 = *(_QWORD *)&v144[5];
        v110 = *(_DWORD *)&v144[12];
        goto LABEL_142;
      }
      goto LABEL_6;
    }
    v123 = v8;
    v26 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(*(_DWORD *)&v144[4] + 8);
    if ( v27 )
      break;
    v29 = a4;
    v121 = 0;
    v122 = 0;
    v133 = 0;
    v132 = 0;
    v131 = 0;
    v130 = 0;
    v129 = 0;
    v136 = 0;
    v31 = 0;
    v135 = 0;
LABEL_92:
    v64 = a6;
    v65 = a6[2];
    v66 = v65;
    if ( v65 == *a6 )
    {
      sub_1BA034(a6, a6[2]);
      v66 = a6[2];
    }
    v67 = a6[1];
    *(_DWORD *)(v67 + 32 * v66) = v31;
    v68 = (_DWORD *)(v67 + 32 * v66);
    v68[1] = v137;
    v68[2] = v136;
    v68[3] = v135;
    v68[5] = v129;
    v68[4] = v14;
    v68[6] = v130;
    a6[2] = v66 + 1;
    v69 = *(unsigned int **)(a5 + 28);
    if ( v131 == 1 )
    {
      v70 = *(_DWORD *)(v29 + 40);
      v71 = v65;
      v72 = v69 + 8;
      v73 = v69 + 9;
      v74 = HIWORD(v70);
      if ( HIWORD(v70) < 5u )
      {
        v73 = v69 + 7;
        v72 = v69 + 6;
      }
      v75 = *v73;
      v76 = *v72;
      if ( v75 < v120 )
      {
        v112 = v70 << 16;
        LOBYTE(v111) = 0;
        result = 19;
        v113 = 0;
        goto LABEL_140;
      }
      v77 = v69[12];
      v78 = v69[13];
      v79 = *v119;
      *(_DWORD *)&v144[8] = *(_DWORD *)(v29 + 40);
      *(_DWORD *)&v144[4] = v75 - v120;
      *(_DWORD *)v144 = v76 + v120;
      *(_DWORD *)&v144[12] = v74 > 4;
      v80 = *(_DWORD *)(v29 + 268);
      *(_QWORD *)&v144[16] = v79;
      v147 = v80;
      v146 = v78;
      v145 = v77;
      sub_1BF1D0((int)&v148, (unsigned __int8 **)v144);
      v81 = v148;
      v82 = v71;
      v83 = a7;
      if ( v148 == 2 )
      {
LABEL_99:
        v64 = a6;
        result = (unsigned __int8)v149;
        if ( (unsigned __int8)v149 != 75 )
        {
          v111 = v149 >> 8;
          v112 = v149 >> 16;
          v76 = v150;
          v74 = HIWORD(HIDWORD(v149));
          v113 = HIDWORD(v150);
LABEL_140:
          v9 = a1;
          *(_DWORD *)((char *)&v138 + 2) = v112;
          WORD3(v138) = v74;
          *((_QWORD *)&v138 + 1) = __PAIR64__(v113, v76);
          BYTE1(v138) = v111;
          LOBYTE(v138) = result;
          goto LABEL_141;
        }
      }
      else
      {
        while ( v81 == 1 )
        {
          v88 = v29;
          v89 = v150;
          v90 = v149;
          if ( v149 < v150 )
          {
            v91 = a7[2];
            if ( v91 == *a7 )
            {
              sub_1BA194(a7, v91);
              v91 = a7[2];
            }
            v84 = a7[1];
            v85 = v91 + 1;
            v86 = 3 * v91;
            a7[2] = v85;
            *(_DWORD *)(v84 + 8 * v86) = v90;
            v87 = v84 + 8 * v86;
            *(_DWORD *)(v87 + 4) = HIDWORD(v90);
            *(_QWORD *)(v87 + 8) = v89;
            *(_DWORD *)(v87 + 16) = a8;
            *(_DWORD *)(v87 + 20) = v82;
          }
          sub_1BF1D0((int)&v148, (unsigned __int8 **)v144);
          v81 = v148;
          v29 = v88;
          if ( v148 == 2 )
            goto LABEL_99;
        }
        v64 = a6;
      }
    }
    else
    {
      v83 = a7;
      if ( !(v133 ^ 1 | v132) )
      {
        if ( v122 == 1 )
        {
          if ( __PAIR64__(v125, v126) < __PAIR64__(v116, v117) )
          {
            v92 = a7[2];
            if ( v92 == *a7 )
            {
              sub_1BA194(a7, v92);
              v92 = a7[2];
            }
            v93 = a7[1];
            v94 = v92 + 1;
            v95 = 3 * v92;
            a7[2] = v94;
            *(_DWORD *)(v93 + 8 * v95) = v126;
            v96 = (_DWORD *)(v93 + 8 * v95);
            v96[1] = v125;
            v96[2] = v117;
            v96[3] = v116;
            v96[4] = a8;
            v96[5] = v65;
          }
        }
        else if ( v121 == 1 && __PAIR64__(v125, v126) < __PAIR64__(v114, v115) + __PAIR64__(v125, v126) )
        {
          v97 = a7[2];
          if ( v97 == *a7 )
          {
            sub_1BA194(a7, v97);
            v97 = a7[2];
          }
          v98 = a7[1];
          v99 = v97 + 1;
          v100 = 3 * v97;
          a7[2] = v99;
          *(_DWORD *)(v98 + 8 * v100) = v126;
          v101 = v98 + 8 * v100;
          *(_DWORD *)(v101 + 20) = v65;
          *(_DWORD *)(v101 + 4) = v125;
          *(_QWORD *)(v101 + 8) = __PAIR64__(v114, v115) + __PAIR64__(v125, v126);
          *(_DWORD *)(v101 + 16) = a8;
        }
      }
    }
    sub_1C96A0(&v138, a2, v123, v29, a5, v64, v83, a8 + 1);
LABEL_121:
    v9 = a1;
    v11 = a3;
    result = (unsigned __int8)v138;
    if ( (unsigned __int8)v138 != 75 )
      goto LABEL_141;
LABEL_6:
    v18 = a2[3];
    v8 = a2[2];
    v19 = *(_DWORD *)(v18 + 32);
    v20 = *(_QWORD *)(v18 + 16);
    v40 = *(_BYTE *)(v18 + 41) == 8;
    v21 = 4;
    if ( v40 )
      v21 = 12;
    v14 = v19 + *a2 + v21 - (HIDWORD(v20) + v20);
    if ( v8 <= v11 )
      goto LABEL_133;
  }
  v28 = (_DWORD *)v26;
  v29 = a4;
  v30 = 16 * v27;
  v136 = 0;
  v135 = 0;
  v129 = 0;
  v130 = 0;
  v31 = 0;
  v131 = 0;
  v133 = 0;
  v132 = 0;
  v122 = 0;
  v121 = 0;
  while ( 2 )
  {
    v35 = v28[1];
    v36 = v28[2];
    v37 = *(_DWORD *)(a2[3] + 40);
    v38 = v28[3];
    LODWORD(v139) = *v28;
    *(_QWORD *)((char *)&v139 + 4) = __PAIR64__(v36, v35);
    v148 = __PAIR64__(v35, v139);
    v149 = __PAIR64__(v38, v36);
    HIDWORD(v139) = v38;
    sub_1BBD9C((int)v144, (unsigned int *)a2, v37, (int)&v148);
    if ( *(_QWORD *)v144 == 46 )
    {
      v138 = *(_OWORD *)&v144[8];
      goto LABEL_121;
    }
    switch ( *(_WORD *)&v144[16] )
    {
      case 3:
        if ( !v31 )
        {
          HIDWORD(v44) = v144;
          v45 = *(_DWORD *)(a5 + 28);
          LODWORD(v44) = &v148;
          sub_1BDDDC(v44);
          sub_1BE898((int)&v139, (_DWORD *)(v45 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v148);
          v31 = DWORD1(v139);
          if ( (unsigned __int8)v139 != 75 )
            v31 = 0;
          v46 = v118;
          if ( (unsigned __int8)v139 == 75 )
            v46 = DWORD2(v139);
          v118 = v46;
          v137 = v46;
        }
        goto LABEL_25;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x56:
        goto LABEL_25;
      case 0x11:
        LODWORD(v47) = &v148;
        HIDWORD(v47) = v144;
        sub_1BDDDC(v47);
        v48 = v125;
        if ( !v148 )
          v48 = HIDWORD(v149);
        v125 = v48;
        v49 = v126;
        if ( !v148 )
          v49 = v149;
        v126 = v49;
        v50 = v133;
        if ( !v148 )
          v50 = 1;
        v133 = v50;
        v51 = v132;
        if ( !v148 )
          v51 = 0;
        v132 = v51;
        goto LABEL_25;
      case 0x12:
        LODWORD(v52) = &v148;
        HIDWORD(v52) = v144;
        sub_1BDDDC(v52);
        if ( (v148 & 0x3F) != 0 )
        {
          if ( (_DWORD)v148 == 7 )
          {
            v114 = HIDWORD(v149);
            v115 = v149;
            v121 = 1;
          }
        }
        else
        {
          v116 = HIDWORD(v149);
          v117 = v149;
          v122 = 1;
        }
        goto LABEL_25;
      case 0x31:
      case 0x47:
        if ( v31 )
          goto LABEL_25;
        LODWORD(v39) = &v148;
        HIDWORD(v39) = v144;
        sub_1BDDDC(v39);
        sub_1CA520(&v139);
        if ( (unsigned __int8)v139 != 75 )
        {
          v138 = v139;
          goto LABEL_121;
        }
        v137 = DWORD2(v139);
        v31 = DWORD1(v139);
LABEL_25:
        v28 += 4;
        v30 -= 16;
        if ( !v30 )
          goto LABEL_92;
        continue;
      case 0x55:
        HIDWORD(v53) = v144;
        v54 = *(_DWORD *)(a5 + 28);
        LODWORD(v53) = &v148;
        sub_1BDDDC(v53);
        v55 = v149;
        if ( (v148 & 0x3F) != 0x18 )
        {
          v131 = 0;
          v56 = v128;
          if ( (_DWORD)v148 == 22 )
          {
            v56 = v149;
            if ( *(unsigned __int16 *)(a4 + 42) < 5u )
              v56 = v149 + *(_DWORD *)(a4 + 276);
            if ( !*(_BYTE *)(v54 + 116) )
              v56 = v149;
            v131 = 1;
          }
          v128 = v56;
          v120 = v56;
          goto LABEL_25;
        }
        v57 = *(_DWORD *)(a4 + 276);
        v58 = *(_DWORD *)(v54 + 36);
        v128 = *(_DWORD *)(v54 + 32);
        if ( v58 < v57 )
          goto LABEL_126;
        v59 = *(_DWORD *)(a4 + 40);
        v55 = v149 * BYTE1(v59);
        if ( !is_mul_ok(v149, BYTE1(v59)) )
        {
          LOBYTE(result) = 53;
          goto LABEL_131;
        }
        v60 = v58 - v57;
        if ( v60 >= v55 )
        {
          v61 = v128 + v57 + v55;
          v62 = v60 - v55;
          v55 = *(_DWORD *)(a4 + 40) & 0xFF00;
          v128 = v61;
          if ( v55 == 2048 )
          {
            if ( v62 < 8 )
            {
              *(_DWORD *)((char *)&v139 + 7) = v61;
              LOWORD(v143[1]) = v61 >> 8;
              BYTE2(v143[1]) = HIBYTE(v61);
              v143[0] = DWORD1(v139);
              v128 = *(_DWORD *)((char *)v143 + 3);
              v55 = (__int64)v139 >> 24;
              LOBYTE(result) = 19;
              v142 = v139;
            }
            else
            {
              v55 = *(_DWORD *)(v61 + 4);
              if ( !v55 )
              {
                v63 = *(_DWORD *)v61;
LABEL_78:
                v131 = 1;
                v120 = v63 + v57;
                v128 = v63 + v57;
                goto LABEL_25;
              }
              LOBYTE(result) = 53;
            }
          }
          else
          {
            if ( v62 >= 4 )
            {
              v63 = *(_DWORD *)v61;
              goto LABEL_78;
            }
            LOBYTE(result) = 19;
          }
          v141 = BYTE2(v142);
          v140 = v142;
          goto LABEL_131;
        }
        v128 += v57;
LABEL_126:
        LOBYTE(result) = 19;
LABEL_131:
        *(_WORD *)((char *)&v138 + 1) = v140;
        v9 = a1;
        v11 = a3;
        BYTE3(v138) = v141;
        *((_QWORD *)&v138 + 1) = v128;
        DWORD1(v138) = v55;
        LOBYTE(v138) = result;
        result = (unsigned __int8)result;
        if ( (unsigned __int8)result == 75 )
          goto LABEL_6;
LABEL_141:
        v109 = *(_QWORD *)((char *)&v138 + 5);
        v108 = *(_DWORD *)((char *)&v138 + 1);
        v110 = HIDWORD(v138);
LABEL_142:
        *(_DWORD *)(v9 + 12) = v110;
        *(_QWORD *)(v9 + 5) = v109;
        *(_DWORD *)(v9 + 1) = v108;
        *(_BYTE *)v9 = result;
        return result;
      case 0x57:
        switch ( v144[0] & 0x3F )
        {
          case 2:
            v130 = v144[8];
            break;
          case 3:
            v130 = *(unsigned __int16 *)&v144[8];
            break;
          case 4:
            v130 = *(_DWORD *)&v144[8];
            break;
          case 5:
          case 7:
            v130 = *(_DWORD *)&v144[8];
            break;
          case 6:
            if ( *(int *)&v144[12] < 0 )
              goto LABEL_84;
            v130 = *(_DWORD *)&v144[8];
            break;
          default:
LABEL_84:
            v130 = 0;
            break;
        }
        goto LABEL_25;
      case 0x58:
        LODWORD(v32) = &v148;
        HIDWORD(v32) = v144;
        sub_1BDDDC(v32);
        v33 = v135;
        if ( v148 == 44 )
          v33 = HIDWORD(v149);
        v135 = v33;
        v34 = v136;
        if ( v148 == 44 )
          v34 = v149;
        v136 = v34;
        goto LABEL_25;
      case 0x59:
        switch ( v144[0] & 0x3F )
        {
          case 2:
            v129 = v144[8];
            break;
          case 3:
            v129 = *(unsigned __int16 *)&v144[8];
            break;
          case 4:
            v129 = *(_DWORD *)&v144[8];
            break;
          case 5:
          case 7:
            v129 = *(_DWORD *)&v144[8];
            break;
          case 6:
            if ( *(int *)&v144[12] < 0 )
              goto LABEL_90;
            v129 = *(_DWORD *)&v144[8];
            break;
          default:
LABEL_90:
            v129 = 0;
            break;
        }
        goto LABEL_25;
      default:
        v40 = *(unsigned __int16 *)&v144[16] == 110;
        if ( *(unsigned __int16 *)&v144[16] != 110 )
          v40 = *(unsigned __int16 *)&v144[16] == 8199;
        if ( v40 )
        {
          HIDWORD(v41) = v144;
          v42 = *(_DWORD *)(a5 + 28);
          LODWORD(v41) = &v148;
          sub_1BDDDC(v41);
          sub_1BE898((int)&v139, (_DWORD *)(v42 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v148);
          v43 = v137;
          if ( (unsigned __int8)v139 == 75 )
          {
            v43 = DWORD2(v139);
            v31 = DWORD1(v139);
          }
          v137 = v43;
        }
        goto LABEL_25;
    }
  }
}
