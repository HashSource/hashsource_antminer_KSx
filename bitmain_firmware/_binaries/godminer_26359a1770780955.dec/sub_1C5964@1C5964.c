int __fastcall sub_1C5964(int a1, int *a2, int a3, int a4, int a5, unsigned int *a6, unsigned int *a7, int a8)
{
  int v8; // r4
  int v9; // r8
  int v11; // r10
  int v12; // r5
  int v13; // r1
  int v14; // r11
  __int64 v15; // r0
  int result; // r0
  int v17; // r1
  int v18; // r6
  __int64 v19; // r2
  int v20; // r1
  int v21; // r1
  int v22; // r0
  __int64 v23; // r0
  __int64 v24; // r0
  _DWORD *v25; // r9
  int v26; // r10
  int v27; // r5
  int v28; // r8
  __int64 v29; // r0
  int v30; // r0
  int v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r6
  unsigned int v34; // r2
  unsigned int v35; // r4
  __int64 v36; // r0
  bool v37; // zf
  __int64 v38; // r0
  int v39; // r4
  int v40; // r0
  __int64 v41; // r0
  int v42; // r4
  int v43; // r0
  __int64 v44; // r0
  unsigned int v45; // r1
  unsigned int v46; // r1
  int v47; // r1
  int v48; // r1
  __int64 v49; // r0
  __int64 v50; // r0
  int v51; // r6
  unsigned int v52; // r1
  unsigned int v53; // r2
  unsigned int v54; // r0
  unsigned int v55; // r3
  int v56; // r2
  unsigned int v57; // r3
  unsigned int v58; // r6
  unsigned int v59; // r3
  int v60; // r1
  unsigned int *v61; // r4
  unsigned int v62; // r6
  unsigned int v63; // r0
  unsigned int v64; // r1
  _DWORD *v65; // r1
  unsigned int *v66; // r3
  unsigned int v67; // r0
  unsigned int v68; // r11
  unsigned int *v69; // r2
  unsigned int *v70; // r6
  unsigned int v71; // r1
  unsigned int v72; // r6
  unsigned int v73; // lr
  unsigned int v74; // r12
  unsigned int v75; // r3
  __int64 v76; // r8
  int v77; // r5
  unsigned __int64 v78; // r0
  unsigned int v79; // r6
  unsigned int *v80; // r5
  unsigned int v81; // r0
  int v82; // r2
  int v83; // r1
  unsigned int v84; // r0
  int v85; // r4
  unsigned __int64 v86; // r8
  __int64 v87; // r10
  int v88; // r1
  int v89; // r1
  unsigned int v90; // r0
  int v91; // r2
  int v92; // r1
  _DWORD *v93; // r0
  int v94; // r1
  unsigned int v95; // r0
  int v96; // r2
  int v97; // r1
  unsigned int v98; // r0
  int v99; // r1
  int v100; // r2
  int v101; // r3
  char v102; // r1
  __int64 v103; // r2
  int v104; // r7
  int v105; // r1
  __int64 v106; // r2
  int v107; // r7
  int v108; // r7
  int v109; // r12
  unsigned int v110; // r5
  unsigned int v111; // [sp+18h] [bp-114h]
  unsigned int v112; // [sp+1Ch] [bp-110h]
  unsigned int v113; // [sp+20h] [bp-10Ch]
  unsigned int v114; // [sp+24h] [bp-108h]
  int v115; // [sp+28h] [bp-104h]
  __int64 *v116; // [sp+4Ch] [bp-E0h]
  unsigned int v117; // [sp+50h] [bp-DCh]
  int v118; // [sp+58h] [bp-D4h]
  int v119; // [sp+60h] [bp-CCh]
  int v120; // [sp+68h] [bp-C4h]
  unsigned int v122; // [sp+74h] [bp-B8h]
  unsigned int v123; // [sp+78h] [bp-B4h]
  unsigned int v125; // [sp+80h] [bp-ACh]
  int v126; // [sp+84h] [bp-A8h]
  int v127; // [sp+88h] [bp-A4h]
  int v128; // [sp+8Ch] [bp-A0h]
  int v129; // [sp+90h] [bp-9Ch]
  int v130; // [sp+94h] [bp-98h]
  int v132; // [sp+9Ch] [bp-90h]
  int v133; // [sp+A0h] [bp-8Ch]
  int v134; // [sp+A8h] [bp-84h]
  __int128 v135; // [sp+B0h] [bp-7Ch] BYREF
  __int128 v136; // [sp+C0h] [bp-6Ch] BYREF
  __int16 v137; // [sp+D4h] [bp-58h]
  char v138; // [sp+D6h] [bp-56h]
  int v139; // [sp+D8h] [bp-54h]
  _DWORD v140[3]; // [sp+DCh] [bp-50h]
  _BYTE v141[24]; // [sp+E8h] [bp-44h] BYREF
  unsigned int v142; // [sp+100h] [bp-2Ch]
  unsigned int v143; // [sp+104h] [bp-28h]
  int v144; // [sp+108h] [bp-24h]
  unsigned __int64 v145; // [sp+110h] [bp-1Ch] BYREF
  __int64 v146; // [sp+118h] [bp-14h]
  unsigned __int64 v147; // [sp+120h] [bp-Ch]

  v8 = a2[2];
  v9 = a1;
  if ( v8 <= a3 )
  {
LABEL_133:
    *(_BYTE *)v9 = 75;
    return 75;
  }
  v11 = a3;
  v116 = (__int64 *)(a4 + 80);
  v12 = 4;
  v13 = a2[3];
  if ( *(_BYTE *)(v13 + 41) == 8 )
    v12 = 12;
  v14 = *(_DWORD *)(v13 + 32) + *a2 + v12 - (*(_DWORD *)(v13 + 20) + *(_DWORD *)(v13 + 16));
  while ( 1 )
  {
    sub_1BA72C((int)v141, a2);
    result = v141[0];
    if ( v141[0] != 75 )
    {
      v102 = v141[3];
      v103 = *(_QWORD *)&v141[4];
      v104 = *(_DWORD *)&v141[12];
      *(_WORD *)(v9 + 1) = *(_WORD *)&v141[1];
      *(_BYTE *)(v9 + 3) = v102;
      *(_QWORD *)(v9 + 4) = v103;
      *(_DWORD *)(v9 + 12) = v104;
      *(_BYTE *)v9 = result;
      return result;
    }
    if ( !*(_DWORD *)&v141[4] )
      goto LABEL_6;
    v21 = *(unsigned __int16 *)(*(_DWORD *)&v141[4] + 96);
    if ( v21 != 29 )
    {
      v22 = *(_DWORD *)&v141[4] + 8;
      if ( v21 == 46 )
      {
LABEL_13:
        v23 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v22);
        sub_1B99FC((int)v141, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v23, SHIDWORD(v23));
        result = v141[0];
        if ( v141[0] == 75 )
        {
          while ( 1 )
          {
            if ( a2[2] <= v8 )
              goto LABEL_6;
            sub_1BA72C((int)v141, a2);
            result = v141[0];
            if ( v141[0] != 75 )
              break;
            if ( *(_DWORD *)&v141[4] )
            {
              v22 = *(_DWORD *)&v141[4] + 8;
              goto LABEL_13;
            }
          }
          v99 = *(_DWORD *)&v141[12];
          v100 = *(_DWORD *)&v141[8];
          v101 = *(_DWORD *)&v141[4];
          LOWORD(v145) = *(_WORD *)&v141[1];
          BYTE2(v145) = v141[3];
        }
        else
        {
          v99 = *(_DWORD *)&v141[12];
          v100 = *(_DWORD *)&v141[8];
          v101 = *(_DWORD *)&v141[4];
          BYTE2(v145) = v141[3];
          LOWORD(v145) = *(_WORD *)&v141[1];
        }
        *(_BYTE *)(v9 + 3) = BYTE2(v145);
        *(_WORD *)(v9 + 1) = v145;
        *(_DWORD *)(v9 + 12) = v99;
        *(_DWORD *)(v9 + 8) = v100;
        *(_DWORD *)(v9 + 4) = v101;
        *(_BYTE *)v9 = result;
        return result;
      }
      v15 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v22);
      sub_1B99FC((int)v141, (unsigned int *)a2, *(_DWORD *)(a2[3] + 40), v15, SHIDWORD(v15));
      result = v141[0];
      if ( v141[0] != 75 )
      {
        v105 = *(_DWORD *)&v141[1];
        v106 = *(_QWORD *)&v141[5];
        v107 = *(_DWORD *)&v141[12];
        goto LABEL_142;
      }
      goto LABEL_6;
    }
    v120 = v8;
    v24 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(*(_DWORD *)&v141[4] + 8);
    if ( HIDWORD(v24) )
      break;
    v26 = a4;
    v118 = 0;
    v119 = 0;
    v130 = 0;
    v129 = 0;
    v128 = 0;
    v127 = 0;
    v126 = 0;
    v133 = 0;
    v28 = 0;
    v132 = 0;
