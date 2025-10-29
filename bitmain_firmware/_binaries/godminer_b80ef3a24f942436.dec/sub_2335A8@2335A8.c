unsigned int __fastcall sub_2335A8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int result; // r0
  unsigned int v9; // r12
  unsigned int v10; // r2
  unsigned __int8 *v11; // r1
  int v12; // r2
  unsigned __int16 *v13; // r5
  unsigned int v14; // r6
  _DWORD *v15; // r9
  int v16; // r1
  __int16 *v17; // r0
  _WORD *v18; // r3
  __int16 v19; // r2
  int v20; // r0
  char **v21; // r2
  unsigned int v22; // r8
  __int16 *v23; // r11
  int v24; // r0
  unsigned int v25; // t1
  _DWORD *v26; // r1
  int v27; // r4
  unsigned int v28; // r0
  int v29; // r5
  int i; // r0
  int v31; // r1
  __int16 *v32; // r1
  __int16 v33; // r2
  unsigned int v34; // r0
  unsigned int v35; // r4
  __int16 v36; // r5
  _WORD *v37; // r0
  int v38; // r4
  int j; // r1
  int v40; // r2
  unsigned __int16 *v41; // r1
  unsigned int v42; // r7
  unsigned int v43; // r3
  unsigned __int16 v44; // r4
  _WORD *v45; // r0
  unsigned int v46; // r0
  _WORD *v47; // r2
  unsigned int v48; // r1
  int v49; // r7
  unsigned int v50; // r12
  unsigned int v51; // r3
  unsigned int v52; // r5
  _WORD *v53; // r5
  _WORD *v54; // r4
  _WORD *v55; // r6
  int v56; // r1
  int v57; // r7
  _WORD *v58; // r3
  unsigned int v59; // r1
  int v60; // r3
  unsigned __int16 v61; // r2
  int v62; // r12
  unsigned __int16 *v63; // r6
  int v64; // r7
  unsigned __int16 *v65; // r6
  int v66; // r1
  unsigned __int16 *v67; // r2
  unsigned int v68; // r8
  int v69; // r4
  unsigned int v70; // r2
  int v71; // r0
  int v72; // r3
  _DWORD *v73; // r12
  unsigned int v74; // r1
  int v75; // r2
  unsigned int v76; // r0
  int v77; // r2
  unsigned int v78; // r5
  _DWORD *v79; // r3
  unsigned int v80; // r6
  int v81; // r4
  char **v82; // r2
  int v83; // r5
  int v84; // r7
  unsigned int v85; // r2
  int v86; // r11
  char v87; // r9
  unsigned int v88; // r1
  bool v89; // zf
  int v90; // r3
  unsigned int v91; // r4
  int v92; // r4
  char *v93; // r12
  unsigned int v94; // r1
  unsigned int v95; // r3
  int v96; // r7
  unsigned int v97; // r1
  int v98; // r3
  int v99; // r7
  unsigned int v100; // r12
  _WORD *v101; // r1
  unsigned int v102; // r6
  unsigned int v103; // r4
  __int16 v104; // r5
  int v105; // [sp+4h] [bp-1628h]
  int v106; // [sp+8h] [bp-1624h]
  int v107; // [sp+Ch] [bp-1620h]
  char *v108; // [sp+Ch] [bp-1620h]
  unsigned int v110; // [sp+14h] [bp-1618h]
  _DWORD s[34]; // [sp+18h] [bp-1614h] BYREF
  _DWORD v112[34]; // [sp+A0h] [bp-158Ch] BYREF
  _DWORD v113[288]; // [sp+128h] [bp-1504h] BYREF
  _DWORD v114[288]; // [sp+5A8h] [bp-1084h] BYREF
  _DWORD v115[512]; // [sp+A28h] [bp-C04h] BYREF
  _DWORD v116[257]; // [sp+1228h] [bp-404h] BYREF

  memset(s, 0, 0x84u);
  memset(v112, 0, 0x84u);
  result = a5;
  if ( !a5 )
  {
    v13 = (unsigned __int16 *)v113;
    v14 = 0;
    memset(v113, 0, sizeof(v113));
    v15 = v114;
    memset(v114, 0, sizeof(v114));
    v106 = a1;
    v105 = a2;
    if ( a3 )
    {
      v16 = 0;
      v17 = (__int16 *)(a1 + 576 * a2);
      do
      {
        if ( v16 == 288 )
        {
          v20 = 288;
          v21 = &off_2EDF04;
          goto LABEL_154;
        }
        v19 = *v17;
        if ( *v17 )
        {
          if ( v14 >> 5 > 8 )
          {
            v20 = v14;
            v21 = &off_2EDF14;
            goto LABEL_154;
          }
          v18 = &v113[v14++];
          v18[1] = v16;
          *v18 = v19;
        }
        ++v16;
        ++v17;
      }
      while ( a3 != v16 );
      if ( v14 > 0x120 )
LABEL_170:
        core::slice::index::slice_end_index_len_fail();
      v22 = 0;
      memset(v115, 0, sizeof(v115));
      v23 = (__int16 *)&v113[v14];
      if ( v14 )
      {
        v107 = 0;
        v24 = 4 * v14;
        do
        {
          v25 = *v13;
          v13 += 2;
          v24 -= 4;
          v26 = &v115[v25 >> 8];
          v27 = v26[256];
          ++v115[(unsigned __int8)v25];
          v26[256] = v27 + 1;
        }
        while ( v24 );
        v28 = v115[256];
        v22 = v14;
LABEL_24:
        v110 = v28;
        v29 = 0;
        memset(v116, 0, 0x400u);
        for ( i = 0; i != 256; ++i )
        {
          v31 = v115[i];
          v116[i] = v29;
          v29 += v31;
        }
        if ( !v107 )
        {
          v32 = (__int16 *)v113;
          while ( 1 )
          {
            v33 = *v32;
            v34 = v116[(unsigned __int8)*v32];
            if ( v34 >= v22 )
              break;
            v35 = v34 + 1;
            v36 = v32[1];
            v37 = &v114[v34];
            v32 += 2;
            v116[(unsigned __int8)v33] = v35;
            v37[1] = v36;
            *v37 = v33;
            if ( v32 == v23 )
              goto LABEL_30;
          }
LABEL_151:
          core::panicking::panic_bounds_check(v34, v22, (int)&off_2EDDE4);
        }
LABEL_30:
        if ( v110 != v22 )
        {
          v38 = 0;
          memset(v116, 0, 0x400u);
          for ( j = 0; j != 256; ++j )
          {
            v40 = v115[j + 256];
            v116[j] = v38;
            v38 += v40;
          }
          if ( !v107 )
          {
            v41 = (unsigned __int16 *)v114;
            do
            {
              v42 = *v41;
              v34 = v116[v42 >> 8];
              if ( v34 >= v22 )
                goto LABEL_151;
              v43 = v34 + 1;
              v44 = v41[1];
              v45 = &v113[v34];
              v41 += 2;
              v116[v42 >> 8] = v43;
              v45[1] = v44;
              *v45 = v42;
            }
            while ( v41 != (unsigned __int16 *)&v114[v22] );
          }
          v15 = v113;
        }
        v110 = v22;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            v110 = 1;
            *(_WORD *)v15 = 1;
            goto LABEL_41;
          }
          *(_WORD *)v15 += *((_WORD *)v15 + 2);
          v46 = v22 - 1;
          if ( v22 - 1 < 2 )
          {
            v56 = 0;
            LOWORD(v15[v22 - 2]) = 0;
LABEL_69:
            v60 = 1;
            v61 = 0;
            while ( v56 >= 0 )
            {
              if ( v56 >= v22 )
                core::panicking::panic_bounds_check(v56, v22, (int)&off_2EDE94);
              v62 = v56 + 1;
              v63 = (unsigned __int16 *)&v15[v56];
              v64 = 0;
              do
              {
                if ( *v63 != v61 )
                {
                  v62 = v64;
                  if ( v60 <= v64 )
                    goto LABEL_70;
LABEL_81:
                  v65 = (unsigned __int16 *)&v15[v46];
                  do
                  {
                    if ( v46 >= v22 )
                      core::panicking::panic_bounds_check(v46, v22, (int)&off_2EDEA4);
                    --v60;
                    *v65 = v61;
                    v65 -= 2;
                    --v46;
                  }
                  while ( v60 > v62 );
                  goto LABEL_70;
                }
                --v56;
                v63 -= 2;
                ++v64;
              }
              while ( v56 != -1 );
              v56 = -1;
              if ( v60 > v62 )
                goto LABEL_81;
LABEL_70:
              ++v61;
              v60 = 2 * v62;
              if ( 2 * v62 <= 0 )
              {
                v110 = v22;
                if ( !v107 )
                  goto LABEL_86;
                goto LABEL_89;
              }
            }
            v62 = 0;
            if ( v60 <= 0 )
              goto LABEL_70;
            goto LABEL_81;
          }
          v47 = v15 + 1;
          v48 = 0;
          v49 = 2;
          v50 = 2;
          while ( 2 )
          {
            v51 = v49 - 1;
            if ( v50 >= v22 )
              goto LABEL_49;
            if ( v48 >= v22 )
              core::panicking::panic_bounds_check(v48, v22, (int)&off_2EDDF4);
            v52 = LOWORD(v15[v50]);
            if ( LOWORD(v15[v48]) >= v52 )
            {
              if ( v51 >= v22 )
                core::panicking::panic_bounds_check(v49 - 1, v22, (int)&off_2EDE24);
              ++v50;
              *v47 = v52;
              if ( v50 < v22 )
                goto LABEL_55;
LABEL_58:
              if ( v51 >= v22 )
                core::panicking::panic_bounds_check(v49 - 1, v22, (int)&off_2EDE44);
              if ( v48 >= v22 )
                core::panicking::panic_bounds_check(v48, v22, (int)&off_2EDE54);
              v54 = &v15[v48++];
              *v47 += *v54;
              *v54 = v51;
            }
            else
            {
LABEL_49:
              if ( v48 >= v22 )
                core::panicking::panic_bounds_check(v48, v22, (int)&off_2EDE04);
              if ( v51 >= v22 )
                core::panicking::panic_bounds_check(v49 - 1, v22, (int)&off_2EDE14);
              v53 = &v15[v48++];
              *v47 = *v53;
              *v53 = v51;
              if ( v50 >= v22 )
                goto LABEL_58;
LABEL_55:
              if ( v48 < v51 )
              {
                if ( v48 >= v22 )
                  core::panicking::panic_bounds_check(v48, v22, (int)&off_2EDE34);
                if ( LOWORD(v15[v48]) < (unsigned int)LOWORD(v15[v50]) )
                  goto LABEL_58;
              }
              if ( v51 >= v22 )
                core::panicking::panic_bounds_check(v49 - 1, v22, (int)&off_2EDE64);
              v55 = &v15[v50++];
              *v47 += *v55;
            }
            ++v49;
            v47 += 2;
            if ( v22 == v49 )
            {
              v56 = 0;
              LOWORD(v15[v22 - 2]) = 0;
              if ( v22 != 2 )
              {
                v57 = 2;
                v58 = &v15[v22 - 3];
                do
                {
                  v59 = (unsigned __int16)*v58;
                  if ( v22 <= v59 )
                    core::panicking::panic_bounds_check((unsigned __int16)*v58, v22, (int)&off_2EDE84);
                  ++v57;
                  *v58 = LOWORD(v15[v59]) + 1;
                  v58 -= 2;
                }
                while ( v22 != v57 );
                v56 = v22 - 2;
              }
              goto LABEL_69;
            }
            continue;
          }
        }
LABEL_41:
        if ( !v107 )
        {
LABEL_86:
          v66 = 4 * v22;
          v67 = (unsigned __int16 *)v15;
          do
          {
            result = *v67;
            if ( result >= 0x21 )
            {
              v82 = &off_2EDF34;
              goto LABEL_157;
            }
            v66 -= 4;
            v67 += 2;
            ++s[result];
          }
          while ( v66 );
        }
LABEL_89:
        v68 = a4 + 1;
        if ( v110 >= 2 )
        {
          if ( a4 == 32 )
          {
            v69 = 32;
LABEL_97:
            v73 = &s[v69];
            v74 = 0;
            v75 = 0;
            v76 = v69;
            do
            {
              v74 += v73[-v75] << v75;
              ++v75;
            }
            while ( v69 != v75 );
            if ( v74 > 1 << (v69 & 0x1F) )
            {
              v77 = 1 << (v69 & 0x1F);
              do
              {
                ++v77;
                v78 = v76;
                --*v73;
                v79 = v73 + 1;
                do
                {
                  if ( v78 <= 1 )
                    goto LABEL_102;
                  v80 = v78 - 1;
                  if ( v78 - 1 > 0x20 )
                  {
                    result = v78 - 1;
                    v82 = &off_2EDEC4;
                    goto LABEL_157;
                  }
                  v81 = *(v79 - 2);
                  --v79;
                  --v78;
                }
                while ( !v81 );
                *(v79 - 1) = v81 - 1;
                if ( v80 + 1 > 0x20 )
                {
                  result = 33;
                  v82 = &off_2EDED4;
                  goto LABEL_157;
                }
                *v79 += 2;
LABEL_102:
                ;
              }
              while ( v77 != v74 );
            }
          }
          else
          {
            v70 = a4;
            v71 = 0;
            do
            {
              v72 = s[++v70];
              v71 += v72;
            }
            while ( v70 != 32 );
            v69 = a4;
            s[a4] += v71;
            if ( a4 == -1 )
              core::slice::index::slice_end_index_overflow_fail((int)&off_2EDEB4);
            if ( a4 >= 0x21 )
              core::slice::index::slice_end_index_len_fail();
            if ( a4 )
              goto LABEL_97;
            v68 = 1;
          }
        }
        v83 = 0;
        v84 = v106 + 288 * v105;
        memset((void *)(v84 + 3456), 0, 0x120u);
        memset((void *)(v106 + 576 * v105 + 1728), 0, 0x240u);
        v108 = (char *)v15 + 2;
        v85 = 1;
        v86 = 0;
        v87 = 0;
        result = v110;
LABEL_111:
        v9 = a4;
        do
        {
          v88 = result;
          if ( (v87 & 1) != 0 )
          {
            v89 = v68 == 0;
            if ( v68 )
              v89 = v83 == 33;
            if ( v89 )
            {
LABEL_127:
              a1 = v106;
              a2 = v105;
              v12 = 0;
              v112[1] = 0;
              if ( a4 >= 2 )
                goto LABEL_128;
              goto LABEL_136;
            }
            --v68;
            v90 = v86;
          }
          else
          {
            if ( v68 <= v85 )
              goto LABEL_127;
            result = 132 - 4 * v83;
            if ( v85 >= result >> 2 )
              goto LABEL_127;
            v90 = v85 + v86;
            v68 += ~v85;
            v83 += v85;
          }
          v91 = s[v83];
          result = v88 - v91;
          if ( v88 < v91 )
            core::slice::index::slice_index_order_fail();
          if ( v88 > v110 )
            core::slice::index::slice_end_index_len_fail();
          v86 = v90 + 1;
          ++v83;
          v85 = 0;
          v87 = 1;
        }
        while ( !v91 );
        v92 = 4 * v91;
        v93 = &v108[4 * v88];
        while ( 1 )
        {
          v94 = *(unsigned __int16 *)&v93[-v92];
          if ( v94 >> 5 > 8 )
            break;
          v92 -= 4;
          *(_BYTE *)(v84 + v94 + 3456) = v90;
          if ( !v92 )
            goto LABEL_111;
        }
        v20 = *(unsigned __int16 *)&v93[-v92];
        v21 = &off_2EDF54;
LABEL_154:
        core::panicking::panic_bounds_check(v20, 288, (int)v21);
      }
    }
    else
    {
      v22 = 0;
      memset(v115, 0, sizeof(v115));
      v23 = (__int16 *)v113;
    }
    v107 = 1;
    v28 = 0;
    goto LABEL_24;
  }
  if ( a3 > 0x120 )
    goto LABEL_170;
  v9 = a4;
  if ( a3 )
  {
    v10 = a3;
    v11 = (unsigned __int8 *)(a1 + 288 * a2 + 3456);
    do
    {
      result = *v11;
      if ( result > 0x20 )
      {
        v82 = &off_2EDEF4;
        goto LABEL_157;
      }
      --v10;
      ++v11;
      ++s[result];
    }
    while ( v10 );
  }
  v12 = 0;
  v112[1] = 0;
  if ( a4 >= 2 )
  {
LABEL_128:
    result = 2;
    v95 = 2;
    do
    {
      v96 = 0;
      if ( result < v9 )
        ++v95;
      v97 = result - 1;
      if ( result >= v9 )
        v96 = 1;
      if ( v97 >= 0x21 )
      {
        --result;
        v82 = &off_2EDF64;
        goto LABEL_157;
      }
      if ( result >= 0x21 )
      {
        v82 = &off_2EDF74;
        goto LABEL_157;
      }
      v12 = 2 * (s[v97] + v12);
      v112[result] = v12;
      result = v95;
    }
    while ( !(v96 | (v95 > v9)) );
  }
LABEL_136:
  if ( a3 )
  {
    v98 = 0;
    result = a1 + 288 * a2;
    v99 = a1 + 576 * a2 + 1728;
    v100 = result + 3456;
    v101 = (_WORD *)v99;
    do
    {
      if ( v98 == 288 )
        return result;
      result = *(unsigned __int8 *)(v100 + v98);
      if ( *(_BYTE *)(v100 + v98) )
      {
        if ( result >= 0x21 )
        {
          v82 = &off_2EDF84;
LABEL_157:
          core::panicking::panic_bounds_check(result, 33, (int)v82);
        }
        v102 = v112[result];
        v103 = 0;
        v112[result] = v102 + 1;
        v104 = 0;
        do
        {
          ++v103;
          v104 = v102 & 1 | (2 * v104);
          v102 >>= 1;
        }
        while ( v103 < result );
        *v101 = v104;
      }
      ++v98;
      --a3;
      v101 = (_WORD *)(v99 + 2 * v98);
    }
    while ( a3 );
  }
  return result;
}
