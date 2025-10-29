int __fastcall sub_1B7070(int result, unsigned int *a2, __int16 a3, __int16 a4)
{
  int v4; // r2
  int v5; // r4
  unsigned int v7; // r2
  unsigned int v8; // r11
  unsigned int i; // r1
  unsigned int v10; // t1
  unsigned int v11; // r2
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r3
  unsigned int *v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned __int64 v18; // r8
  unsigned int v19; // r6
  unsigned int v20; // r5
  unsigned int v21; // r3
  int v22; // r2
  unsigned int v23; // r12
  unsigned int v24; // r4
  unsigned int v25; // r7
  unsigned int v26; // r1
  char v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // t1
  unsigned __int16 *v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r3
  __int64 v33; // r6
  unsigned int v34; // r3
  unsigned int v35; // r7
  unsigned int v36; // r3
  int v37; // r6
  unsigned int v38; // r10
  int v39; // r5
  int v40; // r2
  unsigned int v41; // r7
  unsigned int v42; // r9
  unsigned int v43; // r8
  unsigned int v44; // r4
  char v45; // r2
  unsigned int v46; // r2
  unsigned int v47; // t1
  unsigned int v48; // r3
  char v49; // t1
  unsigned int v50; // r3
  unsigned int v51; // r6
  unsigned int v52; // r12
  int v53; // r5
  int v54; // r7
  int v55; // r2
  bool v56; // zf
  unsigned int v57; // r3
  unsigned int v58; // r9
  unsigned int v59; // r4
  unsigned int v60; // r3
  unsigned int v61; // r2
  unsigned int v62; // r3
  __int64 v63; // r8
  unsigned int v64; // r6
  unsigned int v65; // r5
  int v66; // r2
  unsigned int v67; // r12
  unsigned int v68; // r4
  unsigned int v69; // r3
  unsigned int v70; // r3
  unsigned int v71; // r3
  unsigned int v72; // r3
  char v73; // r1
  unsigned __int16 *v74; // r2
  unsigned int v75; // r3
  char v76; // t1
  unsigned int v77; // r3
  unsigned int v78; // r3
  unsigned int v79; // r3
  int v80; // r7
  char v81; // r1
  char v82; // r3
  char v83; // r2
  int v84; // r7
  int v85; // r3
  int v86; // r2
  unsigned int v87; // r2
  char v88; // r1
  unsigned int v89; // [sp+0h] [bp-2Ch]
  unsigned int v90; // [sp+0h] [bp-2Ch]
  __int64 v91; // [sp+8h] [bp-24h]
  __int64 v92; // [sp+10h] [bp-1Ch]
  int v93; // [sp+17h] [bp-15h]
  _BYTE v94[11]; // [sp+20h] [bp-Ch]

  v4 = HIBYTE(a3);
  v5 = result + 8;
  switch ( a4 )
  {
    case 3:
      v7 = a2[1];
      v8 = *a2;
      if ( v7 < 2 )
        goto LABEL_50;
      v10 = *(unsigned __int16 *)v8;
      v8 += 2;
      i = v10;
      v11 = v7 - 2;
      goto LABEL_48;
    case 4:
      v28 = a2[1];
      v8 = *a2;
      if ( v28 < 4 )
        goto LABEL_50;
      v29 = *(_DWORD *)v8;
      v8 += 4;
      i = v29;
      v11 = v28 - 4;
      goto LABEL_48;
    case 5:
      v30 = (unsigned __int16 *)*a2;
      v31 = a2[1];
      if ( v31 < 2 )
      {
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(result + 16) = v30;
        goto LABEL_91;
      }
      v8 = *v30;
      i = v31 - 2;
      *a2 = (unsigned int)(v30 + 1);
      v34 = 0;
      a2[1] = i;
      LODWORD(v33) = 3;
LABEL_111:
      v11 = v8 >> 8;
      goto LABEL_112;
    case 6:
      v11 = *a2;
      v32 = a2[1];
      if ( v32 < 4 )
        goto LABEL_102;
      v8 = *(_DWORD *)v11;
      i = v32 - 4;
      *a2 = v11 + 4;
      a2[1] = v32 - 4;
      v33 = 4;
      LOBYTE(v11) = BYTE1(v8);
      v34 = v8 & 0xFFFF0000;
      goto LABEL_147;
    case 7:
      v11 = *a2;
      v35 = a2[1];
      if ( v35 < 8 )
      {
        *(_DWORD *)&v94[7] = *a2;
        LOBYTE(v93) = *a2;
        *(_WORD *)((char *)&v93 + 1) = v11 >> 8;
        HIBYTE(v93) = HIBYTE(*a2);
        LODWORD(v91) = *(_DWORD *)v94;
        *(_DWORD *)((char *)&v91 + 3) = *(_QWORD *)v94 >> 24;
        *(_DWORD *)(result + 16) = v93;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 12) = *(_DWORD *)((char *)&v91 + 3);
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(result + 9) = v91;
        *(_BYTE *)(result + 8) = 19;
        return result;
      }
      v8 = *(_DWORD *)v11;
      i = *(_DWORD *)(v11 + 4);
      *a2 = v11 + 8;
      a2[1] = v35 - 8;
      v34 = v8 & 0xFFFF0000;
      LOBYTE(v11) = BYTE1(v8);
      v33 = 5;
      goto LABEL_147;
    case 8:
      v11 = a2[1];
      v8 = *a2;
      if ( !v11 )
        goto LABEL_89;
      for ( i = 0; i != v11; ++i )
      {
        if ( !*(_BYTE *)(v8 + i) )
        {
          a2[1] = ~i + v11;
          *a2 = v8 + i + 1;
          LOBYTE(v11) = BYTE1(v8);
          v34 = v8 & 0xFFFF0000;
          v33 = 31;
          goto LABEL_147;
        }
      }
LABEL_89:
      *(_DWORD *)result = 1;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 12) = v8;
