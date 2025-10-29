char *__fastcall rustc_demangle::demangle(int *a1, int a2, int a3)
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
  char *v41; // r9
  char *v42; // r10
  const char *v43; // r1
  unsigned int v44; // r2
  char *v45; // r3
  int v46; // t1
  int v47; // r2
  const char *v48; // r11
  unsigned int v49; // r7
  int v50; // r2
  int v51; // r3
  int v52; // r3
  int v53; // r0
  int v54; // r1
  int v55; // r0
  int v56; // r8
  int v57; // r0
  int v58; // r0
  char *v59; // r1
  int v60; // r0
  char v61; // r1
  unsigned int v62; // r2
  unsigned int v63; // r1
  int v64; // lr
  int v65; // r1
  int v66; // r2
  unsigned int v67; // r5
  unsigned int v68; // r2
  int v69; // r4
  unsigned int v70; // kr00_4
  int v71; // r7
  bool v72; // zf
  const char *v73; // r6
  int v74; // r3
  int v75; // r5
  int v76; // r4
  int v77; // r4
  const char *v78; // r4
  int v79; // t1
  int v80; // r6
  int v81; // r5
  int v82; // r5
  int v83; // r0
  unsigned int v84; // r3
  const char *v85; // r5
  int v86; // r4
  int v87; // r6
  int v88; // r6
  bool v89; // cf
  bool v90; // cf
  int v91; // r0
  char **v92; // r2
  char *v93; // r2
  char *v94; // r7
  int v95; // t1
  unsigned int v96; // r1
  int v97; // r2
  int v98; // r6
  int v99; // r6
  unsigned int v101; // [sp+20h] [bp-10h]
  unsigned int v102; // [sp+20h] [bp-10h]
  unsigned int v105; // [sp+28h] [bp-8h]
  char *v106; // [sp+2Ch] [bp-4h]
  int v107; // [sp+30h] [bp+0h] BYREF
  int v108; // [sp+34h] [bp+4h]
  unsigned int v109; // [sp+38h] [bp+8h]
  unsigned int v110; // [sp+3Ch] [bp+Ch]
  unsigned int v111; // [sp+40h] [bp+10h]
  int v112; // [sp+44h] [bp+14h]
  int v113; // [sp+48h] [bp+18h]
  unsigned int v114; // [sp+4Ch] [bp+1Ch]
  unsigned int v115; // [sp+54h] [bp+24h]
  int v116; // [sp+60h] [bp+30h]
  unsigned int v117; // [sp+64h] [bp+34h]
  int v118; // [sp+68h] [bp+38h]
  unsigned int v119; // [sp+6Ch] [bp+3Ch]
  int v120; // [sp+70h] [bp+40h] BYREF
  unsigned int v121; // [sp+74h] [bp+44h]

  v3 = (char *)a2;
  core::str::pattern::StrSearcher::new((int)&v107, a2, a3, &unk_2B0B6F, 6);
  v106 = v3;
  if ( v107 )
  {
    v4 = v115;
    if ( v115 != -1 )
    {
      v5 = v114;
      v101 = v119 - 1;
      v6 = v114 + v119 - 1;
      if ( v6 < v117 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *(_BYTE *)(v116 + v6) & 0x3F;
            v8 = 32 - v7;
            v9 = v109 >> v7;
            v10 = v7 - 32;
            v11 = v9 | (v110 << v8);
            if ( v10 >= 0 )
              v11 = v110 >> v10;
            if ( (v11 & 1) == 0 )
              break;
            v12 = v4;
            v13 = v119;
            if ( v111 > v4 )
              v12 = v111;
            if ( v12 > v119 )
              v13 = v12;
            v14 = v12;
            while ( v13 != v14 )
            {
              if ( v5 + v14 >= v117 )
              {
                v91 = v12 + v5;
                if ( v117 > v12 + v5 )
                  v91 = v117;
                core::panicking::panic_bounds_check(v91, v117, (int)&off_2E2964);
              }
              v15 = *(unsigned __int8 *)(v116 + v5 + v14);
              v16 = *(unsigned __int8 *)(v118 + v14++);
              if ( v16 != v15 )
              {
                v5 = v5 - v111 + v14;
                goto LABEL_6;
              }
            }
            v17 = v111;
            do
            {
              if ( v4 >= v17 )
                goto LABEL_185;
              if ( --v17 >= v119 )
                goto LABEL_223;
              v18 = v17 + v5;
              if ( v17 + v5 >= v117 )
                goto LABEL_179;
            }
            while ( *(unsigned __int8 *)(v118 + v17) == *(unsigned __int8 *)(v116 + v18) );
            v4 = v119 - v113;
            v5 += v113;
            v6 = v5 + v101;
            if ( v5 + v101 >= v117 )
              goto LABEL_50;
          }
          v5 += v119;
LABEL_6:
          v4 = 0;
          v6 = v5 + v101;
        }
        while ( v5 + v101 < v117 );
      }
      goto LABEL_50;
    }
    v5 = v114;
    v102 = v119 - 1;
    v21 = v114 + v119 - 1;
    if ( v21 < v117 )
    {
      v22 = v119;
      v23 = v111 - 1;
      if ( v111 > v119 )
        v22 = v111;
      v24 = v111 - v22;
      while ( 1 )
      {
        v25 = *(_BYTE *)(v116 + v21) & 0x3F;
        v26 = 32 - v25;
        v27 = v109 >> v25;
        v28 = v25 - 32;
        v29 = v27 | (v110 << v26);
        if ( v28 >= 0 )
          v29 = v110 >> v28;
        if ( (v29 & 1) == 0 )
        {
          v5 += v119;
          goto LABEL_35;
        }
        v18 = v111 + v5;
        v30 = 0;
        while ( v24 + v30 )
        {
          if ( v18 + v30 >= v117 )
          {
            if ( v117 > v18 )
              v18 = v117;
            v92 = &off_2E2964;
LABEL_183:
            core::panicking::panic_bounds_check(v18, v117, (int)v92);
          }
          v31 = *(unsigned __int8 *)(v116 + v111 + v5 + v30);
          v32 = *(unsigned __int8 *)(v118 + v111 + v30++);
          if ( v32 != v31 )
          {
            v5 += v30;
            goto LABEL_35;
          }
        }
        if ( v111 - 1 >= v119 )
          break;
        v33 = (unsigned __int8 *)(v118 + v111 - 1);
        v18 = v23 + v5;
        v34 = v23;
        v35 = v111;
        do
        {
          if ( !v35 )
            goto LABEL_185;
          if ( v18 >= v117 )
          {
LABEL_179:
            v92 = &off_2E2984;
            goto LABEL_183;
          }
          v36 = *(unsigned __int8 *)(v116 + v18);
          --v35;
          v37 = *v33--;
          --v18;
        }
        while ( v37 == v36 );
        v23 = v34;
        v5 += v113;
LABEL_35:
        v21 = v5 + v102;
        if ( v5 + v102 >= v117 )
          goto LABEL_50;
      }
      if ( v111 )
      {
        v17 = v23;
LABEL_223:
        core::panicking::panic_bounds_check(v17, v119, (int)&off_2E2974);
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
    sub_227CDC(&v120, (int)&v107);
  while ( v120 == 1 );
  if ( v120 )
    goto LABEL_50;
  v5 = v121;
  v19 = a3;
  v20 = v121 + 6;
  if ( v121 == -6 )
    goto LABEL_190;
LABEL_186:
  if ( v20 >= v19 )
  {
    if ( v20 != v19 )
      goto LABEL_219;
  }
  else if ( v3[v20] <= -65 )
  {
    goto LABEL_219;
  }
LABEL_190:
  if ( v20 != v19 )
  {
    v93 = &v3[v20];
    do
    {
      v94 = v93;
      v95 = *v93++;
      v96 = (unsigned __int8)v95;
      if ( v95 <= -1 )
      {
        v97 = v96 & 0x1F;
        v98 = v94[1] & 0x3F;
        if ( v96 <= 0xDF )
        {
          v96 = v98 | (v97 << 6);
          v93 = v94 + 2;
          if ( v96 - 65 < 6 )
            continue;
        }
        else
        {
          v99 = v94[2] & 0x3F | (v98 << 6);
          if ( v96 < 0xF0 )
          {
            v96 = v99 | (v97 << 12);
            v93 = v94 + 3;
            if ( v96 - 65 < 6 )
              continue;
          }
          else
          {
            v96 = v94[3] & 0x3F | (v99 << 6) | ((v96 & 7) << 18);
            if ( v96 == 1114112 )
              break;
            v93 = v94 + 4;
            if ( v96 - 65 < 6 )
              continue;
          }
        }
      }
      else if ( v96 - 65 < 6 )
      {
        continue;
      }
      if ( v96 < 0x30 || v96 >= 0x3A && v96 != 64 )
        goto LABEL_51;
    }
    while ( v93 != &v3[v19] );
  }
  if ( !v5 )
  {
    v19 = 0;
    v56 = 0;
    v48 = aRustc9eb3afe9e_2;
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
    core::str::slice_error_fail((int)v3);
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
      {
LABEL_91:
        v41 = v3 + 1;
        v53 = v3[1];
        if ( v53 > -65 )
        {
          v54 = (unsigned __int8)v53;
          v55 = -1;
LABEL_97:
          v56 = 0;
          v48 = aRustc9eb3afe9e_2;
          if ( (unsigned int)(v54 - 65) > 0x19 )
            goto LABEL_213;
          v56 = v55 + v19;
          v58 = 0;
          while ( v56 != v58 )
          {
            v59 = &v41[v58++];
            if ( *v59 <= -1 )
            {
              v56 = 0;
              goto LABEL_213;
            }
          }
          v109 = 0;
          v110 = 0;
          v111 = 0;
          v112 = 0;
          v105 = v19;
          v108 = v56;
          v107 = (int)v41;
          if ( !sub_22B46C((int)&v107, 0) )
          {
            v60 = v107;
            v61 = v108;
            if ( !v107 )
            {
LABEL_148:
              v56 = v61 & 1;
              goto LABEL_213;
            }
            v62 = v109;
            v63 = (unsigned __int8)v108 | ((*(unsigned __int16 *)((char *)&v108 + 1) | (HIBYTE(v108) << 16)) << 8);
            if ( v109 >= v63 || (unsigned int)*(unsigned __int8 *)(v107 + v109) - 65 >= 0x1A )
            {
LABEL_112:
              if ( v62 )
              {
                if ( v63 <= v62 )
                {
                  if ( v63 != v62 )
LABEL_115:
                    core::str::slice_error_fail(v60);
                }
                else if ( *(char *)(v60 + v62) <= -65 )
                {
                  goto LABEL_115;
                }
              }
              v64 = v63 - v62;
              v48 = (const char *)(v60 + v62);
              v42 = 0;
              v65 = 1;
              if ( v64 )
                goto LABEL_153;
LABEL_119:
              v66 = 0;
              v19 = v105;
              goto LABEL_214;
            }
            v108 = (unsigned __int8)v108 | ((*(unsigned __int16 *)((char *)&v108 + 1) | (HIBYTE(v108) << 16)) << 8);
            v111 = 0;
            v112 = 0;
            if ( !sub_22B46C((int)&v107, 0) )
            {
              v60 = v107;
              v61 = v108;
              if ( v107 )
              {
                v62 = v109;
                v63 = (unsigned __int8)v108 | ((*(unsigned __int16 *)((char *)&v108 + 1) | (HIBYTE(v108) << 16)) << 8);
                goto LABEL_112;
              }
              goto LABEL_148;
            }
          }
          core::result::unwrap_failed((int)aFmtErrorSShoul, 61, (int)&v120, (int)&off_2E29A4, (int)&off_2E2B74);
        }
LABEL_219:
        core::str::slice_error_fail((int)v3);
      }
LABEL_93:
      v56 = 0;
      v48 = aRustc9eb3afe9e_2;
      goto LABEL_213;
    }
    v38 = -2;
    v19 = 2;
    goto LABEL_65;
  }
  v39 = 3;
  if ( bcmp(&unk_2B08BE, v3, 3u) )
  {
    if ( *(_WORD *)v3 == 20058 )
    {
      if ( v3[2] <= -65 )
        goto LABEL_219;
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
      goto LABEL_219;
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
      goto LABEL_219;
    }
  }
LABEL_67:
  v41 = (char *)(v38 + v19);
  v42 = &v3[v39];
  v43 = &v42[v38 + v19];
  v105 = v19;
  v44 = v38 + v19;
  v45 = v42;
  while ( v44 )
  {
    v46 = *v45++;
    --v44;
    if ( v46 <= -1 )
      goto LABEL_84;
  }
  if ( !v41 )
    goto LABEL_84;
  v48 = v42 + 1;
  v47 = *v42;
  v49 = (unsigned __int8)v47;
  if ( v47 <= -1 )
  {
    v50 = v47 & 0x1F;
    v51 = v42[1] & 0x3F;
    if ( v49 <= 0xDF )
    {
      v49 = v51 | (v50 << 6);
      v48 = v42 + 2;
    }
    else
    {
      v52 = v42[2] & 0x3F | (v51 << 6);
      if ( v49 < 0xF0 )
      {
        v49 = v52 | (v50 << 12);
        v48 = v42 + 3;
      }
      else
      {
        v48 = v42 + 4;
        v49 = v42[3] & 0x3F | (v52 << 6) | ((v50 & 7) << 18);
      }
    }
  }
  if ( v49 != 69 )
  {
    if ( v49 != 1114112 )
    {
      v56 = 0;
      while ( 1 )
      {
        v67 = v49 - 48;
        if ( v49 - 48 > 9 )
          break;
        v68 = 0;
        do
        {
          v70 = v68;
          v69 = (10 * (unsigned __int64)v68) >> 32;
          v71 = (10 * v68 + (unsigned __int64)v67) >> 32;
          v68 = 10 * v68 + v67;
          v72 = v69 == 0;
          if ( is_mul_ok(v70, 0xAu) )
            v72 = v71 == 0;
          if ( !v72 )
            goto LABEL_84;
          v73 = v48;
          if ( v48 == v43 )
            goto LABEL_84;
          ++v48;
          v74 = *v73;
          v49 = (unsigned __int8)v74;
          if ( v74 <= -1 )
          {
            v75 = v74 & 0x1F;
            v76 = v73[1] & 0x3F;
            if ( (unsigned __int8)v74 <= 0xDFu )
            {
              v49 = v76 | (v75 << 6);
              v48 = v73 + 2;
            }
            else
            {
              v77 = v73[2] & 0x3F | (v76 << 6);
              if ( (unsigned __int8)v74 < 0xF0u )
              {
                v49 = v77 | (v75 << 12);
                v48 = v73 + 3;
              }
              else
              {
                v49 = v73[3] & 0x3F | (v77 << 6) | ((v74 & 7) << 18);
                if ( v49 == 1114112 )
                  goto LABEL_84;
                v48 = v73 + 4;
              }
            }
          }
          v67 = v49 - 48;
        }
        while ( v49 - 48 < 0xA );
        if ( v68 )
        {
          while ( v48 != v43 )
          {
            v78 = v48;
            v79 = *v48++;
            v49 = (unsigned __int8)v79;
            if ( v79 <= -1 )
            {
              v80 = v49 & 0x1F;
              v81 = v78[1] & 0x3F;
              if ( v49 <= 0xDF )
              {
                v49 = v81 | (v80 << 6);
                v48 = v78 + 2;
              }
              else
              {
                v82 = v78[2] & 0x3F | (v81 << 6);
                if ( v49 < 0xF0 )
                {
                  v49 = v82 | (v80 << 12);
                  v48 = v78 + 3;
                }
                else
                {
                  v49 = v78[3] & 0x3F | (v82 << 6) | ((v49 & 7) << 18);
                  if ( v49 == 1114112 )
                    goto LABEL_84;
                  v48 = v78 + 4;
                }
              }
            }
            if ( !--v68 )
              goto LABEL_137;
          }
          break;
        }
LABEL_137:
        ++v56;
        if ( v49 == 69 )
          goto LABEL_118;
      }
    }
LABEL_84:
    if ( v105 >= 3 )
    {
      v40 = v105;
      v3 = v106;
LABEL_86:
      if ( *(_WORD *)v3 == 21087 )
      {
        v41 = v3 + 2;
        v57 = v3[2];
        if ( v57 > -65 )
        {
          v54 = (unsigned __int8)v57;
          v55 = -2;
LABEL_96:
          v19 = v40;
          goto LABEL_97;
        }
      }
      else
      {
        if ( *v3 == 82 )
        {
          v19 = v40;
          goto LABEL_91;
        }
        v48 = aRustc9eb3afe9e_2;
        if ( v40 <= 3 )
        {
          v56 = 0;
          v19 = 3;
          goto LABEL_213;
        }
        v56 = 0;
        if ( bcmp(&unk_2B09E2, v3, 3u) )
        {
          v19 = v40;
LABEL_213:
          v41 = 0;
          v42 = 0;
          v65 = 0;
          v66 = 0;
          goto LABEL_214;
        }
        v41 = v3 + 3;
        v83 = v3[3];
        if ( v83 > -65 )
        {
          v54 = (unsigned __int8)v83;
          v55 = -3;
          goto LABEL_96;
        }
      }
      core::str::slice_error_fail((int)v3);
    }
    v3 = v106;
    goto LABEL_90;
  }
  v56 = 0;
LABEL_118:
  v64 = v43 - v48;
  v65 = 1;
  if ( !v64 )
    goto LABEL_119;
LABEL_153:
  v66 = 0;
  if ( *v48 == 46 )
  {
    v84 = 46;
    v85 = v48;
    if ( __OFADD__(46, 1) )
      goto LABEL_156;
LABEL_162:
    ++v85;
    while ( 1 )
    {
      v89 = v84 - 33 >= 0x19;
      if ( v84 - 33 >= 0x19 )
        v89 = (v84 & 0xFFFFFFDF) - 65 >= 0x1A;
      if ( v89 )
      {
        v90 = v84 - 58 >= 7;
        if ( v84 - 58 >= 7 )
          v90 = v84 - 91 >= 6;
        if ( v90 && v84 - 123 > 3 )
          break;
      }
      if ( v85 == &v48[v64] )
      {
LABEL_175:
        v66 = v64;
        v19 = v105;
        goto LABEL_214;
      }
      v84 = *(unsigned __int8 *)v85;
      if ( (char)v84 > -1 )
        goto LABEL_162;
LABEL_156:
      v86 = v84 & 0x1F;
      v87 = v85[1] & 0x3F;
      if ( v84 <= 0xDF )
      {
        v84 = v87 | (v86 << 6);
        v85 += 2;
      }
      else
      {
        v88 = v85[2] & 0x3F | (v87 << 6);
        if ( v84 < 0xF0 )
        {
          v84 = v88 | (v86 << 12);
          v85 += 3;
        }
        else
        {
          v84 = v85[3] & 0x3F | (v88 << 6) | ((v84 & 7) << 18);
          if ( v84 == 1114112 )
            goto LABEL_175;
          v85 += 4;
        }
      }
    }
  }
  v65 = 0;
  v48 = aRustc9eb3afe9e_2;
  v19 = v105;
LABEL_214:
  *a1 = v65;
  a1[1] = (int)v42;
  a1[2] = (int)v41;
  a1[3] = v56;
  a1[4] = (int)v106;
  a1[5] = v19;
  a1[6] = (int)v48;
  a1[7] = v66;
  return v106;
}
