void __noreturn dag_gen_rvn_thread_func()
{
  int v0; // r4
  int v1; // r0
  double v2; // d8
  __int64 v3; // r0
  char *v4; // r2
  char *v5; // r3
  int v6; // r12
  char *v7; // r5
  _DWORD *v8; // r7
  unsigned int v9; // r0
  int v10; // t1
  int v11; // r1
  unsigned int v12; // r0
  char v13; // r8
  int v14; // t1
  int v15; // r1
  int v16; // r4
  int v17; // r7
  char v18; // r3
  char v19; // r3
  int v20; // r0
  unsigned int v21; // r3
  char v22; // r3
  char v23; // r3
  _DWORD *v24; // r2
  int v25; // r6
  int v26; // r5
  unsigned int v27; // r0
  unsigned int v28; // r1
  char v29; // r3
  unsigned int v30; // r5
  unsigned int v31; // r9
  unsigned int v32; // r5
  unsigned int v33; // r0
  unsigned int v34; // r12
  char v35; // r3
  char v36; // r1
  char v37; // r2
  int v38; // r8
  int v39; // r6
  int v40; // r9
  int v41; // r7
  unsigned int v42; // r0
  int v43; // r12
  _DWORD *v44; // r12
  char v45; // lr
  unsigned int v46; // r0
  unsigned int v47; // r7
  _DWORD *v48; // r6
  int *v49; // r5
  int v50; // r0
  int v51; // r4
  int v52; // r0
  int v53; // t1
  unsigned __int64 v54; // d8
  int v55; // r0
  int v56; // r0
  bool v57; // cc
  char v58; // [sp+10h] [bp-148h]
  int v59; // [sp+10h] [bp-148h]
  unsigned int v60; // [sp+1Ch] [bp-13Ch]
  int v61; // [sp+1Ch] [bp-13Ch]
  int v62; // [sp+20h] [bp-138h]
  void (__fastcall *v63)(int, _DWORD, _DWORD, _DWORD); // [sp+20h] [bp-138h]
  int v64; // [sp+24h] [bp-134h]
  int v65; // [sp+28h] [bp-130h]
  int v66; // [sp+2Ch] [bp-12Ch]
  int v67; // [sp+34h] [bp-124h]
  int v68; // [sp+38h] [bp-120h]
  int v69; // [sp+3Ch] [bp-11Ch]
  int v70; // [sp+40h] [bp-118h]
  int v71; // [sp+44h] [bp-114h]
  int v72; // [sp+48h] [bp-110h]
  int v73; // [sp+4Ch] [bp-10Ch]
  int v74; // [sp+50h] [bp-108h]
  int v75; // [sp+54h] [bp-104h]
  int v76; // [sp+58h] [bp-100h]
  int v77; // [sp+5Ch] [bp-FCh]
  int v78; // [sp+60h] [bp-F8h]
  int v79; // [sp+64h] [bp-F4h]
  int v80; // [sp+6Ch] [bp-ECh]
  int v81; // [sp+70h] [bp-E8h]
  int v82; // [sp+74h] [bp-E4h]
  int v83; // [sp+78h] [bp-E0h]
  int v84; // [sp+7Ch] [bp-DCh]
  int v85; // [sp+80h] [bp-D8h]
  int all_created_runtime; // [sp+84h] [bp-D4h]
  int v87; // [sp+88h] [bp-D0h]
  int v88; // [sp+8Ch] [bp-CCh]
  unsigned int v89; // [sp+A4h] [bp-B4h] BYREF
  int v90[2]; // [sp+A8h] [bp-B0h] BYREF
  __int64 v91; // [sp+B0h] [bp-A8h]
  double v92[3]; // [sp+B8h] [bp-A0h] BYREF
  double v93; // [sp+D0h] [bp-88h] BYREF
  int v94; // [sp+D8h] [bp-80h] BYREF
  _DWORD v95[30]; // [sp+DCh] [bp-7Ch] BYREF
  char v96; // [sp+154h] [bp-4h] BYREF
  _DWORD v97[32]; // [sp+158h] [bp+0h] BYREF
  char v98; // [sp+1D8h] [bp+80h] BYREF

  while ( 1 )
  {
    do
    {
      do
      {
        v0 = 0;
        memset(v92, 0, sizeof(v92));
        v93 = 0.0;
        get_cur_seed_rvn((int)v92);
        v89 = 0;
        all_created_runtime = get_all_created_runtime(&v89);
      }
      while ( !*(_QWORD *)&dbl_2E9590 );
    }
    while ( *(_QWORD *)&dbl_2E9590 == *(_QWORD *)&dbl_2E9598 );
    V_LOCK(LODWORD(dbl_2E9590));
    v1 = logfmt_raw((int)v97, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_dhash_common.c",
      185,
      "dag_gen_rvn_thread_func",
      23,
      353,
      60,
      v97);
    v2 = dbl_2E9590;
    v3 = sub_26C7C0(LODWORD(dbl_2E9590), HIDWORD(dbl_2E9590), 3, 0);
    v4 = (char *)&v93 + 4;
    v5 = &v96;
    v6 = 16777619 * ((16777619 * (v3 ^ 0x811C9DC5)) ^ HIDWORD(v3));
    v90[0] = 16777619 * (v3 ^ 0x811C9DC5);
    LODWORD(v3) = 16777619 * (v3 ^ v6);
    v90[1] = v6;
    HIDWORD(v3) = 16777619 * (HIDWORD(v3) ^ v3);
    v91 = v3;
    do
    {
      *((_DWORD *)v4 + 1) = v0;
      v4 += 4;
      *((_DWORD *)v5 + 1) = v0;
      v5 += 4;
      ++v0;
    }
    while ( v0 != 32 );
    v7 = &v98;
    v8 = v97;
    do
    {
      v9 = sub_B1888(v90);
      sub_26CC14(v9, v0);
      v10 = *--v8;
      *v8 = v95[v11 - 1];
      v95[v11 - 1] = v10;
      v12 = sub_B1888(v90);
      v14 = *((_DWORD *)v7 - 1);
      v7 -= 4;
      v13 = v14;
      sub_26CC14(v12, v0--);
      *(_DWORD *)v7 = v97[v15];
      v97[v15] = v14;
    }
    while ( v95 != v8 );
    v16 = 0;
    v88 = 0;
    v62 = 0;
    v17 = 0;
    v87 = 0;
    v66 = 0;
    v71 = 0;
    v83 = 0;
    v70 = 0;
    v76 = 0;
    v81 = 0;
    v68 = 0;
    v78 = 0;
    v82 = 0;
    v69 = 0;
    v77 = 0;
    v80 = 0;
    v67 = 0;
    v79 = 0;
    v72 = 0;
    v84 = 0;
    v64 = 0;
    v73 = 0;
    v85 = 0;
    v74 = 0;
    v75 = 0;
    v65 = 0;
    do
    {
      while ( 1 )
      {
        v23 = v17 + 1;
        if ( v16 > 10 )
          v13 = 4 * v16;
        v24 = &v97[v17 & 0x1F];
        if ( v16 > 10 )
          ++v17;
        v25 = *(v24 - 32);
        if ( v16 <= 10 )
        {
          v58 = v23;
          v17 += 2;
          v26 = v97[v65 & 0x1F];
          v27 = sub_B1888(v90);
          v28 = HIWORD(v27)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v27)) >> 32)
                              + ((unsigned int)(HIWORD(v27) - ((138547333 * (unsigned __int64)HIWORD(v27)) >> 32)) >> 1)) >> 4)
              + 1;
          v13 = 4 * v16;
          ++v65;
          v64 |= (v27 & 3) << (2 * v16);
          if ( v16 <= 5 )
          {
            v85 |= v25 << (5 * v16);
            v25 = v95[(v58 & 0x1F) - 1];
            v75 |= v26 << (5 * v16);
            v84 |= v28 << (5 * v16);
          }
          else
          {
            v29 = 5 * v16 - 30;
            v73 |= v25 << v29;
            v25 = v95[(v58 & 0x1F) - 1];
            v74 |= v26 << v29;
            v72 |= v28 << v29;
          }
        }
        v30 = sub_B1888(v90) % 0x3E0;
        v31 = v30 & 0x1F;
        v32 = v30 >> 5;
        if ( v31 <= v32 )
          ++v32;
        v60 = sub_B1888(v90);
        v33 = sub_B1888(v90);
        v34 = HIWORD(v33)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)
                            + ((unsigned int)(HIWORD(v33) - ((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v16 <= 5 )
        {
          v20 = v33 & 3;
          v77 |= v31 << (v13 + v16);
          v78 |= v32 << (v13 + v16);
          v76 |= v25 << (v13 + v16);
          v79 |= v34 << (v13 + v16);
          v21 = v60 % 0xB;
LABEL_25:
          v71 |= v21 << v13;
          goto LABEL_13;
        }
        v18 = v13 + v16;
        if ( v16 > 11 )
        {
          v35 = v18 - 60;
          v82 |= v31 << v35;
          v81 |= v32 << v35;
          v83 |= v25 << v35;
          v80 |= v34 << v35;
        }
        else
        {
          v19 = v18 - 30;
          v69 |= v31 << v19;
          v68 |= v32 << v19;
          v70 |= v25 << v19;
          v67 |= v34 << v19;
        }
        v20 = v33 & 3;
        v21 = v60 % 0xB;
        if ( v16 <= 7 )
          goto LABEL_25;
        if ( v16 > 15 )
          break;
        v66 |= v21 << (4 * (v16 - 8));
LABEL_13:
        v22 = 2 * v16++;
        v62 |= v20 << v22;
        if ( v16 == 18 )
          goto LABEL_29;
      }
      v36 = v16 - 16;
      v37 = v16++ - 16;
      v87 |= v21 << (4 * v36);
      v88 |= v20 << (2 * v37);
    }
    while ( v16 != 18 );
LABEL_29:
    v59 = 0;
    v38 = 0;
    v39 = 0;
    v61 = 0;
    v40 = v17;
    v41 = 0;
    while ( 1 )
    {
      v42 = sub_B1888(v90);
      v43 = v40++ & 0x1F;
      v44 = &v97[v43];
      v38 |= (v42 & 3) << (2 * v39);
      v45 = 5 * v39++;
      v41 |= v61 << v45;
      v46 = HIWORD(v42)
          - 31
          * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v42)) >> 32)
                          + ((unsigned int)(HIWORD(v42) - ((138547333 * (unsigned __int64)HIWORD(v42)) >> 32)) >> 1)) >> 4)
          + 1;
      v59 |= v46 << v45;
      if ( v39 == 4 )
        break;
      v61 = *(v44 - 32);
    }
    v94 = v75;
    v95[0] = v74;
    v95[1] = v85;
    v95[2] = v73;
    v95[3] = v64;
    v95[4] = v84;
    v95[5] = v72;
    v95[6] = v79;
    v95[7] = v67;
    v95[8] = v80;
    v95[9] = v77;
    v95[10] = v69;
    v95[11] = v82;
    v95[12] = v78;
    v95[13] = v68;
    v95[14] = v81;
    v95[23] = v41;
    v95[24] = v38;
    v95[15] = v76;
    v95[16] = v70;
    v95[17] = v83;
    v95[18] = v71;
    v95[19] = v66;
    v95[20] = v87;
    v95[21] = v62;
    v95[22] = v88;
    v95[25] = v59;
    dbl_2E9598 = v2;
    if ( v89 )
    {
      v47 = 0;
      v48 = (_DWORD *)(all_created_runtime - 4);
      do
      {
        V_LOCK(v46);
        v49 = &v94;
        v50 = logfmt_raw((int)v97, 0x1000u);
        v51 = 0;
        V_UNLOCK(v50);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_dhash_common.c",
          185,
          "dag_gen_rvn_thread_func",
          23,
          362,
          40,
          v97);
        v52 = sub_26C7C0(LODWORD(dbl_2E9590), HIDWORD(dbl_2E9590), 7500, 0);
        v53 = v48[1];
        ++v48;
        v63 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(v53 + 12);
        v54 = vshrd_n_u64(qword_283EE8[v52], 8u);
        printf("dag_load: %lx\n", v63);
        v63(v53, v63, v54, HIDWORD(v54));
        while ( 1 )
        {
          ++v51;
          v55 = (*(int (**)(void))(*v48 + 8))();
          if ( v51 == 27 )
            break;
          ++v49;
        }
        V_LOCK(v55);
        v56 = logfmt_raw((int)v97, 0x1000u);
        ++v47;
        V_UNLOCK(v56);
        v46 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_dhash_common.c",
                185,
                "dag_gen_rvn_thread_func",
                23,
                368,
                40,
                v97);
        v57 = v89 > v47;
        *(_BYTE *)(*v48 + 255) = 1;
      }
      while ( v57 );
    }
  }
}