LABEL_90:
      *(_DWORD *)(result + 16) = v8;
LABEL_91:
      *(_DWORD *)(result + 20) = 0;
      *(_BYTE *)(result + 8) = 19;
      return result;
    case 9:
      v36 = a2[1];
      v37 = 0;
      v38 = *a2;
      if ( !v36 )
      {
        LOBYTE(v41) = 0;
        v45 = 19;
        goto LABEL_158;
      }
      v89 = v38 + v36;
      v39 = 0;
      i = 0;
      v37 = 0;
      v40 = 0;
      while ( 1 )
      {
        v41 = *(unsigned __int8 *)(v38 - v39);
        if ( v40 == 63 && v41 >= 2 )
        {
          a2[1] = v36 + v39 - 1;
          v45 = 6;
          LOBYTE(v41) = 0;
          *a2 = v38 - v39 + 1;
          goto LABEL_158;
        }
        v42 = v41 & 0x7F;
        v43 = v42 << (v40 & 0x3F);
        if ( (v40 & 0x3F) - 32 >= 0 )
          v43 = 0;
        i |= v43;
        v44 = v42 >> (32 - (v40 & 0x3F));
        if ( (v40 & 0x3F) - 32 >= 0 )
          v44 = v42 << ((v40 & 0x3F) - 32);
        v37 |= v44;
        if ( (char)v41 > -1 )
          break;
        --v39;
        v40 += 7;
        if ( -v36 == v39 )
        {
          v38 += v36;
          a2[1] = 0;
          v37 = 0;
          *a2 = v89;
          v45 = 19;
          goto LABEL_158;
        }
      }
      v87 = v36 + v39 - 1;
      v8 = v38 - v39 + 1;
      *a2 = v8;
      a2[1] = v87;
      if ( !v37 )
      {
        if ( v87 < i )
        {
          *(_DWORD *)result = 1;
          *(_DWORD *)(result + 4) = 0;
          *(_BYTE *)(result + 8) = 19;
          *(_DWORD *)(result + 12) = v8;
          *(_DWORD *)(result + 16) = v8;
          *(_DWORD *)(result + 20) = 0;
          return result;
        }
        *a2 = v38 + i - v39 + 1;
        a2[1] = v36 - i + v39 - 1;
        LOBYTE(v11) = (unsigned __int16)(v38 - v39 + 1) >> 8;
        v34 = v8 & 0xFFFF0000;
        v33 = 1;
        v5 = result + 8;
        goto LABEL_147;
      }
      v45 = 53;
      LOBYTE(v41) = 0;
      v38 = i;
