void __noreturn dag_gen_rvn_thread_func()
{
  unsigned int v0; // r4
  double v1; // d8
  unsigned int v2; // r0
  char *v3; // r2
  char *v4; // r3
  int v5; // r1
  unsigned int v6; // r12
  __int64 v7; // r0
  char *v8; // r5
  _DWORD *v9; // r7
  unsigned int v10; // r0
  int v11; // t1
  int v12; // r1
  unsigned int v13; // r0
  char v14; // r8
  int v15; // t1
  int v16; // r1
  int v17; // r4
  int v18; // r7
  char v19; // r3
  char v20; // r3
  int v21; // r0
  unsigned int v22; // r3
  char v23; // r3
  char v24; // r3
  _DWORD *v25; // r2
  int v26; // r6
  int v27; // r5
  unsigned int v28; // r0
  unsigned int v29; // r1
  char v30; // r3
  unsigned int v31; // r5
  unsigned int v32; // r9
  unsigned int v33; // r5
  unsigned int v34; // r0
  unsigned int v35; // r12
  char v36; // r3
  char v37; // r1
  char v38; // r2
  int v39; // r8
  int v40; // r6
  int v41; // r9
  int v42; // r7
  unsigned int v43; // r0
  int v44; // r12
  _DWORD *v45; // r12
  char v46; // lr
  unsigned int v47; // r7
  char *v48; // r6
  int *v49; // r5
  int v50; // r4
  unsigned int v51; // r0
  int v52; // t1
  unsigned __int64 v53; // d8
  bool v54; // cc
  char v55; // [sp+10h] [bp-148h]
  int v56; // [sp+10h] [bp-148h]
  unsigned int v57; // [sp+1Ch] [bp-13Ch]
  int v58; // [sp+1Ch] [bp-13Ch]
  int v59; // [sp+20h] [bp-138h]
  void (__fastcall *v60)(int, _DWORD, _DWORD, _DWORD); // [sp+20h] [bp-138h]
  int v61; // [sp+24h] [bp-134h]
  int v62; // [sp+28h] [bp-130h]
  int v63; // [sp+2Ch] [bp-12Ch]
  int v64; // [sp+34h] [bp-124h]
  int v65; // [sp+38h] [bp-120h]
  int v66; // [sp+3Ch] [bp-11Ch]
  int v67; // [sp+40h] [bp-118h]
  int v68; // [sp+44h] [bp-114h]
  int v69; // [sp+48h] [bp-110h]
  int v70; // [sp+4Ch] [bp-10Ch]
  int v71; // [sp+50h] [bp-108h]
  int v72; // [sp+54h] [bp-104h]
  int v73; // [sp+58h] [bp-100h]
  int v74; // [sp+5Ch] [bp-FCh]
  int v75; // [sp+60h] [bp-F8h]
  int v76; // [sp+64h] [bp-F4h]
  int v77; // [sp+6Ch] [bp-ECh]
  int v78; // [sp+70h] [bp-E8h]
  int v79; // [sp+74h] [bp-E4h]
  int v80; // [sp+78h] [bp-E0h]
  int v81; // [sp+7Ch] [bp-DCh]
  int v82; // [sp+80h] [bp-D8h]
  char *all_created_runtime; // [sp+84h] [bp-D4h]
  int v84; // [sp+88h] [bp-D0h]
  int v85; // [sp+8Ch] [bp-CCh]
  unsigned int v86; // [sp+A4h] [bp-B4h] BYREF
  unsigned int v87[2]; // [sp+A8h] [bp-B0h] BYREF
  __int64 v88; // [sp+B0h] [bp-A8h]
  double v89[3]; // [sp+B8h] [bp-A0h] BYREF
  double v90; // [sp+D0h] [bp-88h] BYREF
  int v91; // [sp+D8h] [bp-80h] BYREF
  _DWORD v92[30]; // [sp+DCh] [bp-7Ch] BYREF
  char v93; // [sp+154h] [bp-4h] BYREF
  _DWORD v94[32]; // [sp+158h] [bp+0h] BYREF
  char v95; // [sp+1D8h] [bp+80h] BYREF

  while ( 1 )
  {
    do
    {
      do
      {
        v0 = 0;
        memset(v89, 0, sizeof(v89));
        v90 = 0.0;
        get_cur_seed_rvn((int)v89);
        v86 = 0;
        all_created_runtime = (char *)get_all_created_runtime(&v86);
      }
      while ( !*(_QWORD *)&dbl_2D3500 );
    }
    while ( *(_QWORD *)&dbl_2D3500 == *(_QWORD *)&dbl_2D3508 );
    V_LOCK();
    logfmt_raw((char *)v94, 0x1000u, 0, "cur_block_num enter: %llu", dbl_2D3500);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
      180,
      "dag_gen_rvn_thread_func",
      23,
      353,
      60,
      v94);
    v1 = dbl_2D3500;
    v2 = sub_25A4F8(LODWORD(dbl_2D3500), HIDWORD(dbl_2D3500), 3u);
    v3 = (char *)&v90 + 4;
    v4 = &v93;
    v6 = 16777619 * ((16777619 * (v2 ^ 0x811C9DC5)) ^ v5);
    v87[0] = 16777619 * (v2 ^ 0x811C9DC5);
    LODWORD(v7) = 16777619 * (v2 ^ v6);
    v87[1] = v6;
    HIDWORD(v7) = 16777619 * (v5 ^ v7);
    v88 = v7;
    do
    {
      *((_DWORD *)v3 + 1) = v0;
      v3 += 4;
      *((_DWORD *)v4 + 1) = v0;
      v4 += 4;
      ++v0;
    }
    while ( v0 != 32 );
    v8 = &v95;
    v9 = v94;
    do
    {
      v10 = sub_AB378(v87);
      sub_25A94C(v10, v0);
      v11 = *--v9;
      *v9 = v92[v12 - 1];
      v92[v12 - 1] = v11;
      v13 = sub_AB378(v87);
      v15 = *((_DWORD *)v8 - 1);
      v8 -= 4;
      v14 = v15;
      sub_25A94C(v13, v0--);
      *(_DWORD *)v8 = v94[v16];
      v94[v16] = v15;
    }
    while ( v92 != v9 );
    v17 = 0;
    v85 = 0;
    v59 = 0;
    v18 = 0;
    v84 = 0;
    v63 = 0;
    v68 = 0;
    v80 = 0;
    v67 = 0;
    v73 = 0;
    v78 = 0;
    v65 = 0;
    v75 = 0;
    v79 = 0;
    v66 = 0;
    v74 = 0;
    v77 = 0;
    v64 = 0;
    v76 = 0;
    v69 = 0;
    v81 = 0;
    v61 = 0;
    v70 = 0;
    v82 = 0;
    v71 = 0;
    v72 = 0;
    v62 = 0;
    do
    {
      while ( 1 )
      {
        v24 = v18 + 1;
        if ( v17 > 10 )
          v14 = 4 * v17;
        v25 = &v94[v18 & 0x1F];
        if ( v17 > 10 )
          ++v18;
        v26 = *(v25 - 32);
        if ( v17 <= 10 )
        {
          v55 = v24;
          v18 += 2;
          v27 = v94[v62 & 0x1F];
          v28 = sub_AB378(v87);
          v29 = HIWORD(v28)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v28)) >> 32)
                              + ((unsigned int)(HIWORD(v28) - ((138547333 * (unsigned __int64)HIWORD(v28)) >> 32)) >> 1)) >> 4)
              + 1;
          v14 = 4 * v17;
          ++v62;
          v61 |= (v28 & 3) << (2 * v17);
          if ( v17 <= 5 )
          {
            v82 |= v26 << (5 * v17);
            v26 = v92[(v55 & 0x1F) - 1];
            v72 |= v27 << (5 * v17);
            v81 |= v29 << (5 * v17);
          }
          else
          {
            v30 = 5 * v17 - 30;
            v70 |= v26 << v30;
            v26 = v92[(v55 & 0x1F) - 1];
            v71 |= v27 << v30;
            v69 |= v29 << v30;
          }
        }
        v31 = sub_AB378(v87) % 0x3E0;
        v32 = v31 & 0x1F;
        v33 = v31 >> 5;
        if ( v32 <= v33 )
          ++v33;
        v57 = sub_AB378(v87);
        v34 = sub_AB378(v87);
        v35 = HIWORD(v34)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v34)) >> 32)
                            + ((unsigned int)(HIWORD(v34) - ((138547333 * (unsigned __int64)HIWORD(v34)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v17 <= 5 )
        {
          v21 = v34 & 3;
          v74 |= v32 << (v14 + v17);
          v75 |= v33 << (v14 + v17);
          v73 |= v26 << (v14 + v17);
          v76 |= v35 << (v14 + v17);
          v22 = v57 % 0xB;
LABEL_25:
          v68 |= v22 << v14;
          goto LABEL_13;
        }
        v19 = v14 + v17;
        if ( v17 > 11 )
        {
          v36 = v19 - 60;
          v79 |= v32 << v36;
          v78 |= v33 << v36;
          v80 |= v26 << v36;
          v77 |= v35 << v36;
        }
        else
        {
          v20 = v19 - 30;
          v66 |= v32 << v20;
          v65 |= v33 << v20;
          v67 |= v26 << v20;
          v64 |= v35 << v20;
        }
        v21 = v34 & 3;
        v22 = v57 % 0xB;
        if ( v17 <= 7 )
          goto LABEL_25;
        if ( v17 > 15 )
          break;
        v63 |= v22 << (4 * (v17 - 8));
LABEL_13:
        v23 = 2 * v17++;
        v59 |= v21 << v23;
        if ( v17 == 18 )
          goto LABEL_29;
      }
      v37 = v17 - 16;
      v38 = v17++ - 16;
      v84 |= v22 << (4 * v37);
      v85 |= v21 << (2 * v38);
    }
    while ( v17 != 18 );
LABEL_29:
    v56 = 0;
    v39 = 0;
    v40 = 0;
    v58 = 0;
    v41 = v18;
    v42 = 0;
    while ( 1 )
    {
      v43 = sub_AB378(v87);
      v44 = v41++ & 0x1F;
      v45 = &v94[v44];
      v39 |= (v43 & 3) << (2 * v40);
      v46 = 5 * v40++;
      v42 |= v58 << v46;
      v56 |= (HIWORD(v43)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v43)) >> 32)
                            + ((unsigned int)(HIWORD(v43) - ((138547333 * (unsigned __int64)HIWORD(v43)) >> 32)) >> 1)) >> 4)
            + 1) << v46;
      if ( v40 == 4 )
        break;
      v58 = *(v45 - 32);
    }
    v91 = v72;
    v92[0] = v71;
    v92[1] = v82;
    v92[2] = v70;
    v92[3] = v61;
    v92[4] = v81;
    v92[5] = v69;
    v92[6] = v76;
    v92[7] = v64;
    v92[8] = v77;
    v92[9] = v74;
    v92[10] = v66;
    v92[11] = v79;
    v92[12] = v75;
    v92[13] = v65;
    v92[14] = v78;
    v92[23] = v42;
    v92[24] = v39;
    v92[15] = v73;
    v92[16] = v67;
    v92[17] = v80;
    v92[18] = v68;
    v92[19] = v63;
    v92[20] = v84;
    v92[21] = v59;
    v92[22] = v85;
    v92[25] = v56;
    dbl_2D3508 = v1;
    if ( v86 )
    {
      v47 = 0;
      v48 = all_created_runtime - 4;
      do
      {
        V_LOCK();
        v49 = &v91;
        logfmt_raw((char *)v94, 0x1000u, 0, "kiss99 change begin...");
        v50 = 0;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          180,
          "dag_gen_rvn_thread_func",
          23,
          362,
          40,
          v94);
        v51 = sub_25A4F8(LODWORD(dbl_2D3500), HIDWORD(dbl_2D3500), 0x1D4Cu);
        v52 = *((_DWORD *)v48 + 1);
        v48 += 4;
        v60 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(v52 + 12);
        v53 = vshrd_n_u64(qword_271120[v51], 8u);
        printf("dag_load: %llx\n", v53);
        v60(v52, v60, v53, HIDWORD(v53));
        while ( 1 )
        {
          ++v50;
          (*(void (**)(void))(*(_DWORD *)v48 + 8))();
          if ( v50 == 27 )
            break;
          ++v49;
        }
        V_LOCK();
        logfmt_raw((char *)v94, 0x1000u, 0, "kiss99 change end...");
        ++v47;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          180,
          "dag_gen_rvn_thread_func",
          23,
          368,
          40,
          v94);
        v54 = v86 > v47;
        *(_BYTE *)(*(_DWORD *)v48 + 239) = 1;
      }
      while ( v54 );
    }
  }
}
