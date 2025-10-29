int __fastcall check_nonce_ks5(int a1, int a2)
{
  int v4; // r1
  int v5; // r12
  int v6; // r3
  int v7; // r12
  __int64 v8; // r4
  unsigned int v9; // r8
  unsigned int v10; // r9
  int v11; // r6
  unsigned int v12; // r7
  int v13; // r2
  int v14; // r3
  int v15; // r1
  __int64 v16; // d7
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r6
  __int64 v21; // r2
  char *v22; // r3
  _BYTE *v23; // r2
  char v24; // t1
  unsigned int v25; // r0
  unsigned __int8 *v26; // r2
  int v27; // r1
  int v28; // r3
  int v29; // r1
  unsigned int v30; // r12
  unsigned int v31; // t1
  unsigned int v32; // t1
  bool v33; // cc
  int v34; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  __int64 v39; // [sp+30h] [bp-10ECh]
  unsigned int v40; // [sp+38h] [bp-10E4h]
  unsigned int v41; // [sp+3Ch] [bp-10E0h]
  unsigned int v42; // [sp+50h] [bp-10CCh]
  int v43; // [sp+54h] [bp-10C8h]
  _QWORD v44[2]; // [sp+58h] [bp-10C4h] BYREF
  unsigned int v45; // [sp+68h] [bp-10B4h]
  unsigned int v46; // [sp+6Ch] [bp-10B0h]
  unsigned int v47; // [sp+70h] [bp-10ACh]
  unsigned int v48; // [sp+74h] [bp-10A8h]
  char v49[32]; // [sp+78h] [bp-10A4h] BYREF
  char v50[32]; // [sp+98h] [bp-1084h] BYREF
  char v51[31]; // [sp+B8h] [bp-1064h] BYREF
  char v52; // [sp+D7h] [bp-1045h] BYREF
  int v53[7]; // [sp+D8h] [bp-1044h] BYREF
  char v54; // [sp+F7h] [bp-1025h] BYREF
  _BYTE v55[32]; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v56[4100]; // [sp+118h] [bp-1004h] BYREF

  if ( *(unsigned __int8 *)(a2 + 17) <= 0x23u )
  {
    V_LOCK(a1);
    V_INT((int)v55, "chain", *(int *)(a1 + 248));
    v37 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      187,
      "check_nonce_ks5",
      15,
      527,
      20,
      v56);
    return 2;
  }
  v4 = *(_DWORD *)(a1 + 824);
  v5 = *(unsigned __int8 *)(a2 + 16);
  v6 = v4 + v5;
  v43 = v4;
  v7 = v4 + 48 * v5;
  v42 = *(unsigned __int8 *)(v6 + 0x2000);
  LODWORD(v8) = *(unsigned __int8 *)(v7 + 2071) | (*(unsigned __int8 *)(v7 + 2068) << 24);
  HIDWORD(v8) = _byteswap_ulong(*(_DWORD *)(v7 + 2064));
  v39 = vshld_n_s64(*(unsigned __int8 *)(v7 + 2069), 0x10u) | v8;
  v9 = _byteswap_ulong(*(_DWORD *)(v7 + 2076));
  v10 = _byteswap_ulong(*(_DWORD *)(v7 + 2072));
  v40 = _byteswap_ulong(*(_DWORD *)(v7 + 2084));
  v41 = _byteswap_ulong(*(_DWORD *)(v7 + 2080));
  LODWORD(v8) = *(unsigned __int8 *)(v7 + 2063);
  v11 = *(unsigned __int8 *)(v7 + 2060);
  v12 = _byteswap_ulong(*(_DWORD *)(v7 + 2056));
  v13 = *(unsigned __int8 *)(v7 + 2055);
  v14 = (*(unsigned __int8 *)(v7 + 2048) << 24)
      | (*(unsigned __int8 *)(v7 + 2049) << 16)
      | (*(unsigned __int8 *)(v7 + 2050) << 8);
  v15 = *(unsigned __int8 *)(v7 + 2051);
  v44[1] = (*(unsigned __int8 *)(v7 + 2070) << 8) | (unsigned __int64)v39;
  v16 = *(_QWORD *)(a2 + 26);
  LODWORD(v39) = (*(unsigned __int8 *)(v7 + 2061) << 16) | (v11 << 24) | v8;
  HIDWORD(v39) = v12;
  v17 = *(unsigned __int8 *)(v7 + 2052);
  v47 = v40;
  v48 = v41;
  v18 = v13 | (v17 << 24);
  v19 = *(unsigned __int8 *)(v7 + 2053);
  v20 = *(unsigned __int8 *)(v7 + 2054);
  v45 = v9;
  v46 = v10;
  LODWORD(v21) = v18 | (v19 << 16) | (v20 << 8);
  HIDWORD(v21) = v14 | v15;
  v44[0] = v39 | (*(unsigned __int8 *)(v7 + 2062) << 8);
  kHeavyHash((int *)v44, v21, bswap32(HIDWORD(v16)), bswap32(v16), v53, 1);
  v22 = &v52;
  v23 = v56;
  do
  {
    v24 = *++v22;
    *--v23 = v24;
  }
  while ( v22 != &v54 );
  v25 = target_to_diff_ks5((int)v55);
  if ( v25 <= 0x23 )
  {
    V_LOCK(v25);
    V_INT((int)v49, "chain", *(int *)(a1 + 248));
    v38 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      187,
      "check_nonce_ks5",
      15,
      573,
      20,
      v56);
    return 2;
  }
  if ( v42 > v25 )
  {
LABEL_11:
    V_LOCK(v25);
    V_INT((int)v50, "chain", *(int *)(a1 + 248));
    v36 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      187,
      "check_nonce_ks5",
      15,
      594,
      20,
      v56);
    return 1;
  }
  else
  {
    v26 = v55;
    v27 = v43 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v28 = v27 - 1;
    v29 = v27 + 31;
    do
    {
      v31 = *v26++;
      v30 = v31;
      v32 = *(unsigned __int8 *)++v28;
      v25 = v32;
      v33 = v30 > v32;
      if ( v30 < v32 )
        break;
      if ( v33 )
        goto LABEL_11;
    }
    while ( v28 != v29 );
    V_LOCK(v25);
    V_INT((int)v51, "chain", *(int *)(a1 + 248));
    v34 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
      187,
      "check_nonce_ks5",
      15,
      597,
      20,
      v56);
    return 0;
  }
}
