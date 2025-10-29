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
  _BYTE *v24; // r2
  char v25; // t1
  unsigned int v26; // r0
  unsigned __int8 *v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // r1
  unsigned int v31; // r12
  unsigned int v32; // t1
  unsigned int v33; // t1
  bool v34; // cc
  int v35; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  __int64 v40; // [sp+30h] [bp-10ECh]
  unsigned int v41; // [sp+38h] [bp-10E4h]
  unsigned int v42; // [sp+3Ch] [bp-10E0h]
  unsigned int v43; // [sp+50h] [bp-10CCh]
  int v44; // [sp+54h] [bp-10C8h]
  _QWORD v45[2]; // [sp+58h] [bp-10C4h] BYREF
  unsigned int v46; // [sp+68h] [bp-10B4h]
  unsigned int v47; // [sp+6Ch] [bp-10B0h]
  unsigned int v48; // [sp+70h] [bp-10ACh]
  unsigned int v49; // [sp+74h] [bp-10A8h]
  char v50[32]; // [sp+78h] [bp-10A4h] BYREF
  char v51[32]; // [sp+98h] [bp-1084h] BYREF
  char v52[31]; // [sp+B8h] [bp-1064h] BYREF
  char v53; // [sp+D7h] [bp-1045h] BYREF
  int v54[7]; // [sp+D8h] [bp-1044h] BYREF
  char v55; // [sp+F7h] [bp-1025h] BYREF
  _BYTE v56[32]; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v57[4100]; // [sp+118h] [bp-1004h] BYREF

  if ( *(unsigned __int8 *)(a2 + 17) <= 0x23u )
  {
    V_LOCK(a1);
    V_INT((int)v56, "chain", *(int *)(a1 + 248));
    v38 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      529,
      20,
      v57);
    return 2;
  }
  v4 = *(_DWORD *)(a1 + 824);
  v5 = *(unsigned __int8 *)(a2 + 16);
  v6 = v4 + v5;
  v44 = v4;
  v7 = v4 + 48 * v5;
  v43 = *(unsigned __int8 *)(v6 + 0x2000);
  v8 = vshld_n_s64(*(unsigned __int8 *)(v7 + 2069), 0x10u);
  HIDWORD(v40) = HIDWORD(v8) | _byteswap_ulong(*(_DWORD *)(v7 + 2064));
  LODWORD(v40) = (*(unsigned __int8 *)(v7 + 2070) << 8)
               | v8
               | *(unsigned __int8 *)(v7 + 2071)
               | (*(unsigned __int8 *)(v7 + 2068) << 24);
  v9 = _byteswap_ulong(*(_DWORD *)(v7 + 2076));
  v10 = _byteswap_ulong(*(_DWORD *)(v7 + 2072));
  v41 = _byteswap_ulong(*(_DWORD *)(v7 + 2084));
  v42 = _byteswap_ulong(*(_DWORD *)(v7 + 2080));
  v11 = *(unsigned __int8 *)(v7 + 2063);
  v12 = *(unsigned __int8 *)(v7 + 2060);
  v13 = _byteswap_ulong(*(_DWORD *)(v7 + 2056));
  v14 = *(unsigned __int8 *)(v7 + 2055);
  v15 = (*(unsigned __int8 *)(v7 + 2048) << 24)
      | (*(unsigned __int8 *)(v7 + 2049) << 16)
      | (*(unsigned __int8 *)(v7 + 2050) << 8);
  v16 = *(unsigned __int8 *)(v7 + 2051);
  v45[1] = v40;
  v17 = *(_QWORD *)(a2 + 26);
  LODWORD(v40) = (*(unsigned __int8 *)(v7 + 2061) << 16) | (v12 << 24) | v11;
  HIDWORD(v40) = v13;
  v18 = *(unsigned __int8 *)(v7 + 2052);
  v48 = v41;
  v49 = v42;
  v19 = v14 | (v18 << 24);
  v20 = *(unsigned __int8 *)(v7 + 2053);
  v21 = *(unsigned __int8 *)(v7 + 2054);
  v46 = v9;
  v47 = v10;
  LODWORD(v22) = v19 | (v20 << 16) | (v21 << 8);
  HIDWORD(v22) = v15 | v16;
  v45[0] = v40 | (*(unsigned __int8 *)(v7 + 2062) << 8);
  kHeavyHash((int *)v45, v22, bswap32(HIDWORD(v17)), bswap32(v17), v54, 1);
  v23 = &v53;
  v24 = v57;
  do
  {
    v25 = *++v23;
    *--v24 = v25;
  }
  while ( v23 != &v55 );
  v26 = target_to_diff_kas((int)v56);
  if ( v26 <= 0x23 )
  {
    V_LOCK(v26);
    V_INT((int)v50, "chain", *(int *)(a1 + 248));
    v39 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      575,
      20,
      v57);
    return 2;
  }
  if ( v43 > v26 )
  {
LABEL_11:
    V_LOCK(v26);
    V_INT((int)v51, "chain", *(int *)(a1 + 248));
    v37 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      595,
      20,
      v57);
    return 1;
  }
  else
  {
    v27 = v56;
    v28 = v44 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v29 = v28 - 1;
    v30 = v28 + 31;
    do
    {
      v32 = *v27++;
      v31 = v32;
      v33 = *(unsigned __int8 *)++v29;
      v26 = v33;
      v34 = v31 > v33;
      if ( v31 < v33 )
        break;
      if ( v34 )
        goto LABEL_11;
    }
    while ( v29 != v30 );
    V_LOCK(v26);
    V_INT((int)v52, "chain", *(int *)(a1 + 248));
    v35 = logfmt_raw((int)v57, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "check_nonce_kas",
      15,
      598,
      20,
      v57);
    return 0;
  }
}
