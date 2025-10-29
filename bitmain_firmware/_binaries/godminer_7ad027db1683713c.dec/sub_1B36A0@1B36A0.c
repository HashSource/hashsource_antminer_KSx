int __fastcall sub_1B36A0(int a1, int *a2, int a3, int a4, int *a5, unsigned int *a6, unsigned int *a7, int a8)
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
  int v40; // r1
  bool v41; // zf
  __int64 v42; // r0
  int v43; // r4
  int v44; // r0
  __int64 v45; // r0
  int v46; // r4
  int v47; // r0
  __int64 v48; // r0
  unsigned int v49; // r1
  unsigned int v50; // r1
  int v51; // r1
  int v52; // r1
  __int64 v53; // r0
  __int64 v54; // r0
  int v55; // r6
  unsigned int v56; // r1
  unsigned int v57; // r2
  unsigned int v58; // r0
  unsigned int v59; // r3
  int v60; // r2
  unsigned int v61; // r3
  unsigned int v62; // r6
  unsigned int v63; // r3
  int v64; // r1
  unsigned int *v65; // r4
  unsigned int v66; // r6
  unsigned int v67; // r0
  unsigned int v68; // r1
  _DWORD *v69; // r1
  int v70; // r3
  unsigned int v71; // r0
  unsigned int v72; // r11
  unsigned int *v73; // r2
  unsigned int *v74; // r6
  unsigned int v75; // r1
  unsigned int v76; // r6
  unsigned int v77; // lr
  int v78; // r12
  int v79; // r3
  __int64 v80; // r8
  int v81; // r5
  unsigned __int64 v82; // r0
  unsigned int v83; // r6
  unsigned int *v84; // r5
  unsigned int v85; // r0
  unsigned int v86; // r2
  int v87; // r1
  unsigned int v88; // r0
  int v89; // r4
  unsigned __int64 v90; // r8
  __int64 v91; // r10
  int v92; // r1
  int v93; // r1
  unsigned int v94; // r0
  unsigned int v95; // r2
  int v96; // r1
  _DWORD *v97; // r0
  int v98; // r1
  unsigned int v99; // r0
  unsigned int v100; // r2
  int v101; // r1
  unsigned int v102; // r0
  int v103; // r1
  int v104; // r2
  int v105; // r3
  char v106; // r1
  __int64 v107; // r2
  int v108; // r7
  int v109; // r1
  __int64 v110; // r2
  int v111; // r7
  int v112; // r7
  int v113; // r12
  unsigned int v114; // r5
  unsigned int v115; // [sp+18h] [bp-114h]
  unsigned int v116; // [sp+1Ch] [bp-110h]
  unsigned int v117; // [sp+20h] [bp-10Ch]
  unsigned int v118; // [sp+24h] [bp-108h]
  int v119; // [sp+28h] [bp-104h]
  __int64 *v120; // [sp+4Ch] [bp-E0h]
  unsigned int v121; // [sp+50h] [bp-DCh]
  int v122; // [sp+58h] [bp-D4h]
  __int64 v123; // [sp+60h] [bp-CCh]
  int v124; // [sp+68h] [bp-C4h]
  unsigned int v126; // [sp+74h] [bp-B8h]
  unsigned int v127; // [sp+78h] [bp-B4h]
  unsigned int v129; // [sp+80h] [bp-ACh]
  int v130; // [sp+84h] [bp-A8h]
  int v131; // [sp+88h] [bp-A4h]
  int v132; // [sp+8Ch] [bp-A0h]
  int v133; // [sp+90h] [bp-9Ch]
  int v134; // [sp+94h] [bp-98h]
  int v136; // [sp+9Ch] [bp-90h]
  int v137; // [sp+A0h] [bp-8Ch]
  int v138; // [sp+A8h] [bp-84h]
  __int128 v139; // [sp+B0h] [bp-7Ch] BYREF
  __int128 v140; // [sp+C0h] [bp-6Ch] BYREF
  __int16 v141; // [sp+D4h] [bp-58h]
  char v142; // [sp+D6h] [bp-56h]
  int v143; // [sp+D8h] [bp-54h]
  _DWORD v144[3]; // [sp+DCh] [bp-50h]
  _BYTE v145[24]; // [sp+E8h] [bp-44h] BYREF
  int v146; // [sp+100h] [bp-2Ch]
  int v147; // [sp+104h] [bp-28h]
  int v148; // [sp+108h] [bp-24h]
  unsigned __int64 v149; // [sp+110h] [bp-1Ch] BYREF
  __int64 v150; // [sp+118h] [bp-14h]
  unsigned __int64 v151; // [sp+120h] [bp-Ch]

  v8 = a2[2];
  v9 = a1;
  if ( v8 <= a3 )
  {
LABEL_133:
    *(_BYTE *)v9 = 75;
    return 75;
  }
  v11 = a3;
  v120 = (__int64 *)(a4 + 80);
  v12 = 4;
  v13 = a2[3];
  if ( *(_BYTE *)(v13 + 41) == 8 )
    v12 = 12;
  v14 = *(_DWORD *)(v13 + 32) + *a2 + v12 - (*(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 16));
  while ( 1 )
  {
    sub_1A8468((int)v145, a2);
    result = v145[0];
    if ( v145[0] != 75 )
    {
      v106 = v145[3];
      v107 = *(_QWORD *)&v145[4];
      v108 = *(_DWORD *)&v145[12];
      *(_WORD *)(v9 + 1) = *(_WORD *)&v145[1];
      *(_BYTE *)(v9 + 3) = v106;
      *(_QWORD *)(v9 + 4) = v107;
      *(_DWORD *)(v9 + 12) = v108;
      *(_BYTE *)v9 = result;
      return result;
    }
    if ( !*(_DWORD *)&v145[4] )
      goto LABEL_6;
    v22 = *(unsigned __int16 *)(*(_DWORD *)&v145[4] + 96);
    if ( v22 != 29 )
    {
      v23 = *(_DWORD *)&v145[4] + 8;
      if ( v22 == 46 )
      {
LABEL_13:
        v24 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v23);
        sub_1A7738((int)v145, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v24, v25);
        result = v145[0];
        if ( v145[0] == 75 )
        {
          while ( 1 )
          {
            if ( a2[2] <= v8 )
              goto LABEL_6;
            sub_1A8468((int)v145, a2);
            result = v145[0];
            if ( v145[0] != 75 )
              break;
            if ( *(_DWORD *)&v145[4] )
            {
              v23 = *(_DWORD *)&v145[4] + 8;
              goto LABEL_13;
            }
          }
          v103 = *(_DWORD *)&v145[12];
          v104 = *(_DWORD *)&v145[8];
          v105 = *(_DWORD *)&v145[4];
          LOWORD(v149) = *(_WORD *)&v145[1];
          BYTE2(v149) = v145[3];
        }
        else
        {
          v103 = *(_DWORD *)&v145[12];
          v104 = *(_DWORD *)&v145[8];
          v105 = *(_DWORD *)&v145[4];
          BYTE2(v149) = v145[3];
          LOWORD(v149) = *(_WORD *)&v145[1];
        }
        *(_BYTE *)(v9 + 3) = BYTE2(v149);
        *(_WORD *)(v9 + 1) = v149;
        *(_DWORD *)(v9 + 12) = v103;
        *(_DWORD *)(v9 + 8) = v104;
        *(_DWORD *)(v9 + 4) = v105;
        *(_BYTE *)v9 = result;
        return result;
      }
      v15 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v23);
      sub_1A7738((int)v145, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v15, v16);
      result = v145[0];
      if ( v145[0] != 75 )
      {
        v110 = *(_QWORD *)&v145[5];
        v109 = *(_DWORD *)&v145[1];
        v111 = *(_DWORD *)&v145[12];
        goto LABEL_142;
      }
      goto LABEL_6;
    }
    v124 = v8;
    v26 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(*(_DWORD *)&v145[4] + 8);
    if ( v27 )
      break;
    v29 = a4;
    v122 = 0;
    v123 = 0;
    v134 = 0;
    v133 = 0;
    v132 = 0;
    v131 = 0;
    v130 = 0;
    v137 = 0;
    v31 = 0;
    v136 = 0;