LABEL_92:
    v61 = a6;
    v62 = a6[2];
    v63 = v62;
    if ( v62 == *a6 )
    {
      sub_1B62F8(a6, a6[2]);
      v63 = a6[2];
    }
    v64 = a6[1];
    *(_DWORD *)(v64 + 32 * v63) = v28;
    v65 = (_DWORD *)(v64 + 32 * v63);
    v65[1] = v134;
    v65[2] = v133;
    v65[3] = v132;
    v65[5] = v126;
    v65[4] = v14;
    v65[6] = v127;
    a6[2] = v63 + 1;
    v66 = *(unsigned int **)(a5 + 28);
    if ( v128 == 1 )
    {
      v67 = *(_DWORD *)(v26 + 40);
      v68 = v62;
      v69 = v66 + 8;
      v70 = v66 + 9;
      v71 = HIWORD(v67);
      if ( HIWORD(v67) < 5u )
      {
        v70 = v66 + 7;
        v69 = v66 + 6;
      }
      v72 = *v70;
      v73 = *v69;
      if ( v72 < v117 )
      {
        v109 = v67 << 16;
        LOBYTE(v108) = 0;
        result = 19;
        v110 = 0;
        goto LABEL_140;
      }
      v74 = v66[12];
      v75 = v66[13];
      v76 = *v116;
      *(_DWORD *)&v141[8] = *(_DWORD *)(v26 + 40);
      *(_DWORD *)&v141[4] = v72 - v117;
      *(_DWORD *)v141 = v73 + v117;
      *(_DWORD *)&v141[12] = v71 > 4;
      v77 = *(_DWORD *)(v26 + 268);
      *(_QWORD *)&v141[16] = v76;
      v144 = v77;
      v143 = v75;
      v142 = v74;
      sub_1BB494((int)&v145, (unsigned __int8 **)v141);
      v78 = v145;
      v79 = v68;
      v80 = a7;
      if ( v145 == 2 )
      {
LABEL_99:
        v61 = a6;
        result = (unsigned __int8)v146;
        if ( (unsigned __int8)v146 != 75 )
        {
          v108 = v146 >> 8;
          v109 = v146 >> 16;
          v73 = v147;
          v71 = HIWORD(HIDWORD(v146));
          v110 = HIDWORD(v147);
LABEL_140:
          v9 = a1;
          *(_DWORD *)((char *)&v135 + 2) = v109;
          WORD3(v135) = v71;
          *((_QWORD *)&v135 + 1) = __PAIR64__(v110, v73);
          BYTE1(v135) = v108;
          LOBYTE(v135) = result;
          goto LABEL_141;
        }
      }
      else
      {
        while ( v78 == 1 )
        {
          v85 = v26;
          v86 = v147;
          v87 = v146;
          if ( v146 < v147 )
          {
            v88 = a7[2];
            if ( v88 == *a7 )
            {
              sub_1B6458(a7, v88);
              v88 = a7[2];
            }
            v81 = a7[1];
            v82 = v88 + 1;
            v83 = 3 * v88;
            a7[2] = v82;
            *(_DWORD *)(v81 + 8 * v83) = v87;
            v84 = v81 + 8 * v83;
            *(_DWORD *)(v84 + 4) = HIDWORD(v87);
            *(_QWORD *)(v84 + 8) = v86;
            *(_DWORD *)(v84 + 16) = a8;
            *(_DWORD *)(v84 + 20) = v79;
          }
          sub_1BB494((int)&v145, (unsigned __int8 **)v141);
          v78 = v145;
          v26 = v85;
          if ( v145 == 2 )
            goto LABEL_99;
        }
        v61 = a6;
      }
    }
    else
    {
      v80 = a7;
      if ( !(v130 ^ 1 | v129) )
      {
        if ( v119 == 1 )
        {
          if ( __PAIR64__(v122, v123) < __PAIR64__(v113, v114) )
          {
            v89 = a7[2];
            if ( v89 == *a7 )
            {
              sub_1B6458(a7, v89);
              v89 = a7[2];
            }
            v90 = a7[1];
            v91 = v89 + 1;
            v92 = 3 * v89;
            a7[2] = v91;
            *(_DWORD *)(v90 + 8 * v92) = v123;
            v93 = (_DWORD *)(v90 + 8 * v92);
            v93[1] = v122;
            v93[2] = v114;
            v93[3] = v113;
            v93[4] = a8;
            v93[5] = v62;
          }
        }
        else if ( v118 == 1 && __PAIR64__(v122, v123) < __PAIR64__(v111, v112) + __PAIR64__(v122, v123) )
        {
          v94 = a7[2];
          if ( v94 == *a7 )
          {
            sub_1B6458(a7, v94);
            v94 = a7[2];
          }
          v95 = a7[1];
          v96 = v94 + 1;
          v97 = 3 * v94;
          a7[2] = v96;
          *(_DWORD *)(v95 + 8 * v97) = v123;
          v98 = v95 + 8 * v97;
          *(_DWORD *)(v98 + 20) = v62;
          *(_DWORD *)(v98 + 4) = v122;
          *(_QWORD *)(v98 + 8) = __PAIR64__(v111, v112) + __PAIR64__(v122, v123);
          *(_DWORD *)(v98 + 16) = a8;
        }
      }
    }
    sub_1C5964(&v135, a2, v120, v26, a5, v61, v80, a8 + 1);
