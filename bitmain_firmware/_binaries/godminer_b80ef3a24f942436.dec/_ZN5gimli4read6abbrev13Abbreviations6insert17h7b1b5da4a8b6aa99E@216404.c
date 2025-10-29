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
  unsigned int v69; // r0
  int v70; // r1
  bool v71; // cf
  unsigned int v72; // r9
  unsigned __int16 *v73; // r7
  unsigned int v74; // r8
  unsigned __int16 *v75; // r7
  int v76; // r2
  int v77; // r6
  int v78; // r10
  int *v79; // r5
  bool v80; // zf
  int v81; // r11
  int v82; // r8
  int v83; // r4
  int v84; // r0
  int v85; // r6
  _WORD *v86; // r7
  int v87; // r9
  unsigned int v88; // r0
  unsigned int v89; // r4
  unsigned int *v90; // r9
  unsigned int v91; // r7
  unsigned int v92; // r5
  int v93; // r2
  int v94; // r1
  char **v95; // r2
  const char *v96; // r0
  int v97; // [sp+10h] [bp-314h]
  int v98; // [sp+14h] [bp-310h]
  char *v99; // [sp+18h] [bp-30Ch]
  unsigned int v100; // [sp+1Ch] [bp-308h]
  int v101; // [sp+20h] [bp-304h]
  __int16 v102; // [sp+20h] [bp-304h]
  unsigned int v103; // [sp+20h] [bp-304h]
  int v104; // [sp+24h] [bp-300h]
  _WORD *v105; // [sp+28h] [bp-2FCh]
  int v106; // [sp+28h] [bp-2FCh]
  int v107; // [sp+2Ch] [bp-2F8h]
  int v108; // [sp+30h] [bp-2F4h]
  int v109; // [sp+34h] [bp-2F0h]
  int v110; // [sp+34h] [bp-2F0h]
  int v111; // [sp+34h] [bp-2F0h]
  void *v112; // [sp+38h] [bp-2ECh]
  void *v113; // [sp+38h] [bp-2ECh]
  void *v114; // [sp+3Ch] [bp-2E8h]
  void *v115; // [sp+3Ch] [bp-2E8h]
  char *j; // [sp+40h] [bp-2E4h]
  char *v117; // [sp+40h] [bp-2E4h]
  char *v118; // [sp+40h] [bp-2E4h]
  _WORD *v119; // [sp+40h] [bp-2E4h]
  int *v120; // [sp+44h] [bp-2E0h]
  _DWORD *v121; // [sp+44h] [bp-2E0h]
  _BYTE srca[104]; // [sp+48h] [bp-2DCh] BYREF
  _BYTE v123[92]; // [sp+B0h] [bp-274h] BYREF
  int dest[32]; // [sp+110h] [bp-214h] BYREF
  _BYTE v125[92]; // [sp+190h] [bp-194h] BYREF
  _BYTE v126[92]; // [sp+1F0h] [bp-134h] BYREF
  _DWORD v127[26]; // [sp+250h] [bp-D4h] BYREF
  _BYTE v128[104]; // [sp+2B8h] [bp-6Ch] BYREF

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
    v120 = v5;
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
        memcpy(v128, src, sizeof(v128));
        v31 = *(unsigned __int16 *)(v12 + 1238);
        v105 = (_WORD *)(v12 + 1238);
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
          *v105 = v31 + 1;
          goto LABEL_92;
        }
        alloc::collections::btree::node::splitpoint(dest, v15);
        v101 = dest[1];
        v104 = dest[2];
        v33 = dest[0];
        v34 = _rust_alloc(0x4D8u);
        if ( !v34 )
          alloc::alloc::handle_alloc_error();
        *(_DWORD *)(v34 + 1232) = 0;
        v35 = *(unsigned __int16 *)(v12 + 1238);
        v36 = *(void **)(v12 + 8 * v33);
        v37 = v35 + ~v33;
        *(_WORD *)(v34 + 1238) = v37;
        v117 = (char *)v34;
        v114 = *(void **)(v12 + 8 * v33 + 4);
        v109 = v35;
        memcpy(dest, (const void *)(v12 + 88 + 104 * v33), 0x68u);
        if ( v37 > 0xB )
          core::slice::index::slice_end_index_len_fail();
        v38 = v33 + 1;
        v112 = v36;
        if ( v109 - (v33 + 1) != v37 )
          core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2ECBA4);
        v39 = v117;
        memcpy(v117, (const void *)(v12 + 8 * v38), 8 * v37);
        memcpy(v117 + 88, (const void *)(v12 + 88 + 104 * v38), 104 * v37);
        v108 = dest[0];
        v107 = dest[1];
        v110 = dest[2];
        *v105 = v33;
        memcpy(v127, &dest[3], 0x5Cu);
        v40 = v104;
        if ( !v101 )
          v39 = (char *)v12;
        v41 = v104 + 1;
        v42 = (unsigned __int64 *)&v39[8 * v104];
        v43 = *((unsigned __int16 *)v39 + 619);
        if ( v104 + 1 <= v43 )
        {
          v102 = *((_WORD *)v39 + 619);
          v45 = v43 - v104;
          memmove(&v39[8 * v41], &v39[8 * v104], 8 * (v43 - v104));
          *v42 = v3;
          v44 = v102;
          memcpy(dest, src, 0x68u);
          v46 = 104 * v45;
          v40 = v104;
          memmove(&v39[104 * v41 + 88], &v39[104 * v104 + 88], v46);
        }
        else
        {
          *v42 = v3;
          v44 = v43;
          memcpy(dest, src, 0x68u);
        }
        memcpy(&v39[104 * v40 + 88], dest, 0x68u);
        *((_WORD *)v39 + 619) = v44 + 1;
        memcpy(v126, v127, sizeof(v126));
        v47 = v110;
        v48 = (int)v117;
        if ( v110 == 2 )
          goto LABEL_92;
        memcpy(v125, v126, sizeof(v125));
        v49 = *(_DWORD *)(v12 + 1232);
        if ( v49 )
        {
          v50 = (unsigned int)v112;
          v51 = (unsigned int)v114;
          v106 = 0;
          v52 = v117;
          v53 = v12;
          while ( 1 )
          {
            v12 = v49;
            v54 = *(unsigned __int16 *)(v53 + 1236);
            v127[1] = v107;
            v55 = v52;
            v127[0] = v108;
            v103 = v50;
            v100 = v51;
            v127[2] = v47;
            memcpy(&v127[3], v125, 0x5Cu);
            v57 = (_WORD *)(v12 + 1238);
            v56 = *(unsigned __int16 *)(v12 + 1238);
            if ( v56 < 0xB )
              break;
            alloc::collections::btree::node::splitpoint(dest, v54);
            v99 = v55;
            v58 = dest[0];
            v59 = dest[1];
            v60 = dest[2];
            v61 = (unsigned __int16)*v57;
            v62 = _rust_alloc(0x508u);
            if ( !v62 )
              alloc::alloc::handle_alloc_error();
            v63 = (unsigned __int16 *)v62;
            v98 = v61;
            *(_DWORD *)(v62 + 1232) = 0;
            v64 = (unsigned __int16)*v57;
            v65 = v64 + ~v58;
            v113 = *(void **)(v12 + 8 * v58);
            v97 = v59;
            v118 = (char *)v62;
            *(_WORD *)(v62 + 1238) = v65;
            v66 = (unsigned __int16 *)(v62 + 1238);
            v115 = *(void **)(v12 + 8 * v58 + 4);
            memcpy(v128, (const void *)(v12 + 88 + 104 * v58), sizeof(v128));
            if ( v65 > 0xB )
              core::slice::index::slice_end_index_len_fail();
            v67 = v58 + 1;
            if ( v64 - (v58 + 1) != v65 )
              core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2ECBA4);
            memcpy(v118, (const void *)(v12 + 8 * v67), 8 * v65);
            memcpy(v63 + 44, (const void *)(v12 + 88 + 104 * v67), 104 * v65);
            *(_WORD *)(v12 + 1238) = v58;
            memcpy(&dest[2], v128, 0x68u);
            v68 = *v66;
            dest[1] = (int)v115;
            dest[0] = (int)v113;
            if ( v68 >= 0xC )
              core::slice::index::slice_end_index_len_fail();
            if ( v98 - v58 != v68 + 1 )
              core::panicking::panic((int)aAssertionFaile_24, 40, (int)&off_2ECBA4);
            ++v106;
            memcpy(v63 + 620, (const void *)(v12 + 4 * v67 + 1240), 4 * (v98 - v58));
            v69 = 0;
            do
            {
              v70 = *(_DWORD *)&v63[2 * v69 + 620];
              v71 = v69 >= v68;
              *(_WORD *)(v70 + 1236) = v69;
              if ( v69 < v68 )
                ++v69;
              *(_DWORD *)(v70 + 1232) = v118;
            }
            while ( !v71 && v69 <= v68 );
            v111 = dest[4];
            v107 = dest[3];
            memcpy(v128, &dest[5], 0x5Cu);
            v72 = v60 + 1;
            v108 = dest[2];
            if ( !v97 )
              v63 = (unsigned __int16 *)v12;
            v73 = &v63[4 * v60];
            v74 = v63[619];
            if ( v72 <= v74 )
            {
              memmove(&v63[4 * v72], &v63[4 * v60], 8 * (v74 - v60));
              *(_QWORD *)v73 = __PAIR64__(v100, v103);
              memcpy(dest, v127, 0x68u);
              memmove(&v63[52 * v72 + 44], &v63[52 * v60 + 44], 104 * (v74 - v60));
            }
            else
            {
              *(_QWORD *)v73 = __PAIR64__(v100, v103);
              memcpy(dest, v127, 0x68u);
            }
            memcpy(&v63[52 * v60 + 44], dest, 0x68u);
            v75 = v63 + 620;
            if ( v60 + 2 < v74 + 2 )
              memmove(&v75[2 * v60 + 4], &v75[2 * v72], 4 * (v74 - v60));
            *(_DWORD *)&v75[2 * v72] = v99;
            v63[619] = v74 + 1;
            if ( v72 < v74 + 2 )
            {
              do
              {
                v76 = *(_DWORD *)&v63[2 * v60++ + 622];
                *(_WORD *)(v76 + 1236) = v60;
                *(_DWORD *)(v76 + 1232) = v63;
              }
              while ( v74 + 1 != v60 );
            }
            memcpy(v126, v128, sizeof(v126));
            v47 = v111;
            v48 = (int)v118;
            v77 = (int)v113;
            v78 = (int)v115;
            if ( v111 == 2 )
              goto LABEL_92;
            memcpy(v125, v126, sizeof(v125));
            v49 = *(_DWORD *)(v12 + 1232);
            v52 = v118;
            v50 = (unsigned int)v113;
            v51 = (unsigned int)v115;
            v53 = v12;
            if ( !v49 )
              goto LABEL_85;
          }
          v90 = (unsigned int *)(v12 + 8 * v54);
          v91 = v54 + 1;
          v92 = v56 + 1;
          if ( v56 <= v54 )
          {
            *v90 = v103;
            v90[1] = v100;
            memcpy((void *)(v12 + 104 * v54 + 88), v127, 0x68u);
          }
          else
          {
            memmove((void *)(v12 + 8 * v91), (const void *)(v12 + 8 * v54), 8 * (v56 - v54));
            *v90 = v103;
            v90[1] = v100;
            memmove((void *)(v12 + 88 + 104 * v91), (const void *)(v12 + 88 + 104 * v54), 104 * (v56 - v54));
            memcpy((void *)(v12 + 88 + 104 * v54), v127, 0x68u);
            memmove((void *)(v12 + 1240 + 4 * v54 + 8), (const void *)(v12 + 1240 + 4 * v91), 4 * (v56 - v54));
          }
          *v57 = v92;
          *(_DWORD *)(v12 + 4 * v91 + 1240) = v55;
          if ( v91 < v56 + 2 )
          {
            do
            {
              v93 = *(_DWORD *)(v12 + 1244 + 4 * v54++);
              *(_WORD *)(v93 + 1236) = v54;
              *(_DWORD *)(v93 + 1232) = v12;
            }
            while ( v92 != v54 );
          }
          goto LABEL_92;
        }
        v77 = (int)v112;
        v106 = 0;
        v78 = (int)v114;