LABEL_158:
      *(_DWORD *)result = 1;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 16) = v38;
      *(_BYTE *)(result + 9) = v41;
      *(_BYTE *)(result + 8) = v45;
      *(_DWORD *)(result + 20) = v37;
      return result;
    case 10:
      v46 = a2[1];
      v8 = *a2;
      if ( !v46 )
      {
LABEL_50:
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 4) = 0;
        goto LABEL_90;
      }
      v47 = *(unsigned __int8 *)v8++;
      i = v47;
      v11 = v46 - 1;
LABEL_48:
      *a2 = v8;
      a2[1] = v11;
      if ( v11 >= i )
      {
        *a2 = v8 + i;
        a2[1] = v11 - i;
        v34 = v8 & 0xFFFF0000;
        LOBYTE(v11) = BYTE1(v8);
        v33 = 1;
        goto LABEL_147;
      }
      goto LABEL_89;
    case 11:
      v11 = *a2;
      v48 = a2[1];
      if ( !v48 )
        goto LABEL_108;
      i = v48 - 1;
      a2[1] = v48 - 1;
      v49 = *(_BYTE *)v11++;
      LOBYTE(v8) = v49;
      LODWORD(v33) = 2;
      goto LABEL_97;
    case 12:
      v11 = *a2;
      v50 = a2[1];
      if ( !v50 )
      {
LABEL_108:
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)(result + 16) = v11;
        *(_BYTE *)(result + 8) = 19;
        return result;
      }
      v8 = *(unsigned __int8 *)v11;
      i = v50 - 1;
      *a2 = v11 + 1;
      LOBYTE(v11) = 0;
      a2[1] = v50 - 1;
      LOBYTE(v8) = v8 != 0;
      LODWORD(v33) = 9;
LABEL_98:
      v34 = 0;
