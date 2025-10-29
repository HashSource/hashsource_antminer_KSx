char *__fastcall rustc_demangle::demangle(int *a1, char *a2, unsigned int a3)
{
  char *v3; // r10
  unsigned int v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r7
  int v7; // r0
  char v8; // r5
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r2
  unsigned int v12; // r12
  unsigned int v13; // r2
  unsigned int v14; // r0
  int v15; // r4
  int v16; // r5
  unsigned int v17; // r0
  unsigned int v18; // r7
  unsigned int v19; // r4
  unsigned int v20; // r2
  unsigned int v21; // r7
  unsigned int v22; // r4
  unsigned int v23; // r9
  unsigned int v24; // r6
  int v25; // r0
  char v26; // r5
  unsigned int v27; // r4
  int v28; // r0
  int v29; // r4
  int v30; // r0
  int v31; // r4
  int v32; // r2
  unsigned __int8 *v33; // r0
  unsigned int v34; // r2
  unsigned int v35; // r9
  int v36; // r4
  int v37; // t1
  int v38; // r0
  int v39; // r5
  unsigned int v40; // r7
  unsigned int v41; // r1
  char **v42; // r0
  int v43; // r9
  char *v44; // r10
  const char *v45; // r1
  unsigned int v46; // r2
  char *v47; // r3
  int v48; // t1
  int v49; // r2
  const char *v50; // r11
  unsigned int v51; // r7
  int v52; // r2
  int v53; // r3
  int v54; // r3
  int v55; // r0
  int v56; // r1
  int v57; // r0
  int v58; // r8
  int v59; // r0
  int v60; // r0
  char *v61; // r1
  char *v62; // r0
  char v63; // r1
  unsigned int v64; // r2
  unsigned int v65; // r1
  int v66; // lr
  int v67; // r1
  int v68; // r2
  unsigned int v69; // r5
  unsigned int v70; // r2
  int v71; // r4
  unsigned int v72; // kr00_4
  int v73; // r7
  bool v74; // zf
  const char *v75; // r6
  int v76; // r3
  int v77; // r5
  int v78; // r4
  int v79; // r4
  const char *v80; // r4
  int v81; // t1
  int v82; // r6
  int v83; // r5
  int v84; // r5
  int v85; // r0
  unsigned int v86; // r3
  const char *v87; // r5
  int v88; // r4
  int v89; // r6
  int v90; // r6
  bool v91; // cf
  bool v92; // cf
  int v93; // r0
  char **v94; // r2
  char *v95; // r2
  char *v96; // r7
  int v97; // t1
  unsigned int v98; // r1
  int v99; // r2
  int v100; // r6
  int v101; // r6
  unsigned int v103; // r1
  unsigned int v104; // r2
  char **v105; // r0
  unsigned int v106; // [sp+20h] [bp-10h]
  unsigned int v107; // [sp+20h] [bp-10h]
  unsigned int v110; // [sp+28h] [bp-8h]
  int v111; // [sp+2Ch] [bp-4h]
  char *v112; // [sp+30h] [bp+0h] BYREF
  int v113; // [sp+34h] [bp+4h]
  unsigned int v114; // [sp+38h] [bp+8h]
  unsigned int v115; // [sp+3Ch] [bp+Ch]
  unsigned int v116; // [sp+40h] [bp+10h]
  int v117; // [sp+44h] [bp+14h]
  int v118; // [sp+48h] [bp+18h]
  unsigned int v119; // [sp+4Ch] [bp+1Ch]
  unsigned int v120; // [sp+54h] [bp+24h]
  int v121; // [sp+60h] [bp+30h]
  unsigned int v122; // [sp+64h] [bp+34h]
  int v123; // [sp+68h] [bp+38h]
  unsigned int v124; // [sp+6Ch] [bp+3Ch]
  int v125; // [sp+70h] [bp+40h] BYREF
  unsigned int v126; // [sp+74h] [bp+44h]

  v3 = a2;
  core::str::pattern::StrSearcher::new((int)&v112, (int)a2, a3, byte_2BC46F, 6u);
  v111 = (int)v3;
  if ( v112 )
  {
    v4 = v120;
    if ( v120 != -1 )
    {
      v5 = v119;
      v106 = v124 - 1;
      v6 = v119 + v124 - 1;
      if ( v6 < v122 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *(_BYTE *)(v121 + v6) & 0x3F;
            v8 = 32 - v7;
            v9 = v114 >> v7;
            v10 = v7 - 32;
            v11 = v9 | (v115 << v8);
            if ( v10 >= 0 )
              v11 = v115 >> v10;
            if ( (v11 & 1) == 0 )
              break;
            v12 = v4;
            v13 = v124;
            if ( v116 > v4 )
              v12 = v116;
            if ( v12 > v124 )
              v13 = v12;
            v14 = v12;
            while ( v13 != v14 )
            {
              if ( v5 + v14 >= v122 )
              {
                v93 = v12 + v5;
                if ( v122 > v12 + v5 )
                  v93 = v122;
                core::panicking::panic_bounds_check(v93, v122, (int)&off_2ED964);
              }
              v15 = *(unsigned __int8 *)(v121 + v5 + v14);
              v16 = *(unsigned __int8 *)(v123 + v14++);
              if ( v16 != v15 )
              {
                v5 = v5 - v116 + v14;
                goto LABEL_6;
              }
            }
            v17 = v116;
            do
            {
              if ( v4 >= v17 )
                goto LABEL_185;
              if ( --v17 >= v124 )
                goto LABEL_225;
              v18 = v17 + v5;
              if ( v17 + v5 >= v122 )
                goto LABEL_179;
            }
            while ( *(unsigned __int8 *)(v123 + v17) == *(unsigned __int8 *)(v121 + v18) );
            v4 = v124 - v118;
            v5 += v118;
            v6 = v5 + v106;
            if ( v5 + v106 >= v122 )
              goto LABEL_50;
          }
          v5 += v124;
LABEL_6:
          v4 = 0;
          v6 = v5 + v106;
        }
        while ( v5 + v106 < v122 );
      }
      goto LABEL_50;
    }
    v5 = v119;
    v107 = v124 - 1;
    v21 = v119 + v124 - 1;
    if ( v21 < v122 )
    {
      v22 = v124;
      v23 = v116 - 1;
      if ( v116 > v124 )
        v22 = v116;
      v24 = v116 - v22;
      while ( 1 )
      {
        v25 = *(_BYTE *)(v121 + v21) & 0x3F;
        v26 = 32 - v25;
        v27 = v114 >> v25;
        v28 = v25 - 32;
        v29 = v27 | (v115 << v26);
        if ( v28 >= 0 )
          v29 = v115 >> v28;
        if ( (v29 & 1) == 0 )
        {
          v5 += v124;
          goto LABEL_35;
        }
        v18 = v116 + v5;
        v30 = 0;
        while ( v24 + v30 )
        {
          if ( v18 + v30 >= v122 )
          {
            if ( v122 > v18 )
              v18 = v122;
            v94 = &off_2ED964;
LABEL_183:
            core::panicking::panic_bounds_check(v18, v122, (int)v94);
          }
          v31 = *(unsigned __int8 *)(v121 + v116 + v5 + v30);
          v32 = *(unsigned __int8 *)(v123 + v116 + v30++);
          if ( v32 != v31 )
          {
            v5 += v30;
            goto LABEL_35;
          }
        }
        if ( v116 - 1 >= v124 )
          break;
        v33 = (unsigned __int8 *)(v123 + v116 - 1);
        v18 = v23 + v5;
        v34 = v23;
        v35 = v116;
        do
        {
          if ( !v35 )
            goto LABEL_185;
          if ( v18 >= v122 )
          {
LABEL_179:
            v94 = &off_2ED984;
            goto LABEL_183;
          }
          v36 = *(unsigned __int8 *)(v121 + v18);
          --v35;
          v37 = *v33--;
          --v18;
        }
        while ( v37 == v36 );
        v23 = v34;
        v5 += v118;
LABEL_35:
        v21 = v5 + v107;
        if ( v5 + v107 >= v122 )
          goto LABEL_50;
      }
      if ( v116 )
      {
        v17 = v23;
LABEL_225:
        core::panicking::panic_bounds_check(v17, v124, (int)&off_2ED974);
      }
LABEL_185:
      v19 = a3;
      v20 = v5 + 6;
      if ( v5 == -6 )
        goto LABEL_190;
      goto LABEL_186;
    }
