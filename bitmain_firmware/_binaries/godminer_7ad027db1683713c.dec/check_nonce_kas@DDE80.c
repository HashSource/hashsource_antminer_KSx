int __fastcall check_nonce_kas(int a1, int a2)
{
  int v4; // r1
  int v5; // r12
  int v6; // r3
  int v7; // r12
  __int64 v8; // d16
  unsigned int v9; // r8
  unsigned int v10; // r9
  int v11; // r4
  int v12; // r6
  unsigned int v13; // r7
  int v14; // r2
  int v15; // r3
  int v16; // r1
  __int64 v17; // d7
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r6
  __int64 v22; // r2
  char *v23; // r3
  char *v24; // r2
  int v25; // r1
  int v26; // t1
  unsigned int v27; // r0
  unsigned int v28; // r4
  unsigned __int8 *v29; // r2
  int v30; // r1
  int v31; // r3
  int v32; // r1
  unsigned int v33; // r12
  unsigned int v34; // t1
  unsigned int v35; // t1
  bool v36; // cc
  __int64 v38; // [sp+30h] [bp-10ECh]
  unsigned int v39; // [sp+38h] [bp-10E4h]
  unsigned int v40; // [sp+3Ch] [bp-10E0h]
  unsigned int v41; // [sp+50h] [bp-10CCh]
  int v42; // [sp+54h] [bp-10C8h]
  _QWORD v43[2]; // [sp+58h] [bp-10C4h] BYREF
  unsigned int v44; // [sp+68h] [bp-10B4h]
  unsigned int v45; // [sp+6Ch] [bp-10B0h]
  unsigned int v46; // [sp+70h] [bp-10ACh]
  unsigned int v47; // [sp+74h] [bp-10A8h]
  _DWORD v48[7]; // [sp+78h] [bp-10A4h] BYREF
  int v49; // [sp+94h] [bp-1088h]
  _DWORD v50[7]; // [sp+98h] [bp-1084h] BYREF
  int v51; // [sp+B4h] [bp-1068h]
  _DWORD v52[7]; // [sp+B8h] [bp-1064h] BYREF
  int v53; // [sp+D4h] [bp-1048h] BYREF
  _DWORD v54[7]; // [sp+D8h] [bp-1044h] BYREF
  char v55; // [sp+F7h] [bp-1025h] BYREF
  _DWORD v56[7]; // [sp+F8h] [bp-1024h] BYREF
  int v57; // [sp+114h] [bp-1008h]
  char v58[4100]; // [sp+118h] [bp-1004h] BYREF

  if ( *(unsigned __int8 *)(a2 + 17) <= 0x23u )
  {
    V_LOCK();
    V_INT((int)v56, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v57,
      v56[0],
      v56[1],
      v56[2],
      v56[3],
      v56[4],
      v56[5],
      v56[6],
      v57,
      "ans diff %d TICKET_MASK_KAS_2380 %d",
      *(unsigned __int8 *)(a2 + 17),
      36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      523,
      20,
      v58);
    return 2;
  }
  v4 = *(_DWORD *)(a1 + 800);
  v5 = *(unsigned __int8 *)(a2 + 16);
  v6 = v4 + v5;
  v42 = v4;
  v7 = v4 + 48 * v5;
  v41 = *(unsigned __int8 *)(v6 + 0x2000);
  v8 = vshld_n_s64(*(unsigned __int8 *)(v7 + 2069), 0x10u);
  HIDWORD(v38) = HIDWORD(v8) | _byteswap_ulong(*(_DWORD *)(v7 + 2064));
  LODWORD(v38) = (*(unsigned __int8 *)(v7 + 2070) << 8)
               | v8
               | *(unsigned __int8 *)(v7 + 2071)
               | (*(unsigned __int8 *)(v7 + 2068) << 24);
  v9 = _byteswap_ulong(*(_DWORD *)(v7 + 2076));
  v10 = _byteswap_ulong(*(_DWORD *)(v7 + 2072));
  v39 = _byteswap_ulong(*(_DWORD *)(v7 + 2084));
  v40 = _byteswap_ulong(*(_DWORD *)(v7 + 2080));
  v11 = *(unsigned __int8 *)(v7 + 2063);
  v12 = *(unsigned __int8 *)(v7 + 2060);
  v13 = _byteswap_ulong(*(_DWORD *)(v7 + 2056));
  v14 = *(unsigned __int8 *)(v7 + 2055);
  v15 = (*(unsigned __int8 *)(v7 + 2048) << 24)
      | (*(unsigned __int8 *)(v7 + 2049) << 16)
      | (*(unsigned __int8 *)(v7 + 2050) << 8);
  v16 = *(unsigned __int8 *)(v7 + 2051);
  v43[1] = v38;
  v17 = *(_QWORD *)(a2 + 26);
  LODWORD(v38) = (*(unsigned __int8 *)(v7 + 2061) << 16) | (v12 << 24) | v11;
  HIDWORD(v38) = v13;
  v18 = *(unsigned __int8 *)(v7 + 2052);
  v46 = v39;
  v47 = v40;
  v19 = v14 | (v18 << 24);
  v20 = *(unsigned __int8 *)(v7 + 2053);
  v21 = *(unsigned __int8 *)(v7 + 2054);
  v44 = v9;
  v45 = v10;
  LODWORD(v22) = v19 | (v20 << 16) | (v21 << 8);
  HIDWORD(v22) = v15 | v16;
  v43[0] = v38 | (*(unsigned __int8 *)(v7 + 2062) << 8);
  kHeavyHash((int *)v43, v22, bswap32(HIDWORD(v17)), bswap32(v17), v54, 1);
  v23 = (char *)&v53 + 3;
  v24 = v58;
  do
  {
    v26 = (unsigned __int8)*++v23;
    v25 = v26;
    *--v24 = v26;
  }
  while ( v23 != &v55 );
  v27 = target_to_diff_kas((int)v56, v25, (int)v24);
  v28 = v27;
  if ( v27 <= 0x23 )
  {
    V_LOCK();
    V_INT((int)v48, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v49,
      v48[0],
      v48[1],
      v48[2],
      v48[3],
      v48[4],
      v48[5],
      v48[6],
      v49,
      "hw error calculate diff %d ans diff %d TICKET_MASK_KAS_2380 %d",
      v28,
      *(unsigned __int8 *)(a2 + 17),
      36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      569,
      20,
      v58);
    return 2;
  }
  if ( v41 > v27 )
  {
LABEL_11:
    V_LOCK();
    V_INT((int)v50, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v51,
      v50[0],
      v50[1],
      v50[2],
      v50[3],
      v50[4],
      v50[5],
      v50[6],
      v51,
      "hw diff (%d<%d) not reach pool",
      v28,
      v41);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      589,
      20,
      v58);
    return 1;
  }
  else
  {
    v29 = (unsigned __int8 *)v56;
    v30 = v42 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v31 = v30 - 1;
    v32 = v30 + 31;
    do
    {
      v34 = *v29++;
      v33 = v34;
      v35 = *(unsigned __int8 *)++v31;
      v36 = v33 > v35;
      if ( v33 < v35 )
        break;
      if ( v36 )
        goto LABEL_11;
    }
    while ( v31 != v32 );
    V_LOCK();
    V_INT((int)v52, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v58,
      0x1000u,
      0,
      v53,
      v52[0],
      v52[1],
      v52[2],
      v52[3],
      v52[4],
      v52[5],
      v52[6],
      v53,
      "Verification passed! diff %d expected_diff %d ",
      v28,
      v41);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      592,
      20,
      v58);
    return 0;
  }
}