LABEL_112:
      HIDWORD(v33) = 0;
      goto LABEL_147;
    case 13:
      v51 = *a2;
      v52 = a2[1];
      v53 = 0;
      if ( v52 )
      {
        v90 = v51 + v52;
        v53 = 0;
        v8 = 0;
        i = 0;
        v54 = 0;
        while ( 1 )
        {
          v55 = *(unsigned __int8 *)(v51 - v53);
          if ( v54 == 63 )
          {
            v56 = v55 == 0;
            if ( *(_BYTE *)(v51 - v53) )
              v56 = v55 == 127;
            if ( !v56 )
              break;
          }
          v57 = v55 & 0x7F;
          v58 = v57 << (v54 & 0x3F);
          if ( (v54 & 0x3F) - 32 >= 0 )
            v58 = 0;
          v8 |= v58;
          v59 = v57 >> (32 - (v54 & 0x3F));
          if ( (v54 & 0x3F) - 32 >= 0 )
            v59 = v57 << ((v54 & 0x3F) - 32);
          i |= v59;
          if ( (char)v55 > -1 )
          {
            a2[1] = v52 + v53 - 1;
            v82 = v54 + 7;
            *a2 = v51 - v53 + 1;
            if ( v54 + 7 > 63 )
            {
              v5 = result + 8;
            }
            else
            {
              v5 = result + 8;
              if ( (v55 & 0x40) != 0 )
              {
                v83 = v82 & 0x3F;
                v84 = -1;
                v85 = (v82 & 0x3F) - 32;
                v86 = -1 << v83;
                if ( v85 >= 0 )
                {
                  v84 = -1 << v85;
                  v86 = 0;
                }
                i |= v84;
                v8 |= v86;
              }
            }
            LOBYTE(v11) = BYTE1(v8);
            v34 = v8 & 0xFFFF0000;
            v33 = 6;
            goto LABEL_147;
          }
          --v53;
          v54 += 7;
          if ( -v52 == v53 )
          {
            v51 += v52;
            v5 = result + 8;
            v53 = 0;
            *a2 = v90;
            a2[1] = 0;
            goto LABEL_132;
          }
        }
        v5 = result + 8;
        *a2 = v51 - v53 + 1;
        a2[1] = v52 + v53 - 1;
        v88 = 7;
        LOBYTE(v55) = 0;
      }
      else
      {
        LOBYTE(v55) = 0;
LABEL_132:
        *(_WORD *)&v94[4] = WORD2(v92);
        v88 = 19;
        *(_DWORD *)v94 = v92;
      }
      *(_DWORD *)(v5 + 8) = v51;
      *(_DWORD *)(v5 + 12) = v53;
      *(_QWORD *)result = 1;
      *(_WORD *)(result + 14) = *(_WORD *)&v94[4];
      *(_DWORD *)(result + 10) = *(_DWORD *)v94;
      *(_BYTE *)(result + 9) = v55;
      *(_BYTE *)(result + 8) = v88;
      return result;
    case 14:
      if ( v4 == 8 )
      {
        v12 = *a2;
        v60 = a2[1];
        if ( v60 < 8 )
          goto LABEL_94;
        i = *(_DWORD *)(v12 + 4);
        v14 = v60 - 8;
        v8 = *(_DWORD *)v12;
        v15 = (unsigned int *)(v12 + 8);
        *a2 = (unsigned int)v15;
        a2[1] = v14;
        if ( i )
        {
LABEL_143:
          v73 = 53;
          goto LABEL_144;
        }
      }
      else
      {
        v15 = (unsigned int *)*a2;
        v14 = a2[1];
        if ( v14 < 4 )
          goto LABEL_122;
        v8 = *v15;
        i = v14 - 4;
        *a2 = (unsigned int)(v15 + 1);
        a2[1] = v14 - 4;
      }
      LOBYTE(v11) = BYTE1(v8);
      v34 = v8 & 0xFFFF0000;
      v33 = 26;
      goto LABEL_147;
    case 15:
      v61 = *a2;
      v62 = a2[1];
      HIDWORD(v63) = 0;
      if ( v62 )
      {
        LODWORD(v63) = v61 + v62;
        v64 = v61 + 1;
        v65 = 1 - v62;
        v8 = 0;
        i = 0;
        v66 = 0;
        while ( 1 )
        {
          v67 = *(unsigned __int8 *)(v64 - 1);
          if ( v66 == 63 && v67 >= 2 )
            break;
          v68 = v67 & 0x7F;
          v69 = v68 << (v66 & 0x3F);
          if ( (v66 & 0x3F) - 32 >= 0 )
            v69 = 0;
          v8 |= v69;
          v70 = v68 >> (32 - (v66 & 0x3F));
          if ( (v66 & 0x3F) - 32 >= 0 )
            v70 = v68 << ((v66 & 0x3F) - 32);
          i |= v70;
          if ( (char)v67 > -1 )
          {
            *a2 = v64;
            v34 = v8 & 0xFFFF0000;
            a2[1] = -v65;
            LOBYTE(v11) = BYTE1(v8);
            v33 = 7;
            v5 = result + 8;
            goto LABEL_147;
          }
          ++v65;
          ++v64;
          v66 += 7;
          if ( v65 == 1 )
          {
            v5 = result + 8;
            *a2 = v63;
            a2[1] = 0;
            goto LABEL_135;
          }
        }
        v5 = result + 8;
        a2[1] = -v65;
        v81 = 6;
        LOBYTE(v67) = 0;
        *a2 = v64;
      }
      else
      {
        LOBYTE(v67) = 0;
        LODWORD(v63) = *a2;
LABEL_135:
        *(_WORD *)&v94[4] = WORD2(v92);
        v81 = 19;
        *(_DWORD *)v94 = v92;
      }
      *(_QWORD *)(v5 + 8) = v63;
      *(_QWORD *)result = 1;
      *(_WORD *)(result + 14) = *(_WORD *)&v94[4];
      *(_DWORD *)(result + 10) = *(_DWORD *)v94;
      *(_BYTE *)(result + 9) = v67;
      *(_BYTE *)(result + 8) = v81;
      return result;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 24:
    case 25:
    case 27:
    case 28:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      goto LABEL_21;
    case 23:
      if ( v4 == 8 )
      {
        v12 = *a2;
        v71 = a2[1];
        if ( v71 < 8 )
          goto LABEL_94;
        i = *(_DWORD *)(v12 + 4);
        v14 = v71 - 8;
        v8 = *(_DWORD *)v12;
        v15 = (unsigned int *)(v12 + 8);
        *a2 = (unsigned int)v15;
        a2[1] = v14;
        if ( i )
          goto LABEL_143;
      }
      else
      {
        v15 = (unsigned int *)*a2;
        v14 = a2[1];
        if ( v14 < 4 )
          goto LABEL_122;
        v8 = *v15;
        i = v14 - 4;
        *a2 = (unsigned int)(v15 + 1);
        a2[1] = v14 - 4;
      }
      LOBYTE(v11) = BYTE1(v8);
      v34 = v8 & 0xFFFF0000;
      v33 = 10;
      goto LABEL_147;
    case 26:
      goto LABEL_10;
    case 29:
      goto LABEL_6;
    case 30:
      v11 = a2[1];
      v8 = *a2;
      if ( v11 < 0x10 )
        goto LABEL_89;
      a2[1] = v11 - 16;
      *a2 = v8 + 16;
      v34 = v8 & 0xFFFF0000;
      LOBYTE(v11) = BYTE1(v8);
      v33 = 1;
      i = 16;
      goto LABEL_147;
    case 31:
      if ( v4 == 8 )
      {
        v12 = *a2;
        v72 = a2[1];
        if ( v72 < 8 )
          goto LABEL_94;
        i = *(_DWORD *)(v12 + 4);
        v14 = v72 - 8;
        v8 = *(_DWORD *)v12;
        v15 = (unsigned int *)(v12 + 8);
        *a2 = (unsigned int)v15;
        a2[1] = v14;
        if ( i )
          goto LABEL_143;
      }
      else
      {
        v15 = (unsigned int *)*a2;
        v14 = a2[1];
        if ( v14 < 4 )
          goto LABEL_122;
        v8 = *v15;
        i = v14 - 4;
        *a2 = (unsigned int)(v15 + 1);
        a2[1] = v14 - 4;
      }
      LOBYTE(v11) = BYTE1(v8);
      v34 = v8 & 0xFFFF0000;
      v33 = 30;
      goto LABEL_147;
    case 37:
      v74 = (unsigned __int16 *)*a2;
      v75 = a2[1];
      if ( !v75 )
        goto LABEL_104;
      i = v75 - 1;
      a2[1] = v75 - 1;
      v76 = *(_BYTE *)v74;
      v11 = (unsigned int)v74 + 1;
      LOBYTE(v8) = v76;
      LODWORD(v33) = 29;