LABEL_50:
    v19 = a3;
    goto LABEL_51;
  }
  do
    sub_22BA14(&v125, (int)&v112);
  while ( v125 == 1 );
  if ( v125 )
    goto LABEL_50;
  v5 = v126;
  v19 = a3;
  v20 = v126 + 6;
  if ( v126 == -6 )
    goto LABEL_190;
LABEL_186:
  if ( v20 >= v19 )
  {
    if ( v20 != v19 )
      goto LABEL_188;
  }
  else if ( v3[v20] <= -65 )
  {
LABEL_188:
    v41 = v19;
    v42 = &off_2EDC84;
    goto LABEL_221;
  }
LABEL_190:
  if ( v20 != v19 )
  {
    v95 = &v3[v20];
    do
    {
      v96 = v95;
      v97 = *v95++;
      v98 = (unsigned __int8)v97;
      if ( v97 <= -1 )
      {
        v99 = v98 & 0x1F;
        v100 = v96[1] & 0x3F;
        if ( v98 <= 0xDF )
        {
          v98 = v100 | (v99 << 6);
          v95 = v96 + 2;
          if ( v98 - 65 < 6 )
            continue;
        }
        else
        {
          v101 = v96[2] & 0x3F | (v100 << 6);
          if ( v98 < 0xF0 )
          {
            v98 = v101 | (v99 << 12);
            v95 = v96 + 3;
            if ( v98 - 65 < 6 )
              continue;
          }
          else
          {
            v98 = v96[3] & 0x3F | (v101 << 6) | ((v98 & 7) << 18);
            if ( v98 == 1114112 )
              break;
            v95 = v96 + 4;
            if ( v98 - 65 < 6 )
              continue;
          }
        }
      }
      else if ( v98 - 65 < 6 )
      {
        continue;
      }
      if ( v98 < 0x30 || v98 >= 0x3A && v98 != 64 )
        goto LABEL_51;
    }
    while ( v95 != &v3[v19] );
  }
  if ( !v5 )
  {
    v19 = 0;
    v58 = 0;
    v50 = aRustc9eb3afe9e_2;
    goto LABEL_213;
  }
  if ( v5 < v19 )
  {
    if ( v3[v5] > -65 )
    {
      v19 = v5;
      goto LABEL_51;
    }
LABEL_216:
    core::str::slice_error_fail(v3, v19, 0, v5, (int)&off_2EDC94);
  }
  if ( v5 != v19 )
    goto LABEL_216;