LABEL_85:
        memcpy(v123, v125, sizeof(v123));
        dest[3] = v107;
        dest[4] = v47;
        dest[2] = v108;
        dest[1] = v78;
        dest[0] = v77;
        memcpy(&dest[5], v123, 0x5Cu);
        dest[31] = v48;
        v79 = (int *)v120[1];
        dest[30] = v106;
        v80 = v79 == 0;
        dest[28] = v106;
        if ( v79 )
          v79 = v120;
        dest[29] = v12;
        if ( v80 )
          core::panicking::panic((int)aCalledOptionUn_0, 43, (int)&off_2ECB74);
        v81 = v77;
        v119 = (_WORD *)v48;
        v82 = *v79;
        v83 = v79[1];
        v84 = _rust_alloc(0x508u);
        if ( !v84 )
          alloc::alloc::handle_alloc_error();
        v85 = v84;
        *(_DWORD *)(v84 + 1232) = 0;
        *(_WORD *)(v84 + 1238) = 0;
        v86 = (_WORD *)(v84 + 1238);
        *(_DWORD *)(v84 + 1240) = v83;
        v87 = v84 + 1240;
        *(_WORD *)(v83 + 1236) = 0;
        *v79 = v82 + 1;
        v79[1] = v84;
        *(_DWORD *)(v83 + 1232) = v84;
        memcpy(v128, &dest[2], sizeof(v128));
        if ( v82 == v106 )
        {
          v88 = (unsigned __int16)*v86;
          if ( v88 <= 0xA )
          {
            v89 = v88 + 1;
            *v86 = v88 + 1;
            *(_DWORD *)(v85 + 8 * v88) = v81;
            *(_DWORD *)(v85 + 8 * v88 + 4) = v78;
            memcpy((void *)(v85 + 104 * v88 + 88), &dest[2], 0x68u);
            *(_DWORD *)(v87 + 4 * v89) = v119;
            v119[618] = v89;
            *((_DWORD *)v119 + 308) = v85;
LABEL_92:
            ++v120[2];
            return 0;
          }
          v94 = 32;
          v95 = &off_2ECB94;
          v96 = aAssertionFaile_0;
        }
        else
        {
          v94 = 48;
          v95 = &off_2ECB84;
          v96 = aAssertionFaile_23;
        }
        core::panicking::panic((int)v96, v94, (int)v95);
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
    *v120 = 0;
    v120[1] = v21;
    v120[2] = 1;
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
    v121 = v5;
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
          v5 = v121;
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
      v5 = v121;
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
    sub_216168(v5 + 3, v7);
    v7 = v5[5];
  }
  memcpy((void *)(v5[4] + 104 * v7), src, 0x68u);
  v5[5] = v7 + 1;
  return 0;
}