LABEL_97:
      *a2 = v11;
      LOBYTE(v11) = 0;
      goto LABEL_98;
    case 38:
      v74 = (unsigned __int16 *)*a2;
      v77 = a2[1];
      if ( v77 < 2 )
        goto LABEL_104;
      v8 = *v74;
      i = v77 - 2;
      *a2 = (unsigned int)(v74 + 1);
      v34 = 0;
      a2[1] = i;
      LODWORD(v33) = 29;
      goto LABEL_111;
    case 39:
      v11 = *a2;
      v78 = a2[1];
      if ( v78 < 3 )
      {
LABEL_102:
        *(_DWORD *)(result + 16) = v11;
        *(_DWORD *)(result + 20) = 0;
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 4) = 0;
        *(_BYTE *)(result + 8) = 19;
        return result;
      }
      i = *(unsigned __int8 *)(v11 + 2);
      v80 = *(unsigned __int16 *)v11;
      *a2 = v11 + 3;
      a2[1] = v78 - 3;
      v8 = v80 | (i << 16);
      v34 = v8 & 0xFF0000;
      goto LABEL_128;
    case 40:
      v74 = (unsigned __int16 *)*a2;
      v79 = a2[1];
      if ( v79 < 4 )
      {
LABEL_104:
        *(_DWORD *)result = 1;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 16) = (unsigned int)v74;
        *(_BYTE *)(result + 8) = 19;
        return result;
      }
      v8 = *(_DWORD *)v74;
      i = v79 - 4;
      *a2 = (unsigned int)(v74 + 2);
      a2[1] = v79 - 4;
      v11 = v8 >> 8;
      v34 = v8 & 0xFFFF0000;
      goto LABEL_129;
    default:
      if ( a4 != 7938 )
      {
        if ( a4 != 7969 )
        {
LABEL_21:
          *(_DWORD *)result = 1;
          *(_DWORD *)(result + 4) = 0;
          *(_BYTE *)(result + 8) = 12;
          return result;
        }
LABEL_6:
        if ( v4 == 8 )
        {
          v12 = *a2;
          v13 = a2[1];
          if ( v13 < 8 )
          {
LABEL_94:
            HIBYTE(v92) = v12;
            *(_WORD *)&v94[8] = v12 >> 8;
            v94[10] = HIBYTE(v12);
            *(_QWORD *)v94 = v92;
            v15 = *(unsigned int **)&v94[7];
            v14 = v92 >> 24;
            v73 = 19;
            goto LABEL_144;
          }
          i = *(_DWORD *)(v12 + 4);
          v14 = v13 - 8;
          v8 = *(_DWORD *)v12;
          v15 = (unsigned int *)(v12 + 8);
          *a2 = (unsigned int)v15;
          a2[1] = v14;
          if ( i )
            goto LABEL_143;
        }
        else
        {
          v15 = (unsigned int *)*a2;
          v14 = a2[1];
          if ( v14 < 4 )
          {
LABEL_122:
            v73 = 19;
LABEL_144:
            *(_BYTE *)(result + 11) = v94[2];
            *(_QWORD *)result = 1;
            *(_WORD *)(result + 9) = *(_WORD *)v94;
            *(_DWORD *)(result + 12) = v14;
            *(_DWORD *)(result + 16) = v15;
            *(_DWORD *)(result + 20) = 0;
            *(_BYTE *)(result + 8) = v73;
            return result;
          }
          v8 = *v15;
          i = v14 - 4;
          *a2 = (unsigned int)(v15 + 1);
          a2[1] = v14 - 4;
        }
        LOBYTE(v11) = BYTE1(v8);
        v34 = v8 & 0xFFFF0000;
        v33 = 27;
        goto LABEL_147;
      }
