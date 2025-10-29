int __fastcall gimli::read::abbrev::Abbreviations::insert(_DWORD *a1, void *src)
{
  int v2; // lr
  unsigned __int64 v3; // r4
  _DWORD *v5; // r7
  unsigned int v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r11
  int i; // lr
  int v14; // r7
  unsigned int v15; // r6
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // r6
  int v23; // r3
  int v24; // r0
  int v25; // r2
  unsigned __int64 v26; // r10
  int v27; // r7
  int v28; // r12
  int v29; // r7
  int v30; // r0
  unsigned int v31; // r10
  unsigned __int64 *v32; // r9
  int v33; // r10
  int v34; // r0
  int v35; // r3
  void *v36; // r7
  unsigned int v37; // r6
  int v38; // r9
  char *v39; // r7
  int v40; // r6
  int v41; // r9
  unsigned __int64 *v42; // r10
  unsigned int v43; // r2
  __int16 v44; // r4
  unsigned int v45; // r6
  size_t v46; // r2
  int v47; // r8
  int v48; // r9
  int v49; // r0
  unsigned int v50; // r2
  unsigned int v51; // r3
  char *v52; // r4
  int v53; // r1
  unsigned int v54; // r6
  char *v55; // r10
  unsigned int v56; // r4
  _WORD *v57; // r8
  int v58; // r7
  int v59; // r9
  int v60; // r4
  int v61; // r5
  int v62; // r0
  unsigned __int16 *v63; // r6
  int v64; // r10
  unsigned int v65; // r8
  unsigned __int16 *v66; // r5
  int v67; // r9
  unsigned int v68; // r5
  int v69; // r0
  unsigned int v70; // r0
  int v71; // r1
  bool v72; // cf
  unsigned int v73; // r9
  unsigned __int16 *v74; // r7
  unsigned int v75; // r8
  unsigned __int16 *v76; // r7
  int v77; // r2
  int v78; // r6
  int v79; // r10
  int *v80; // r5
  bool v81; // zf
  int v82; // r11
  int v83; // r8
  int v84; // r4
  int v85; // r0
  int v86; // r6
  _WORD *v87; // r7
  int v88; // r9
  unsigned int v89; // r0
  unsigned int v90; // r4
  unsigned int *v91; // r9
  unsigned int v92; // r7
  unsigned int v93; // r5
  int v94; // r2
  int v95; // r1
  char **v96; // r2
  const char *v97; // r0
  int v98; // [sp+10h] [bp-314h]
  int v99; // [sp+14h] [bp-310h]
  char *v100; // [sp+18h] [bp-30Ch]
  unsigned int v101; // [sp+1Ch] [bp-308h]
  int v102; // [sp+20h] [bp-304h]
  __int16 v103; // [sp+20h] [bp-304h]
  unsigned int v104; // [sp+20h] [bp-304h]
  int v105; // [sp+24h] [bp-300h]
  _WORD *v106; // [sp+28h] [bp-2FCh]
  int v107; // [sp+28h] [bp-2FCh]
  int v108; // [sp+2Ch] [bp-2F8h]
  int v109; // [sp+30h] [bp-2F4h]
  int v110; // [sp+34h] [bp-2F0h]
  int v111; // [sp+34h] [bp-2F0h]
  int v112; // [sp+34h] [bp-2F0h]
  void *v113; // [sp+38h] [bp-2ECh]
  void *v114; // [sp+38h] [bp-2ECh]
  void *v115; // [sp+3Ch] [bp-2E8h]
  void *v116; // [sp+3Ch] [bp-2E8h]
  char *j; // [sp+40h] [bp-2E4h]
  char *v118; // [sp+40h] [bp-2E4h]
  char *v119; // [sp+40h] [bp-2E4h]
  _WORD *v120; // [sp+40h] [bp-2E4h]
  int *v121; // [sp+44h] [bp-2E0h]
  _DWORD *v122; // [sp+44h] [bp-2E0h]
  _BYTE srca[104]; // [sp+48h] [bp-2DCh] BYREF
  _BYTE v124[92]; // [sp+B0h] [bp-274h] BYREF
  int dest[32]; // [sp+110h] [bp-214h] BYREF
  _BYTE v126[92]; // [sp+190h] [bp-194h] BYREF
  _BYTE v127[92]; // [sp+1F0h] [bp-134h] BYREF
  _DWORD v128[26]; // [sp+250h] [bp-D4h] BYREF
  _BYTE v129[104]; // [sp+2B8h] [bp-6Ch] BYREF

  v3 = *(_QWORD *)src;
  v5 = a1;
  if ( *((_DWORD *)src + 1) )
    goto LABEL_17;
  v6 = a1[5];
  v7 = v3 - 1;
  if ( (int)v3 - 1 < v6 )
  {
LABEL_3:
    v8 = *((_DWORD *)src + 2);
    v9 = v8 == 0;
    if ( v8 )
      v9 = *((_DWORD *)src + 3) == 0;
    if ( !v9 )
      _rust_dealloc(*((void **)src + 4));
    return 1;
  }
  if ( (_DWORD)v3 - 1 != v6 )
  {
LABEL_17:
    v12 = v5[1];
    v121 = v5;
    if ( v12 )
    {
      for ( i = *v5; ; --i )
      {
        v14 = 0;
        v15 = -1;
        do
        {
          if ( 8 * *(unsigned __int16 *)(v12 + 1238) == v14 )
          {
            v15 = *(unsigned __int16 *)(v12 + 1238);
            goto LABEL_29;
          }
          ++v15;
          v17 = v12 + v14;
          v16 = *(_DWORD *)(v12 + v14);
          v14 += 8;
          v18 = *(_DWORD *)(v17 + 4);
          v19 = v16 ^ v3 | v18 ^ HIDWORD(v3);
          if ( v3 != __PAIR64__(v18, v16) )
            v19 = 1;
          if ( v3 < __PAIR64__(v18, v16) )
            v19 = -1;
        }
        while ( v19 == 1 );
        if ( !(_BYTE)v19 )
          goto LABEL_3;
LABEL_29:
        if ( !i )
          break;
        v12 = *(_DWORD *)(v12 + 4 * v15 + 1240);
      }
      memcpy(srca, src, sizeof(srca));
      if ( v12 )
      {
        memcpy(v129, src, sizeof(v129));
        v31 = *(unsigned __int16 *)(v12 + 1238);
        v106 = (_WORD *)(v12 + 1238);
        if ( v31 < 0xB )
        {
          v32 = (unsigned __int64 *)(v12 + 8 * v15);
          if ( v15 >= v31 )
          {
            *v32 = v3;
            memcpy(dest, src, 0x68u);
          }
          else
          {
            memmove(v32 + 1, (const void *)(v12 + 8 * v15), 8 * (v31 - v15));
            *v32 = v3;
            memcpy(dest, src, 0x68u);
            memmove((void *)(v12 + 104 * v15 + 192), (const void *)(v12 + 104 * v15 + 88), 104 * (v31 - v15));
          }
          memcpy((void *)(v12 + 104 * v15 + 88), dest, 0x68u);
          *v106 = v31 + 1;
          goto LABEL_92;
        }
        alloc::collections::btree::node::splitpoint(dest, v15);
        v102 = dest[1];
        v105 = dest[2];
        v33 = dest[0];
        v34 = _rust_alloc(0x4D8u);
        if ( !v34 )
          alloc::alloc::handle_alloc_error();
        *(_DWORD *)(v34 + 1232) = 0;
        v35 = *(unsigned __int16 *)(v12 + 1238);
        v36 = *(void **)(v12 + 8 * v33);
        v37 = v35 + ~v33;
        *(_WORD *)(v34 + 1238) = v37;
        v118 = (char *)v34;
        v115 = *(void **)(v12 + 8 * v33 + 4);
        v110 = v35;
        memcpy(dest, (const void *)(v12 + 88 + 104 * v33), 0x68u);
        if ( v37 > 0xB )
          core::slice::index::slice_end_index_len_fail(v37, 11, (int)&off_2CCBB4);
        v38 = v33 + 1;
        v113 = v36;
        if ( v110 - (v33 + 1) != v37 )
          core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2CCBA4);
        v39 = v118;
        memcpy(v118, (const void *)(v12 + 8 * v38), 8 * v37);
        memcpy(v118 + 88, (const void *)(v12 + 88 + 104 * v38), 104 * v37);
        v109 = dest[0];
        v108 = dest[1];
        v111 = dest[2];
        *v106 = v33;
        memcpy(v128, &dest[3], 0x5Cu);
        v40 = v105;
        if ( !v102 )
          v39 = (char *)v12;
        v41 = v105 + 1;
        v42 = (unsigned __int64 *)&v39[8 * v105];
        v43 = *((unsigned __int16 *)v39 + 619);
        if ( v105 + 1 <= v43 )
        {
          v103 = *((_WORD *)v39 + 619);
          v45 = v43 - v105;
          memmove(&v39[8 * v41], &v39[8 * v105], 8 * (v43 - v105));
          *v42 = v3;
          v44 = v103;
          memcpy(dest, src, 0x68u);
          v46 = 104 * v45;
          v40 = v105;
          memmove(&v39[104 * v41 + 88], &v39[104 * v105 + 88], v46);
        }
        else
        {
          *v42 = v3;
          v44 = v43;
          memcpy(dest, src, 0x68u);
        }
        memcpy(&v39[104 * v40 + 88], dest, 0x68u);
        *((_WORD *)v39 + 619) = v44 + 1;
        memcpy(v127, v128, sizeof(v127));
        v47 = v111;
        v48 = (int)v118;
        if ( v111 == 2 )
          goto LABEL_92;
        memcpy(v126, v127, sizeof(v126));
        v49 = *(_DWORD *)(v12 + 1232);
        if ( v49 )
        {
          v50 = (unsigned int)v113;
          v51 = (unsigned int)v115;
          v107 = 0;
          v52 = v118;
          v53 = v12;
          while ( 1 )
          {
            v12 = v49;
            v54 = *(unsigned __int16 *)(v53 + 1236);
            v128[1] = v108;
            v55 = v52;
            v128[0] = v109;
            v104 = v50;
            v101 = v51;
            v128[2] = v47;
            memcpy(&v128[3], v126, 0x5Cu);
            v57 = (_WORD *)(v12 + 1238);
            v56 = *(unsigned __int16 *)(v12 + 1238);
            if ( v56 < 0xB )
              break;
            alloc::collections::btree::node::splitpoint(dest, v54);
            v100 = v55;
            v58 = dest[0];
            v59 = dest[1];
            v60 = dest[2];
            v61 = (unsigned __int16)*v57;
            v62 = _rust_alloc(0x508u);
            if ( !v62 )
              alloc::alloc::handle_alloc_error();
            v63 = (unsigned __int16 *)v62;
            v99 = v61;
            *(_DWORD *)(v62 + 1232) = 0;
            v64 = (unsigned __int16)*v57;
            v65 = v64 + ~v58;
            v114 = *(void **)(v12 + 8 * v58);
            v98 = v59;
            v119 = (char *)v62;
            *(_WORD *)(v62 + 1238) = v65;
            v66 = (unsigned __int16 *)(v62 + 1238);
            v116 = *(void **)(v12 + 8 * v58 + 4);
            memcpy(v129, (const void *)(v12 + 88 + 104 * v58), sizeof(v129));
            if ( v65 > 0xB )
              core::slice::index::slice_end_index_len_fail(v64 + ~v58, 11, (int)&off_2CCBB4);
            v67 = v58 + 1;
            if ( v64 - (v58 + 1) != v65 )
              core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2CCBA4);
            memcpy(v119, (const void *)(v12 + 8 * v67), 8 * v65);
            memcpy(v63 + 44, (const void *)(v12 + 88 + 104 * v67), 104 * v65);
            *(_WORD *)(v12 + 1238) = v58;
            memcpy(&dest[2], v129, 0x68u);
            v68 = *v66;
            dest[1] = (int)v116;
            dest[0] = (int)v114;
            v69 = v68 + 1;
            if ( v68 >= 0xC )
              core::slice::index::slice_end_index_len_fail(v69, 12, (int)&off_2CCBC4);
            if ( v99 - v58 != v69 )
              core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2CCBA4);
            ++v107;
            memcpy(v63 + 620, (const void *)(v12 + 4 * v67 + 1240), 4 * (v99 - v58));
            v70 = 0;
            do
            {
              v71 = *(_DWORD *)&v63[2 * v70 + 620];
              v72 = v70 >= v68;
              *(_WORD *)(v71 + 1236) = v70;
              if ( v70 < v68 )
                ++v70;
              *(_DWORD *)(v71 + 1232) = v119;
            }
            while ( !v72 && v70 <= v68 );
            v112 = dest[4];
            v108 = dest[3];
            memcpy(v129, &dest[5], 0x5Cu);
            v73 = v60 + 1;
            v109 = dest[2];
            if ( !v98 )
              v63 = (unsigned __int16 *)v12;
            v74 = &v63[4 * v60];
            v75 = v63[619];
            if ( v73 <= v75 )
            {
              memmove(&v63[4 * v73], &v63[4 * v60], 8 * (v75 - v60));
              *(_QWORD *)v74 = __PAIR64__(v101, v104);
              memcpy(dest, v128, 0x68u);
              memmove(&v63[52 * v73 + 44], &v63[52 * v60 + 44], 104 * (v75 - v60));
            }
            else
            {
              *(_QWORD *)v74 = __PAIR64__(v101, v104);
              memcpy(dest, v128, 0x68u);
            }
            memcpy(&v63[52 * v60 + 44], dest, 0x68u);
            v76 = v63 + 620;
            if ( v60 + 2 < v75 + 2 )
              memmove(&v76[2 * v60 + 4], &v76[2 * v73], 4 * (v75 - v60));
            *(_DWORD *)&v76[2 * v73] = v100;
            v63[619] = v75 + 1;
            if ( v73 < v75 + 2 )
            {
              do
              {
                v77 = *(_DWORD *)&v63[2 * v60++ + 622];
                *(_WORD *)(v77 + 1236) = v60;
                *(_DWORD *)(v77 + 1232) = v63;
              }
              while ( v75 + 1 != v60 );
            }
            memcpy(v127, v129, sizeof(v127));
            v47 = v112;
            v48 = (int)v119;
            v78 = (int)v114;
            v79 = (int)v116;
            if ( v112 == 2 )
              goto LABEL_92;
            memcpy(v126, v127, sizeof(v126));
            v49 = *(_DWORD *)(v12 + 1232);
            v52 = v119;
            v50 = (unsigned int)v114;
            v51 = (unsigned int)v116;
            v53 = v12;
            if ( !v49 )
              goto LABEL_85;
          }
          v91 = (unsigned int *)(v12 + 8 * v54);
          v92 = v54 + 1;
          v93 = v56 + 1;
          if ( v56 <= v54 )
          {
            *v91 = v104;
            v91[1] = v101;
            memcpy((void *)(v12 + 104 * v54 + 88), v128, 0x68u);
          }
          else
          {
            memmove((void *)(v12 + 8 * v92), (const void *)(v12 + 8 * v54), 8 * (v56 - v54));
            *v91 = v104;
            v91[1] = v101;
            memmove((void *)(v12 + 88 + 104 * v92), (const void *)(v12 + 88 + 104 * v54), 104 * (v56 - v54));
            memcpy((void *)(v12 + 88 + 104 * v54), v128, 0x68u);
            memmove((void *)(v12 + 1240 + 4 * v54 + 8), (const void *)(v12 + 1240 + 4 * v92), 4 * (v56 - v54));
          }
          *v57 = v93;
          *(_DWORD *)(v12 + 4 * v92 + 1240) = v55;
          if ( v92 < v56 + 2 )
          {
            do
            {
              v94 = *(_DWORD *)(v12 + 1244 + 4 * v54++);
              *(_WORD *)(v94 + 1236) = v54;
              *(_DWORD *)(v94 + 1232) = v12;
            }
            while ( v93 != v54 );
          }
          goto LABEL_92;
        }
        v78 = (int)v113;
        v107 = 0;
        v79 = (int)v115;
LABEL_85:
        memcpy(v124, v126, sizeof(v124));
        dest[3] = v108;
        dest[4] = v47;
        dest[2] = v109;
        dest[1] = v79;
        dest[0] = v78;
        memcpy(&dest[5], v124, 0x5Cu);
        dest[31] = v48;
        v80 = (int *)v121[1];
        dest[30] = v107;
        v81 = v80 == 0;
        dest[28] = v107;
        if ( v80 )
          v80 = v121;
        dest[29] = v12;
        if ( v81 )
          core::panicking::panic((int)aCalledOptionUn_0, 43, (int)&off_2CCB74);
        v82 = v78;
        v120 = (_WORD *)v48;
        v83 = *v80;
        v84 = v80[1];
        v85 = _rust_alloc(0x508u);
        if ( !v85 )
          alloc::alloc::handle_alloc_error();
        v86 = v85;
        *(_DWORD *)(v85 + 1232) = 0;
        *(_WORD *)(v85 + 1238) = 0;
        v87 = (_WORD *)(v85 + 1238);
        *(_DWORD *)(v85 + 1240) = v84;
        v88 = v85 + 1240;
        *(_WORD *)(v84 + 1236) = 0;
        *v80 = v83 + 1;
        v80[1] = v85;
        *(_DWORD *)(v84 + 1232) = v85;
        memcpy(v129, &dest[2], sizeof(v129));
        if ( v83 == v107 )
        {
          v89 = (unsigned __int16)*v87;
          if ( v89 <= 0xA )
          {
            v90 = v89 + 1;
            *v87 = v89 + 1;
            *(_DWORD *)(v86 + 8 * v89) = v82;
            *(_DWORD *)(v86 + 8 * v89 + 4) = v79;
            memcpy((void *)(v86 + 104 * v89 + 88), &dest[2], 0x68u);
            *(_DWORD *)(v88 + 4 * v90) = v120;
            v120[618] = v90;
            *((_DWORD *)v120 + 308) = v86;
LABEL_92:
            ++v121[2];
            return 0;
          }
          v95 = 32;
          v96 = &off_2CCB94;
          v97 = aAssertionFaile_0;
        }
        else
        {
          v95 = 48;
          v96 = &off_2CCB84;
          v97 = aAssertionFaile_23;
        }
        core::panicking::panic((int)v97, v95, (int)v96);
      }
    }
    else
    {
      memcpy(srca, src, sizeof(srca));
    }
    v20 = _rust_alloc(0x4D8u);
    if ( !v20 )
      alloc::alloc::handle_alloc_error();
    v21 = v20;
    *(_DWORD *)(v20 + 1232) = 0;
    memcpy((void *)(v20 + 88), srca, 0x68u);
    *(_WORD *)(v21 + 1238) = 1;
    *(_QWORD *)v21 = v3;
    *v121 = 0;
    v121[1] = v21;
    v121[2] = 1;
    return 0;
  }
  v10 = v5[2];
  v11 = v10 == 0;
  if ( v10 )
  {
    v2 = v5[1];
    v11 = v2 == 0;
  }
  if ( !v11 )
  {
    v122 = v5;
    for ( j = (char *)*v5; ; --j )
    {
      v23 = -1;
      v24 = v2;
      v25 = 8 * *(unsigned __int16 *)(v2 + 1238);
      do
      {
        if ( !v25 )
        {
          v23 = *(unsigned __int16 *)(v2 + 1238);
          v5 = v122;
          goto LABEL_42;
        }
        v26 = *(_QWORD *)v24;
        v27 = *(_DWORD *)(v24 + 4) ^ HIDWORD(v3);
        ++v23;
        v25 -= 8;
        v28 = *(_DWORD *)v24 ^ v3;
        v24 += 8;
        v29 = (v28 | v27) != 0;
        if ( v3 < v26 )
          v29 = -1;
      }
      while ( v29 == 1 );
      v30 = (unsigned __int8)v29;
      v5 = v122;
      if ( !v30 )
        goto LABEL_3;
LABEL_42:
      if ( !j )
        break;
      v2 = *(_DWORD *)(v2 + 4 * v23 + 1240);
    }
  }
  memcpy(dest, src, 0x68u);
  if ( v7 == v5[3] )
  {
    sub_200168(v5 + 3, v7);
    v7 = v5[5];
  }
  memcpy((void *)(v5[4] + 104 * v7), src, 0x68u);
  v5[5] = v7 + 1;
  return 0;
}
