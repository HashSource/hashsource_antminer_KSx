unsigned int __fastcall sub_20F5C8(
        int a1,
        unsigned int *a2,
        _DWORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v8; // r2
  int v9; // r10
  unsigned int v10; // lr
  bool v11; // zf
  unsigned int v12; // r3
  int v13; // r7
  unsigned int v14; // r9
  unsigned int v15; // r11
  unsigned int v16; // r0
  int v17; // r0
  char v18; // r5
  unsigned int v19; // r1
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  unsigned int v23; // r5
  int v24; // r1
  int v25; // r0
  int v26; // r0
  unsigned int v27; // r1
  int v28; // r1
  int v29; // r4
  unsigned int result; // r0
  unsigned int v31; // r2
  unsigned int v32; // r4
  unsigned int v33; // r11
  int v34; // r1
  int v35; // r7
  unsigned int v36; // r3
  unsigned int v37; // r1
  int v38; // r1
  char v39; // r5
  unsigned int v40; // r6
  int v41; // r1
  int v42; // r6
  unsigned int v43; // r5
  unsigned __int8 *v44; // r9
  unsigned int v45; // lr
  unsigned int v46; // r1
  unsigned int v47; // r1
  unsigned int v48; // r3
  unsigned int v49; // r1
  unsigned int v50; // r3
  unsigned int v51; // r9
  unsigned int v52; // r7
  unsigned int v53; // r12
  unsigned int v54; // r6
  unsigned int v55; // r0
  _DWORD *v56; // r0
  unsigned int v57; // r4
  int v58; // r1
  int v59; // r2
  int v60; // r0
  char v61; // r2
  unsigned int v62; // r1
  int v63; // r0
  int v64; // r1
  unsigned int v65; // r0
  int v66; // r0
  unsigned int v67; // r2
  unsigned int v68; // r1
  int v69; // r0
  int v70; // r1
  int v71; // r3
  unsigned int v72; // r7
  unsigned int v73; // r11
  unsigned int v74; // r9
  int v75; // r1
  unsigned int v76; // r12
  unsigned int v77; // r1
  unsigned int v78; // r4
  int v79; // r1
  int v80; // r1
  char v81; // r3
  unsigned int v82; // r2
  int v83; // r1
  int v84; // r2
  unsigned int v85; // r5
  unsigned int v86; // r3
  unsigned __int8 *v87; // r2
  unsigned int v88; // r1
  char **v89; // r2
  unsigned int v90; // [sp+8h] [bp-2Ch]
  unsigned int v91; // [sp+18h] [bp-1Ch]
  unsigned int v92; // [sp+1Ch] [bp-18h]
  unsigned int v93; // [sp+20h] [bp-14h]
  unsigned int v94; // [sp+20h] [bp-14h]
  unsigned int v95; // [sp+24h] [bp-10h]
  _DWORD *v96; // [sp+24h] [bp-10h]
  int (__fastcall *v97)(_DWORD *, int, unsigned int, unsigned int, int, unsigned int); // [sp+2Ch] [bp-8h]
  int v98; // [sp+30h] [bp-4h]

  v8 = *(_DWORD *)(a1 + 44);
  v9 = a4;
  v10 = a7;
  v11 = v8 == 0;
  if ( v8 )
  {
    a4 = *a3;
    v11 = *a3 == 0;
  }
  if ( !v11 )
  {
    v50 = a4 - 1;
    if ( v50 >= 0x32 && a3[1] < 8 * v50 )
    {
      *a3 = 0;
      goto LABEL_5;
    }
    v98 = a1 + 32;
    v91 = a2[3];
    v97 = *(int (__fastcall **)(_DWORD *, int, unsigned int, unsigned int, int, unsigned int))(a1 + 44);
    v92 = a7 - 1;
    v96 = a3;
    if ( a2[2] )
    {
      if ( a7 > a5 )
        return 0;
      v51 = a2[4];
      v52 = 0;
      v53 = *a2;
      v54 = a2[1];
      v90 = *a2;
      while ( 1 )
      {
        if ( *a3 )
        {
          v55 = *a3 - 1;
          if ( v55 < 0x32 || a3[1] >= 8 * v55 )
          {
            if ( v52 > a5 )
              goto LABEL_142;
            v56 = a3;
            v57 = v10;
            v59 = v97(v56, v98, v9 + v52, a5 - v52, a6, v10);
            result = 0;
            if ( !v59 )
              return result;
            v52 += v58;
            v53 = v90;
            v10 = v57;
            if ( v52 + v57 > a5 )
              return result;
          }
          else
          {
            *a3 = 0;
          }
        }
        v16 = v92 + v52;
        if ( v92 + v52 >= a5 )
        {
LABEL_136:
          v89 = &off_2E18A8;
          goto LABEL_141;
        }
        a3 = v96;
        v60 = *(_BYTE *)(v9 + v16) & 0x3F;
        v61 = 32 - v60;
        v62 = v53 >> v60;
        v63 = v60 - 32;
        v64 = v62 | (v54 << v61);
        if ( v63 >= 0 )
          v64 = v54 >> v63;
        v65 = v10;
        if ( (v64 & 1) == 0 )
          goto LABEL_82;
        v66 = a6;
        v67 = a7 - v51;
        v68 = v52;
        if ( v51 >= v10 )
        {
LABEL_76:
          v69 = v51 - 1;
          do
          {
            if ( v69 == -1 )
              return 1;
            if ( v51 - 1 >= v10 )
              core::panicking::panic_bounds_check(v69, v10, (int)&off_2E18C8);
            v27 = v52 + v69;
            if ( v52 + v69 >= a5 )
            {
LABEL_128:
              v16 = v27;
              v89 = &off_2E18D8;
              goto LABEL_141;
            }
            v70 = *(unsigned __int8 *)(v9 + v52 + v69);
            v71 = *(unsigned __int8 *)(a6 + v69--);
          }
          while ( v71 == v70 );
          v65 = v91;
LABEL_82:
          v52 += v65;
          if ( v52 + v10 > a5 )
            return 0;
        }
        else
        {
          while ( 1 )
          {
            if ( v51 + v68 >= a5 )
            {
              v16 = v51 + v52;
              v89 = &off_2E18B8;
              goto LABEL_139;
            }
            if ( *(unsigned __int8 *)(v66 + v51) != *(unsigned __int8 *)(v9 + v51 + v68) )
              break;
            ++v66;
            --v67;
            ++v68;
            if ( !v67 )
              goto LABEL_76;
          }
          v52 = v68 + 1;
          if ( v68 + 1 + v10 > a5 )
            return 0;
        }
      }
    }
    if ( a7 > a5 )
      return 0;
    v72 = 0;
    v73 = a2[1];
    v94 = *a2;
    v74 = a2[4];
    result = 0;
    while ( 1 )
    {
      v75 = *a3;
      v76 = result;
      if ( v74 > result )
        v76 = v74;
      if ( v75 )
      {
        v77 = v75 - 1;
        if ( v77 < 0x32 || v96[1] >= 8 * v77 )
        {
          if ( v72 > a5 )
LABEL_142:
            core::slice::index::slice_start_index_len_fail();
          v78 = v10;
          if ( !v97(v96, v98, v9 + v72, a5 - v72, a6, v10) )
            return 0;
          v72 += v79;
          result = 0;
          v76 = v74;
          v10 = v78;
          if ( v72 + v78 > a5 )
            return result;
        }
        else
        {
          *v96 = 0;
        }
      }
      v37 = v92 + v72;
      if ( v92 + v72 >= a5 )
      {
LABEL_131:
        v16 = v37;
        v89 = &off_2E18F8;
        goto LABEL_141;
      }
      v80 = *(_BYTE *)(v9 + v37) & 0x3F;
      v81 = 32 - v80;
      v82 = v94 >> v80;
      v83 = v80 - 32;
      v84 = v82 | (v73 << v81);
      if ( v83 >= 0 )
        v84 = v73 >> v83;
      if ( (v84 & 1) != 0 )
      {
        if ( v76 >= v10 )
        {
LABEL_110:
          a3 = v96;
          if ( v74 > result )
          {
            v47 = v74;
            while ( 1 )
            {
              if ( v47 >= v10 )
LABEL_126:
                core::panicking::panic_bounds_check(v47, v10, (int)&off_2E1918);
              v48 = v72 + v47;
              if ( v72 + v47 >= a5 )
              {
LABEL_127:
                v16 = v48;
                v89 = &off_2E1928;
                goto LABEL_141;
              }
              if ( *(unsigned __int8 *)(a6 + v47) != *(unsigned __int8 *)(v9 + v72 + v47) )
                break;
              if ( --v47 <= result )
                goto LABEL_116;
            }
            result = a7 - v91;
            v72 += v91;
            goto LABEL_91;
          }
LABEL_116:
          if ( result >= v10 )
LABEL_134:
            core::panicking::panic_bounds_check(result, v10, (int)&off_2E1938);
          v49 = v72 + result;
          if ( v72 + result >= a5 )
          {
LABEL_135:
            v16 = v49;
            v89 = &off_2E1948;
            goto LABEL_141;
          }
          v11 = *(unsigned __int8 *)(a6 + result) == *(unsigned __int8 *)(v9 + v49);
          result = a7 - v91;
          v88 = v91;
          if ( v11 )
            return 1;
        }
        else
        {
          v85 = v76 + v72;
          v86 = v10 - v76;
          v87 = (unsigned __int8 *)(a6 + v76);
          v88 = 1 - v74 + v76;
          while ( 1 )
          {
            if ( v85 >= a5 )
            {
              v16 = v76 + v72;
              v89 = &off_2E1908;
              goto LABEL_139;
            }
            if ( *v87 != *(unsigned __int8 *)(v9 + v85) )
              break;
            ++v87;
            ++v85;
            --v86;
            ++v88;
            if ( !v86 )
              goto LABEL_110;
          }
          a3 = v96;
          result = 0;
        }
        v72 += v88;
      }
      else
      {
        a3 = v96;
        v72 += v10;
        result = 0;
      }
LABEL_91:
      if ( v72 + v10 > a5 )
        return 0;
    }
  }
LABEL_5:
  v93 = a2[3];
  v95 = a7 - 1;
  if ( !a2[2] )
  {
    if ( a7 <= a5 )
    {
      v31 = a2[4];
      v32 = *a2;
      v33 = a2[1];
      v34 = 0;
      result = 0;
      do
      {
        v35 = v34;
        v36 = result;
        v37 = v95 + v34;
        if ( v31 > result )
          v36 = v31;
        if ( v37 >= a5 )
          goto LABEL_131;
        v38 = *(_BYTE *)(v9 + v37) & 0x3F;
        v39 = 32 - v38;
        v40 = v32 >> v38;
        v41 = v38 - 32;
        v42 = v40 | (v33 << v39);
        if ( v41 >= 0 )
          v42 = v33 >> v41;
        if ( (v42 & 1) != 0 )
        {
          if ( v36 < v10 )
          {
            v43 = v35 + v36;
            v44 = (unsigned __int8 *)(a6 + v36);
            v45 = a7 - v36;
            v46 = 1 - v31 + v36;
            while ( v43 < a5 )
            {
              if ( *v44 != *(unsigned __int8 *)(v9 + v43) )
              {
                v10 = a7;
                result = 0;
                goto LABEL_53;
              }
              ++v44;
              ++v43;
              --v45;
              ++v46;
              if ( !v45 )
                goto LABEL_41;
            }
            v16 = v35 + v36;
            v89 = &off_2E1908;
LABEL_139:
            if ( a5 > v16 )
              v16 = a5;
LABEL_141:
            core::panicking::panic_bounds_check(v16, a5, (int)v89);
          }
LABEL_41:
          v10 = a7;
          if ( v31 <= result )
          {
LABEL_47:
            if ( result >= a7 )
              goto LABEL_134;
            v49 = result + v35;
            if ( result + v35 >= a5 )
              goto LABEL_135;
            v11 = *(unsigned __int8 *)(a6 + result) == *(unsigned __int8 *)(v9 + v49);
            v46 = v93;
            result = a7 - v93;
            if ( v11 )
              return 1;
LABEL_53:
            v34 = v46 + v35;
          }
          else
          {
            v47 = v31;
            while ( 1 )
            {
              if ( v47 >= a7 )
                goto LABEL_126;
              v48 = v35 + v47;
              if ( v35 + v47 >= a5 )
                goto LABEL_127;
              if ( *(unsigned __int8 *)(a6 + v47) != *(unsigned __int8 *)(v9 + v35 + v47) )
                break;
              if ( --v47 <= result )
                goto LABEL_47;
            }
            result = a7 - v93;
            v34 = v93 + v35;
          }
        }
        else
        {
          v34 = v35 + v10;
          result = 0;
        }
      }
      while ( v34 + v10 <= a5 );
    }
    return 0;
  }
  if ( a7 > a5 )
    return 0;
  v12 = a2[4];
  v13 = 0;
  v14 = *a2;
  v15 = a2[1];
  do
  {
    v16 = v95 + v13;
    if ( v95 + v13 >= a5 )
      goto LABEL_136;
    v17 = *(_BYTE *)(v9 + v16) & 0x3F;
    v18 = 32 - v17;
    v19 = v14 >> v17;
    v20 = v17 - 32;
    v21 = v19 | (v15 << v18);
    if ( v20 >= 0 )
      v21 = v15 >> v20;
    v22 = a7;
    if ( (v21 & 1) == 0 )
      goto LABEL_22;
    v23 = a7 - v12;
    v24 = v13;
    v25 = a6;
    if ( v12 >= a7 )
    {
LABEL_16:
      v26 = v12 - 1;
      do
      {
        if ( v26 == -1 )
          return 1;
        if ( v12 - 1 >= a7 )
          core::panicking::panic_bounds_check(v26, a7, (int)&off_2E18C8);
        v27 = v13 + v26;
        if ( v13 + v26 >= a5 )
          goto LABEL_128;
        v28 = *(unsigned __int8 *)(v9 + v13 + v26);
        v29 = *(unsigned __int8 *)(a6 + v26--);
      }
      while ( v29 == v28 );
      v22 = v93;
LABEL_22:
      v13 += v22;
      goto LABEL_24;
    }
    while ( 1 )
    {
      if ( v12 + v24 >= a5 )
      {
        v16 = v12 + v13;
        v89 = &off_2E18B8;
        goto LABEL_139;
      }
      if ( *(unsigned __int8 *)(v25 + v12) != *(unsigned __int8 *)(v9 + v12 + v24) )
        break;
      ++v25;
      --v23;
      ++v24;
      if ( !v23 )
        goto LABEL_16;
    }
    v13 = v24 + 1;
LABEL_24:
    result = 0;
  }
  while ( v13 + a7 <= a5 );
  return result;
}