LABEL_10:
      v16 = *a2;
      v17 = a2[1];
      HIDWORD(v18) = 0;
      if ( !v17 )
      {
        LOBYTE(v23) = 0;
        LODWORD(v18) = *a2;
        v27 = 19;
LABEL_156:
        *(_QWORD *)result = 1;
        *(_BYTE *)(result + 9) = v23;
        *(_BYTE *)(result + 8) = v27;
        *(_QWORD *)(v5 + 8) = v18;
        return result;
      }
      LODWORD(v18) = v16 + v17;
      v19 = v16 + 1;
      v20 = 1 - v17;
      v8 = 0;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = *(unsigned __int8 *)(v19 - 1);
        if ( v22 == 63 && v23 >= 2 )
        {
          v5 = result + 8;
          a2[1] = -v20;
          v27 = 6;
          LOBYTE(v23) = 0;
          *a2 = v19;
          goto LABEL_156;
        }
        v24 = v23 & 0x7F;
        v25 = v24 << (v22 & 0x3F);
        if ( (v22 & 0x3F) - 32 >= 0 )
          v25 = 0;
        v8 |= v25;
        v26 = v24 >> (32 - (v22 & 0x3F));
        if ( (v22 & 0x3F) - 32 >= 0 )
          v26 = v24 << ((v22 & 0x3F) - 32);
        v21 |= v26;
        if ( (char)v23 > -1 )
          break;
        ++v20;
        ++v19;
        v22 += 7;
        if ( v20 == 1 )
        {
          *a2 = v18;
          a2[1] = 0;
          v27 = 19;
          v5 = result + 8;
          goto LABEL_156;
        }
      }
      v5 = result + 8;
      i = -v20;
      *a2 = v19;
      a2[1] = -v20;
      if ( v21 )
      {
        v27 = 53;
        LOBYTE(v23) = 0;
        v18 = __PAIR64__(v21, v8);
        goto LABEL_156;
      }
      v34 = v8 & 0xFFFF0000;
LABEL_128:
      LOBYTE(v11) = BYTE1(v8);
LABEL_129:
      v33 = 29;
LABEL_147:
      *(_QWORD *)v5 = v33;
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 16) = (unsigned __int8)v8 | ((unsigned __int8)v11 << 8) | v34;
      *(_DWORD *)(result + 20) = i;
      return result;
  }
}