LABEL_92:
    v65 = a6;
    v66 = a6[2];
    v67 = v66;
    if ( v66 == *a6 )
    {
      sub_1A4034(a6, a6[2]);
      v67 = a6[2];
    }
    v68 = a6[1];
    *(_DWORD *)(v68 + 32 * v67) = v31;
    v69 = (_DWORD *)(v68 + 32 * v67);
    v69[1] = v138;
    v69[2] = v137;
    v69[3] = v136;
    v69[5] = v130;
    v69[4] = v14;
    v69[6] = v131;
    a6[2] = v67 + 1;
    v70 = a5[7];
    if ( v132 == 1 )
    {
      v71 = *(_DWORD *)(v29 + 40);
      v72 = v66;
      v73 = (unsigned int *)(v70 + 32);
      v74 = (unsigned int *)(v70 + 36);
      v75 = HIWORD(v71);
      if ( HIWORD(v71) < 5u )
      {
        v74 = (unsigned int *)(v70 + 28);
        v73 = (unsigned int *)(v70 + 24);
      }
      v76 = *v74;
      v77 = *v73;
      if ( v76 < v121 )
      {
        v113 = v71 << 16;
        LOBYTE(v112) = 0;
        result = 19;
        v114 = 0;
        goto LABEL_140;
      }
      v78 = *(_DWORD *)(v70 + 48);
      v79 = *(_DWORD *)(v70 + 52);
      v80 = *v120;
      *(_DWORD *)&v145[8] = *(_DWORD *)(v29 + 40);
      *(_DWORD *)&v145[4] = v76 - v121;
      *(_DWORD *)v145 = v77 + v121;
      *(_DWORD *)&v145[12] = v75 > 4;
      v81 = *(_DWORD *)(v29 + 268);
      *(_QWORD *)&v145[16] = v80;
      v148 = v81;
      v147 = v79;
      v146 = v78;
      sub_1A91D0((int)&v149, (unsigned __int8 **)v145);
      v82 = v149;
      v83 = v72;
      v84 = a7;
      if ( v149 == 2 )
      {
LABEL_99:
        v65 = a6;
        result = (unsigned __int8)v150;
        if ( (unsigned __int8)v150 != 75 )
        {
          v112 = v150 >> 8;
          v113 = v150 >> 16;
          v77 = v151;
          v75 = HIWORD(HIDWORD(v150));
          v114 = HIDWORD(v151);
LABEL_140:
          v9 = a1;
          *(_DWORD *)((char *)&v139 + 2) = v113;
          WORD3(v139) = v75;
          *((_QWORD *)&v139 + 1) = __PAIR64__(v114, v77);
          BYTE1(v139) = v112;
          LOBYTE(v139) = result;
          goto LABEL_141;
        }
      }
      else
      {
        while ( v82 == 1 )
        {
          v89 = v29;
          v90 = v151;
          v91 = v150;
          if ( v150 < v151 )
          {
            v92 = a7[2];
            if ( v92 == *a7 )
            {
              sub_1A4194(a7, v92);
              v92 = a7[2];
            }
            v85 = a7[1];
            v86 = v92 + 1;
            v87 = 3 * v92;
            a7[2] = v86;
            *(_DWORD *)(v85 + 8 * v87) = v91;
            v88 = v85 + 8 * v87;
            *(_DWORD *)(v88 + 4) = HIDWORD(v91);
            *(_QWORD *)(v88 + 8) = v90;
            *(_DWORD *)(v88 + 16) = a8;
            *(_DWORD *)(v88 + 20) = v83;
          }
          sub_1A91D0((int)&v149, (unsigned __int8 **)v145);
          v82 = v149;
          v29 = v89;
          if ( v149 == 2 )
            goto LABEL_99;
        }
        v65 = a6;
      }
    }
    else
    {
      v84 = a7;
      if ( !(v134 ^ 1 | v133) )
      {
        if ( v123 == 1 )
        {
          if ( __PAIR64__(v126, v127) < __PAIR64__(v117, v118) )
          {
            v93 = a7[2];
            if ( v93 == *a7 )
            {
              sub_1A4194(a7, v93);
              v93 = a7[2];
            }
            v94 = a7[1];
            v95 = v93 + 1;
            v96 = 3 * v93;
            a7[2] = v95;
            *(_DWORD *)(v94 + 8 * v96) = v127;
            v97 = (_DWORD *)(v94 + 8 * v96);
            v97[1] = v126;
            v97[2] = v118;
            v97[3] = v117;
            v97[4] = a8;
            v97[5] = v66;
          }
        }
        else if ( v122 == 1 && __PAIR64__(v126, v127) < __PAIR64__(v115, v116) + __PAIR64__(v126, v127) )
        {
          v98 = a7[2];
          if ( v98 == *a7 )
          {
            sub_1A4194(a7, v98);
            v98 = a7[2];
          }
          v99 = a7[1];
          v100 = v98 + 1;
          v101 = 3 * v98;
          a7[2] = v100;
          *(_DWORD *)(v99 + 8 * v101) = v127;
          v102 = v99 + 8 * v101;
          *(_DWORD *)(v102 + 20) = v66;
          *(_DWORD *)(v102 + 4) = v126;
          *(_QWORD *)(v102 + 8) = __PAIR64__(v115, v116) + __PAIR64__(v126, v127);
          *(_DWORD *)(v102 + 16) = a8;
        }
      }
    }
    sub_1B36A0((int)&v139, a2, v124, v29, a5, v65, v84, a8 + 1);