LABEL_51:
  if ( v19 < 3 )
  {
    if ( v19 != 2 )
      goto LABEL_93;
    if ( *(_WORD *)v3 != 20058 )
    {
LABEL_90:
      v19 = 2;
      if ( *v3 == 82 )
        goto LABEL_91;
LABEL_93:
      v58 = 0;
      v50 = aRustc9eb3afe9e_2;
      goto LABEL_213;
    }
    v38 = -2;
    v19 = 2;
    goto LABEL_65;
  }
  v39 = 3;
  if ( bcmp(&unk_2BC1BE, v3, 3u) )
  {
    if ( *(_WORD *)v3 == 20058 )
    {
      if ( v3[2] <= -65 )
      {
        v41 = v19;
        v20 = 2;
        v42 = &off_2EDA04;
        goto LABEL_221;
      }
      v38 = -2;
LABEL_65:
      v39 = 2;
      goto LABEL_67;
    }
    v40 = 3;
    if ( v19 < 4 )
      goto LABEL_86;
    if ( *(_DWORD *)v3 != 1314545503 )
    {
      v40 = v19;
      goto LABEL_86;
    }
    v38 = -4;
    v39 = 4;
    if ( v19 < 5 )
    {
      v19 = 4;
    }
    else if ( v3[4] <= -65 )
    {
      v41 = v19;
      v20 = 4;
      v42 = &off_2EDA14;
      goto LABEL_221;
    }
  }
  else
  {
    v38 = -3;
    if ( v19 < 4 )
    {
      v19 = 3;
    }
    else if ( v3[3] <= -65 )
    {
      v41 = v19;
      v20 = 3;
      v42 = &off_2ED9F4;
      goto LABEL_221;
    }
  }