LABEL_121:
    v9 = a1;
    v11 = a3;
    result = (unsigned __int8)v135;
    if ( (unsigned __int8)v135 != 75 )
      goto LABEL_141;
LABEL_6:
    v17 = a2[3];
    v8 = a2[2];
    v18 = *(_DWORD *)(v17 + 32);
    v19 = *(_QWORD *)(v17 + 16);
    v37 = *(_BYTE *)(v17 + 41) == 8;
    v20 = 4;
    if ( v37 )
      v20 = 12;
    v14 = v18 + *a2 + v20 - (HIDWORD(v19) + v19);
    if ( v8 <= v11 )
      goto LABEL_133;
  }
  v25 = (_DWORD *)v24;
  v26 = a4;
  v27 = 16 * HIDWORD(v24);
  v133 = 0;
  v132 = 0;
  v126 = 0;
  v127 = 0;
  v28 = 0;
  v128 = 0;
  v130 = 0;
  v129 = 0;
  v119 = 0;
  v118 = 0;
  while ( 2 )
  {
    v32 = v25[1];
    v33 = v25[2];
    v34 = *(_DWORD *)(a2[3] + 40);
    v35 = v25[3];
    LODWORD(v136) = *v25;
    *(_QWORD *)((char *)&v136 + 4) = __PAIR64__(v33, v32);
    v145 = __PAIR64__(v32, v136);
    v146 = __PAIR64__(v35, v33);
    HIDWORD(v136) = v35;
    sub_1B8060((int)v141, (unsigned int *)a2, v34, (int)&v145);
    if ( *(_QWORD *)v141 == 46 )
    {
      v135 = *(_OWORD *)&v141[8];
      goto LABEL_121;
    }
    switch ( *(_WORD *)&v141[16] )
    {
      case 3:
        if ( !v28 )
        {
          HIDWORD(v41) = v141;
          v42 = *(_DWORD *)(a5 + 28);
          LODWORD(v41) = &v145;
          sub_1BA0A0(v41);
          sub_1BAB5C((int)&v136, (_DWORD *)(v42 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v145);
          v28 = DWORD1(v136);
          if ( (unsigned __int8)v136 != 75 )
            v28 = 0;
          v43 = v115;
          if ( (unsigned __int8)v136 == 75 )
            v43 = DWORD2(v136);
          v115 = v43;
          v134 = v43;
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
        LODWORD(v44) = &v145;
        HIDWORD(v44) = v141;
        sub_1BA0A0(v44);
        v45 = v122;
        if ( !v145 )
          v45 = HIDWORD(v146);
        v122 = v45;
        v46 = v123;
        if ( !v145 )
          v46 = v146;
        v123 = v46;
        v47 = v130;
        if ( !v145 )
          v47 = 1;
        v130 = v47;
        v48 = v129;
        if ( !v145 )
          v48 = 0;
        v129 = v48;
        goto LABEL_25;
      case 0x12:
        LODWORD(v49) = &v145;
        HIDWORD(v49) = v141;
        sub_1BA0A0(v49);
        if ( (v145 & 0x3F) != 0 )
        {
          if ( (_DWORD)v145 == 7 )
          {
            v111 = HIDWORD(v146);
            v112 = v146;
            v118 = 1;
          }
        }
        else
        {
          v113 = HIDWORD(v146);
          v114 = v146;
          v119 = 1;
        }
        goto LABEL_25;
      case 0x31:
      case 0x47:
        if ( v28 )
          goto LABEL_25;
        LODWORD(v36) = &v145;
        HIDWORD(v36) = v141;
        sub_1BA0A0(v36);
        sub_1C67E4(&v136);
        if ( (unsigned __int8)v136 != 75 )
        {
          v135 = v136;
          goto LABEL_121;
        }
        v134 = DWORD2(v136);
        v28 = DWORD1(v136);
LABEL_25:
        v25 += 4;
        v27 -= 16;
        if ( !v27 )
          goto LABEL_92;
        continue;
      case 0x55:
        HIDWORD(v50) = v141;
        v51 = *(_DWORD *)(a5 + 28);
        LODWORD(v50) = &v145;
        sub_1BA0A0(v50);
        v52 = v146;
        if ( (v145 & 0x3F) != 0x18 )
        {
          v128 = 0;
          v53 = v125;
          if ( (_DWORD)v145 == 22 )
          {
            v53 = v146;
            if ( *(unsigned __int16 *)(a4 + 42) < 5u )
              v53 = v146 + *(_DWORD *)(a4 + 276);
            if ( !*(_BYTE *)(v51 + 116) )
              v53 = v146;
            v128 = 1;
          }
          v125 = v53;
          v117 = v53;
          goto LABEL_25;
        }
        v54 = *(_DWORD *)(a4 + 276);
        v55 = *(_DWORD *)(v51 + 36);
        v125 = *(_DWORD *)(v51 + 32);
        if ( v55 < v54 )
          goto LABEL_126;
        v56 = *(_DWORD *)(a4 + 40);
        v52 = v146 * BYTE1(v56);
        if ( !is_mul_ok(v146, BYTE1(v56)) )
        {
          LOBYTE(result) = 53;
          goto LABEL_131;
        }
        v57 = v55 - v54;
        if ( v57 >= v52 )
        {
          v58 = v125 + v54 + v52;
          v59 = v57 - v52;
          v52 = *(_DWORD *)(a4 + 40) & 0xFF00;
          v125 = v58;
          if ( v52 == 2048 )
          {
            if ( v59 < 8 )
            {
              *(_DWORD *)((char *)&v136 + 7) = v58;
              LOWORD(v140[1]) = v58 >> 8;
              BYTE2(v140[1]) = HIBYTE(v58);
              v140[0] = DWORD1(v136);
              v125 = *(_DWORD *)((char *)v140 + 3);
              v52 = (__int64)v136 >> 24;
              LOBYTE(result) = 19;
              v139 = v136;
            }
            else
            {
              v52 = *(_DWORD *)(v58 + 4);
              if ( !v52 )
              {
                v60 = *(_DWORD *)v58;
LABEL_78:
                v128 = 1;
                v117 = v60 + v54;
                v125 = v60 + v54;
                goto LABEL_25;
              }
              LOBYTE(result) = 53;
            }
          }
          else
          {
            if ( v59 >= 4 )
            {
              v60 = *(_DWORD *)v58;
              goto LABEL_78;
            }
            LOBYTE(result) = 19;
          }
          v138 = BYTE2(v139);
          v137 = v139;
          goto LABEL_131;
        }
        v125 += v54;
LABEL_126:
        LOBYTE(result) = 19;
LABEL_131:
        *(_WORD *)((char *)&v135 + 1) = v137;
        v9 = a1;
        v11 = a3;
        BYTE3(v135) = v138;
        *((_QWORD *)&v135 + 1) = v125;
        DWORD1(v135) = v52;
        LOBYTE(v135) = result;
        result = (unsigned __int8)result;
        if ( (unsigned __int8)result == 75 )
          goto LABEL_6;
LABEL_141:
        v106 = *(_QWORD *)((char *)&v135 + 5);
        v105 = *(_DWORD *)((char *)&v135 + 1);
        v107 = HIDWORD(v135);
LABEL_142:
        *(_DWORD *)(v9 + 12) = v107;
        *(_QWORD *)(v9 + 5) = v106;
        *(_DWORD *)(v9 + 1) = v105;
        *(_BYTE *)v9 = result;
        return result;
      case 0x57:
        switch ( v141[0] & 0x3F )
        {
          case 2:
            v127 = v141[8];
            break;
          case 3:
            v127 = *(unsigned __int16 *)&v141[8];
            break;
          case 4:
            v127 = *(_DWORD *)&v141[8];
            break;
          case 5:
          case 7:
            v127 = *(_DWORD *)&v141[8];
            break;
          case 6:
            if ( *(int *)&v141[12] < 0 )
              goto LABEL_84;
            v127 = *(_DWORD *)&v141[8];
            break;
          default:
LABEL_84:
            v127 = 0;
            break;
        }
        goto LABEL_25;
      case 0x58:
        LODWORD(v29) = &v145;
        HIDWORD(v29) = v141;
        sub_1BA0A0(v29);
        v30 = v132;
        if ( v145 == 44 )
          v30 = HIDWORD(v146);
        v132 = v30;
        v31 = v133;
        if ( v145 == 44 )
          v31 = v146;
        v133 = v31;
        goto LABEL_25;
      case 0x59:
        switch ( v141[0] & 0x3F )
        {
          case 2:
            v126 = v141[8];
            break;
          case 3:
            v126 = *(unsigned __int16 *)&v141[8];
            break;
          case 4:
            v126 = *(_DWORD *)&v141[8];
            break;
          case 5:
          case 7:
            v126 = *(_DWORD *)&v141[8];
            break;
          case 6:
            if ( *(int *)&v141[12] < 0 )
              goto LABEL_90;
            v126 = *(_DWORD *)&v141[8];
            break;
          default:
LABEL_90:
            v126 = 0;
            break;
        }
        goto LABEL_25;
      default:
        v37 = *(unsigned __int16 *)&v141[16] == 110;
        if ( *(unsigned __int16 *)&v141[16] != 110 )
          v37 = *(unsigned __int16 *)&v141[16] == 8199;
        if ( v37 )
        {
          HIDWORD(v38) = v141;
          v39 = *(_DWORD *)(a5 + 28);
          LODWORD(v38) = &v145;
          sub_1BA0A0(v38);
          sub_1BAB5C((int)&v136, (_DWORD *)(v39 + 8), *(unsigned __int8 *)(a4 + 41), *(_DWORD *)(a4 + 264), &v145);
          v40 = v134;
          if ( (unsigned __int8)v136 == 75 )
          {
            v40 = DWORD2(v136);
            v28 = DWORD1(v136);
          }
          v134 = v40;
        }
        goto LABEL_25;
    }
  }
}