LABEL_121:
    v9 = a1;
    v11 = a3;
    result = (unsigned __int8)v139;
    if ( (unsigned __int8)v139 != 75 )
      goto LABEL_141;
LABEL_6:
    v18 = a2[3];
    v8 = a2[2];
    v19 = *(_DWORD *)(v18 + 32);
    v20 = *(_QWORD *)(v18 + 16);
    v41 = *(_BYTE *)(v18 + 41) == 8;
    v21 = 4;
    if ( v41 )
      v21 = 12;
    v14 = v19 + *a2 + v21 - (HIDWORD(v20) + v20);
    if ( v8 <= v11 )
      goto LABEL_133;
  }
  v28 = (_DWORD *)v26;
  v29 = a4;
  v30 = 16 * v27;
  v137 = 0;
  v136 = 0;
  v130 = 0;
  v131 = 0;
  v31 = 0;
  v132 = 0;
  v134 = 0;
  v133 = 0;
  v123 = 0;
  v122 = 0;
  while ( 2 )
  {
    v35 = v28[1];
    v36 = v28[2];
    v37 = *(_DWORD *)(a2[3] + 40);
    v38 = v28[3];
    LODWORD(v140) = *v28;
    *(_QWORD *)((char *)&v140 + 4) = __PAIR64__(v36, v35);
    v149 = __PAIR64__(v35, v140);
    v150 = __PAIR64__(v38, v36);
    HIDWORD(v140) = v38;
    sub_1A5D9C((int)v145, (unsigned int *)a2, v37, (int)&v149);
    if ( *(_QWORD *)v145 == 46 )
    {
      v139 = *(_OWORD *)&v145[8];
      goto LABEL_121;
    }
    switch ( *(_WORD *)&v145[16] )
    {
      case 3:
        if ( !v31 )
        {
          HIDWORD(v45) = v145;
          v46 = a5[7];
          LODWORD(v45) = &v149;
          sub_1A7DDC(v45);
          sub_1A8898((int)&v140, (_DWORD *)(v46 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v149);
          v31 = DWORD1(v140);
          if ( (unsigned __int8)v140 != 75 )
            v31 = 0;
          v47 = v119;
          if ( (unsigned __int8)v140 == 75 )
            v47 = DWORD2(v140);
          v119 = v47;
          v138 = v47;
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
        LODWORD(v48) = &v149;
        HIDWORD(v48) = v145;
        sub_1A7DDC(v48);
        v49 = v126;
        if ( !v149 )
          v49 = HIDWORD(v150);
        v126 = v49;
        v50 = v127;
        if ( !v149 )
          v50 = v150;
        v127 = v50;
        v51 = v134;
        if ( !v149 )
          v51 = 1;
        v134 = v51;
        v52 = v133;
        if ( !v149 )
          v52 = 0;
        v133 = v52;
        goto LABEL_25;
      case 0x12:
        LODWORD(v53) = &v149;
        HIDWORD(v53) = v145;
        sub_1A7DDC(v53);
        if ( (v149 & 0x3F) != 0 )
        {
          if ( (_DWORD)v149 == 7 )
          {
            v115 = HIDWORD(v150);
            v116 = v150;
            v122 = 1;
          }
        }
        else
        {
          v117 = HIDWORD(v150);
          v118 = v150;
          v123 = 1;
        }
        goto LABEL_25;
      case 0x31:
      case 0x47:
        if ( v31 )
          goto LABEL_25;
        LODWORD(v39) = &v149;
        HIDWORD(v39) = v145;
        sub_1A7DDC(v39);
        sub_1B4520((unsigned int)&v140, v40, v149, SHIDWORD(v149), v150, a4, a5, 16);
        if ( (unsigned __int8)v140 != 75 )
        {
          v139 = v140;
          goto LABEL_121;
        }
        v138 = DWORD2(v140);
        v31 = DWORD1(v140);
LABEL_25:
        v28 += 4;
        v30 -= 16;
        if ( !v30 )
          goto LABEL_92;
        continue;
      case 0x55:
        HIDWORD(v54) = v145;
        v55 = a5[7];
        LODWORD(v54) = &v149;
        sub_1A7DDC(v54);
        v56 = v150;
        if ( (v149 & 0x3F) != 0x18 )
        {
          v132 = 0;
          v57 = v129;
          if ( (_DWORD)v149 == 22 )
          {
            v57 = v150;
            if ( *(unsigned __int16 *)(a4 + 42) < 5u )
              v57 = v150 + *(_DWORD *)(a4 + 276);
            if ( !*(_BYTE *)(v55 + 116) )
              v57 = v150;
            v132 = 1;
          }
          v129 = v57;
          v121 = v57;
          goto LABEL_25;
        }
        v58 = *(_DWORD *)(a4 + 276);
        v59 = *(_DWORD *)(v55 + 36);
        v129 = *(_DWORD *)(v55 + 32);
        if ( v59 < v58 )
          goto LABEL_126;
        v60 = *(_DWORD *)(a4 + 40);
        v56 = v150 * BYTE1(v60);
        if ( !is_mul_ok(v150, BYTE1(v60)) )
        {
          LOBYTE(result) = 53;
          goto LABEL_131;
        }
        v61 = v59 - v58;
        if ( v61 >= v56 )
        {
          v62 = v129 + v58 + v56;
          v63 = v61 - v56;
          v56 = *(_DWORD *)(a4 + 40) & 0xFF00;
          v129 = v62;
          if ( v56 == 2048 )
          {
            if ( v63 < 8 )
            {
              *(_DWORD *)((char *)&v140 + 7) = v62;
              LOWORD(v144[1]) = v62 >> 8;
              BYTE2(v144[1]) = HIBYTE(v62);
              v144[0] = DWORD1(v140);
              v129 = *(_DWORD *)((char *)v144 + 3);
              v56 = (__int64)v140 >> 24;
              LOBYTE(result) = 19;
              v143 = v140;
            }
            else
            {
              v56 = *(_DWORD *)(v62 + 4);
              if ( !v56 )
              {
                v64 = *(_DWORD *)v62;
LABEL_78:
                v132 = 1;
                v121 = v64 + v58;
                v129 = v64 + v58;
                goto LABEL_25;
              }
              LOBYTE(result) = 53;
            }
          }
          else
          {
            if ( v63 >= 4 )
            {
              v64 = *(_DWORD *)v62;
              goto LABEL_78;
            }
            LOBYTE(result) = 19;
          }
          v142 = BYTE2(v143);
          v141 = v143;
          goto LABEL_131;
        }
        v129 += v58;
LABEL_126:
        LOBYTE(result) = 19;
LABEL_131:
        *(_WORD *)((char *)&v139 + 1) = v141;
        v9 = a1;
        v11 = a3;
        BYTE3(v139) = v142;
        *((_QWORD *)&v139 + 1) = v129;
        DWORD1(v139) = v56;
        LOBYTE(v139) = result;
        result = (unsigned __int8)result;
        if ( (unsigned __int8)result == 75 )
          goto LABEL_6;
LABEL_141:
        v109 = *(_DWORD *)((char *)&v139 + 1);
        v110 = *(_QWORD *)((char *)&v139 + 5);
        v111 = HIDWORD(v139);
LABEL_142:
        *(_DWORD *)(v9 + 12) = v111;
        *(_QWORD *)(v9 + 5) = v110;
        *(_DWORD *)(v9 + 1) = v109;
        *(_BYTE *)v9 = result;
        return result;
      case 0x57:
        switch ( v145[0] & 0x3F )
        {
          case 2:
            v131 = v145[8];
            break;
          case 3:
            v131 = *(unsigned __int16 *)&v145[8];
            break;
          case 4:
            v131 = *(_DWORD *)&v145[8];
            break;
          case 5:
          case 7:
            v131 = *(_DWORD *)&v145[8];
            break;
          case 6:
            if ( *(int *)&v145[12] < 0 )
              goto LABEL_84;
            v131 = *(_DWORD *)&v145[8];
            break;
          default:
LABEL_84:
            v131 = 0;
            break;
        }
        goto LABEL_25;
      case 0x58:
        LODWORD(v32) = &v149;
        HIDWORD(v32) = v145;
        sub_1A7DDC(v32);
        v33 = v136;
        if ( v149 == 44 )
          v33 = HIDWORD(v150);
        v136 = v33;
        v34 = v137;
        if ( v149 == 44 )
          v34 = v150;
        v137 = v34;
        goto LABEL_25;
      case 0x59:
        switch ( v145[0] & 0x3F )
        {
          case 2:
            v130 = v145[8];
            break;
          case 3:
            v130 = *(unsigned __int16 *)&v145[8];
            break;
          case 4:
            v130 = *(_DWORD *)&v145[8];
            break;
          case 5:
          case 7:
            v130 = *(_DWORD *)&v145[8];
            break;
          case 6:
            if ( *(int *)&v145[12] < 0 )
              goto LABEL_90;
            v130 = *(_DWORD *)&v145[8];
            break;
          default:
LABEL_90:
            v130 = 0;
            break;
        }
        goto LABEL_25;
      default:
        v41 = *(unsigned __int16 *)&v145[16] == 110;
        if ( *(unsigned __int16 *)&v145[16] != 110 )
          v41 = *(unsigned __int16 *)&v145[16] == 8199;
        if ( v41 )
        {
          HIDWORD(v42) = v145;
          v43 = a5[7];
          LODWORD(v42) = &v149;
          sub_1A7DDC(v42);
          sub_1A8898((int)&v140, (_DWORD *)(v43 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v149);
          v44 = v138;
          if ( (unsigned __int8)v140 == 75 )
          {
            v44 = DWORD2(v140);
            v31 = DWORD1(v140);
          }
          v138 = v44;
        }
        goto LABEL_25;
    }
  }
}