LABEL_67:
  v43 = v38 + v19;
  v44 = &v3[v39];
  v45 = &v44[v38 + v19];
  v110 = v19;
  v46 = v38 + v19;
  v47 = v44;
  while ( v46 )
  {
    v48 = *v47++;
    --v46;
    if ( v48 <= -1 )
      goto LABEL_84;
  }
  if ( !v43 )
    goto LABEL_84;
  v50 = v44 + 1;
  v49 = *v44;
  v51 = (unsigned __int8)v49;
  if ( v49 <= -1 )
  {
    v52 = v49 & 0x1F;
    v53 = v44[1] & 0x3F;
    if ( v51 <= 0xDF )
    {
      v51 = v53 | (v52 << 6);
      v50 = v44 + 2;
    }
    else
    {
      v54 = v44[2] & 0x3F | (v53 << 6);
      if ( v51 < 0xF0 )
      {
        v51 = v54 | (v52 << 12);
        v50 = v44 + 3;
      }
      else
      {
        v50 = v44 + 4;
        v51 = v44[3] & 0x3F | (v54 << 6) | ((v52 & 7) << 18);
      }
    }
  }
  if ( v51 != 69 )
  {
    if ( v51 != 1114112 )
    {
      v58 = 0;
      while ( 1 )
      {
        v69 = v51 - 48;
        if ( v51 - 48 > 9 )
          break;
        v70 = 0;
        do
        {
          v72 = v70;
          v71 = (10 * (unsigned __int64)v70) >> 32;
          v73 = (10 * v70 + (unsigned __int64)v69) >> 32;
          v70 = 10 * v70 + v69;
          v74 = v71 == 0;
          if ( is_mul_ok(v72, 0xAu) )
            v74 = v73 == 0;
          if ( !v74 )
            goto LABEL_84;
          v75 = v50;
          if ( v50 == v45 )
            goto LABEL_84;
          ++v50;
          v76 = *v75;
          v51 = (unsigned __int8)v76;
          if ( v76 <= -1 )
          {
            v77 = v76 & 0x1F;
            v78 = v75[1] & 0x3F;
            if ( (unsigned __int8)v76 <= 0xDFu )
            {
              v51 = v78 | (v77 << 6);
              v50 = v75 + 2;
            }
            else
            {
              v79 = v75[2] & 0x3F | (v78 << 6);
              if ( (unsigned __int8)v76 < 0xF0u )
              {
                v51 = v79 | (v77 << 12);
                v50 = v75 + 3;
              }
              else
              {
                v51 = v75[3] & 0x3F | (v79 << 6) | ((v76 & 7) << 18);
                if ( v51 == 1114112 )
                  goto LABEL_84;
                v50 = v75 + 4;
              }
            }
          }
          v69 = v51 - 48;
        }
        while ( v51 - 48 < 0xA );
        if ( v70 )
        {
          while ( v50 != v45 )
          {
            v80 = v50;
            v81 = *v50++;
            v51 = (unsigned __int8)v81;
            if ( v81 <= -1 )
            {
              v82 = v51 & 0x1F;
              v83 = v80[1] & 0x3F;
              if ( v51 <= 0xDF )
              {
                v51 = v83 | (v82 << 6);
                v50 = v80 + 2;
              }
              else
              {
                v84 = v80[2] & 0x3F | (v83 << 6);
                if ( v51 < 0xF0 )
                {
                  v51 = v84 | (v82 << 12);
                  v50 = v80 + 3;
                }
                else
                {
                  v51 = v80[3] & 0x3F | (v84 << 6) | ((v51 & 7) << 18);
                  if ( v51 == 1114112 )
                    goto LABEL_84;
                  v50 = v80 + 4;
                }
              }
            }
            if ( !--v70 )
              goto LABEL_137;
          }
          break;
        }
LABEL_137:
        ++v58;
        if ( v51 == 69 )
          goto LABEL_118;
      }
    }
LABEL_84:
    if ( v110 >= 3 )
    {
      v40 = v110;
      v3 = (char *)v111;
LABEL_86:
      if ( *(_WORD *)v3 == 21087 )
      {
        v43 = (int)(v3 + 2);
        v59 = v3[2];
        if ( v59 > -65 )
        {
          v56 = (unsigned __int8)v59;
          v57 = -2;
LABEL_96:
          v19 = v40;
          goto LABEL_97;
        }
        v103 = v40;
        v104 = 2;
        v105 = &off_2EDB34;
      }
      else
      {
        if ( *v3 == 82 )
        {
          v19 = v40;
LABEL_91:
          v43 = (int)(v3 + 1);
          v55 = v3[1];
          if ( v55 > -65 )
          {
            v56 = (unsigned __int8)v55;
            v57 = -1;
LABEL_97:
            v58 = 0;
            v50 = aRustc9eb3afe9e_2;
            if ( (unsigned int)(v56 - 65) > 0x19 )
              goto LABEL_213;
            v58 = v57 + v19;
            v60 = 0;
            while ( v58 != v60 )
            {
              v61 = (char *)(v43 + v60++);
              if ( *v61 <= -1 )
              {
                v58 = 0;
                goto LABEL_213;
              }
            }
            v114 = 0;
            v115 = 0;
            v116 = 0;
            v117 = 0;
            v110 = v19;
            v113 = v58;
            v112 = (char *)v43;
            if ( !sub_22F1A4((int)&v112, 0) )
            {
              v62 = v112;
              v63 = v113;
              if ( !v112 )
              {
LABEL_148:
                v58 = v63 & 1;
                goto LABEL_213;
              }
              v64 = v114;
              v65 = (unsigned __int8)v113 | ((*(unsigned __int16 *)((char *)&v113 + 1) | (HIBYTE(v113) << 16)) << 8);
              if ( v114 >= v65 || (unsigned int)(unsigned __int8)v112[v114] - 65 >= 0x1A )
              {
LABEL_112:
                if ( v64 )
                {
                  if ( v65 <= v64 )
                  {
                    if ( v65 != v64 )
LABEL_115:
                      core::str::slice_error_fail(v62, v65, v64, v65, (int)&off_2EDB64);
                  }
                  else if ( v62[v64] <= -65 )
                  {
                    goto LABEL_115;
                  }
                }
                v66 = v65 - v64;
                v50 = &v62[v64];
                v44 = 0;
                v67 = 1;
                if ( v66 )
                  goto LABEL_153;
LABEL_119:
                v68 = 0;
                v19 = v110;
                goto LABEL_214;
              }
              v113 = (unsigned __int8)v113 | ((*(unsigned __int16 *)((char *)&v113 + 1) | (HIBYTE(v113) << 16)) << 8);
              v116 = 0;
              v117 = 0;
              if ( !sub_22F1A4((int)&v112, 0) )
              {
                v62 = v112;
                v63 = v113;
                if ( v112 )
                {
                  v64 = v114;
                  v65 = (unsigned __int8)v113 | ((*(unsigned __int16 *)((char *)&v113 + 1) | (HIBYTE(v113) << 16)) << 8);
                  goto LABEL_112;
                }
                goto LABEL_148;
              }
            }
            core::result::unwrap_failed((int)aFmtErrorSShoul, 61, (int)&v125, (int)&off_2ED9A4, (int)&off_2EDB74);
          }
          v41 = v19;
          v20 = 1;
          v42 = &off_2EDB44;
LABEL_221:
          core::str::slice_error_fail(v3, v41, v20, v19, (int)v42);
        }
        v50 = aRustc9eb3afe9e_2;
        if ( v40 <= 3 )
        {
          v58 = 0;
          v19 = 3;
          goto LABEL_213;
        }
        v58 = 0;
        if ( bcmp(&unk_2BC2E2, v3, 3u) )
        {
          v19 = v40;
LABEL_213:
          v43 = 0;
          v44 = 0;
          v67 = 0;
          v68 = 0;
          goto LABEL_214;
        }
        v43 = (int)(v3 + 3);
        v85 = v3[3];
        if ( v85 > -65 )
        {
          v56 = (unsigned __int8)v85;
          v57 = -3;
          goto LABEL_96;
        }
        v103 = v40;
        v104 = 3;
        v105 = &off_2EDB54;
      }
      core::str::slice_error_fail(v3, v103, v104, v40, (int)v105);
    }
    v3 = (char *)v111;
    goto LABEL_90;
  }
  v58 = 0;
LABEL_118:
  v66 = v45 - v50;
  v67 = 1;
  if ( !v66 )
    goto LABEL_119;
LABEL_153:
  v68 = 0;
  if ( *v50 == 46 )
  {
    v86 = 46;
    v87 = v50;
    if ( __OFADD__(46, 1) )
      goto LABEL_156;
LABEL_162:
    ++v87;
    while ( 1 )
    {
      v91 = v86 - 33 >= 0x19;
      if ( v86 - 33 >= 0x19 )
        v91 = (v86 & 0xFFFFFFDF) - 65 >= 0x1A;
      if ( v91 )
      {
        v92 = v86 - 58 >= 7;
        if ( v86 - 58 >= 7 )
          v92 = v86 - 91 >= 6;
        if ( v92 && v86 - 123 > 3 )
          break;
      }
      if ( v87 == &v50[v66] )
      {
LABEL_175:
        v68 = v66;
        v19 = v110;
        goto LABEL_214;
      }
      v86 = *(unsigned __int8 *)v87;
      if ( (char)v86 > -1 )
        goto LABEL_162;
LABEL_156:
      v88 = v86 & 0x1F;
      v89 = v87[1] & 0x3F;
      if ( v86 <= 0xDF )
      {
        v86 = v89 | (v88 << 6);
        v87 += 2;
      }
      else
      {
        v90 = v87[2] & 0x3F | (v89 << 6);
        if ( v86 < 0xF0 )
        {
          v86 = v90 | (v88 << 12);
          v87 += 3;
        }
        else
        {
          v86 = v87[3] & 0x3F | (v90 << 6) | ((v86 & 7) << 18);
          if ( v86 == 1114112 )
            goto LABEL_175;
          v87 += 4;
        }
      }
    }
  }
  v67 = 0;
  v50 = aRustc9eb3afe9e_2;
  v19 = v110;
LABEL_214:
  *a1 = v67;
  a1[1] = (int)v44;
  a1[2] = v43;
  a1[3] = v58;
  a1[4] = v111;
  a1[5] = v19;
  a1[6] = (int)v50;
  a1[7] = v68;
  return (char *)v111;
}
