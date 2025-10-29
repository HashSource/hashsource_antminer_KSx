int __fastcall check_nonce_ks5(int a1, int a2)
{
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r12
  __int64 v7; // d16
  unsigned int v8; // r8
  unsigned int v9; // r9
  int v10; // r4
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
  char *v21; // r3
  _BYTE *v22; // r2
  char v23; // t1
  unsigned int v24; // r0
  unsigned __int8 *v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r1
  unsigned int v29; // r12
  unsigned int v30; // t1
  unsigned int v31; // t1
  bool v32; // cc
  int v33; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
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
  char v48[32]; // [sp+78h] [bp-10A4h] BYREF
  char v49[32]; // [sp+98h] [bp-1084h] BYREF
  char v50[31]; // [sp+B8h] [bp-1064h] BYREF
  char v51; // [sp+D7h] [bp-1045h] BYREF
  char v52[31]; // [sp+D8h] [bp-1044h] BYREF
  char v53; // [sp+F7h] [bp-1025h] BYREF
  _BYTE v54[32]; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v55[4100]; // [sp+118h] [bp-1004h] BYREF

  if ( *(unsigned __int8 *)(a2 + 17) <= 0x24u )
  {
    V_LOCK(a1);
    V_INT((int)v54, "chain");
    v36 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "check_nonce_ks5",
      15,
      862,
      20,
      v55);
    return 2;
  }
  v3 = *(_DWORD *)(a1 + 824);
  v4 = *(unsigned __int8 *)(a2 + 16);
  v5 = v3 + v4;
  v42 = v3;
  v6 = v3 + 48 * v4;
  v41 = *(unsigned __int8 *)(v5 + 0x2000);
  v7 = vshld_n_s64(*(unsigned __int8 *)(v6 + 2069), 0x10u);
  HIDWORD(v38) = HIDWORD(v7) | _byteswap_ulong(*(_DWORD *)(v6 + 2064));
  LODWORD(v38) = (*(unsigned __int8 *)(v6 + 2070) << 8)
               | v7
               | *(unsigned __int8 *)(v6 + 2071)
               | (*(unsigned __int8 *)(v6 + 2068) << 24);
  v8 = _byteswap_ulong(*(_DWORD *)(v6 + 2076));
  v9 = _byteswap_ulong(*(_DWORD *)(v6 + 2072));
  v39 = _byteswap_ulong(*(_DWORD *)(v6 + 2084));
  v40 = _byteswap_ulong(*(_DWORD *)(v6 + 2080));
  v10 = *(unsigned __int8 *)(v6 + 2063);
  v11 = *(unsigned __int8 *)(v6 + 2060);
  v12 = _byteswap_ulong(*(_DWORD *)(v6 + 2056));
  v13 = *(unsigned __int8 *)(v6 + 2055);
  v14 = (*(unsigned __int8 *)(v6 + 2048) << 24)
      | (*(unsigned __int8 *)(v6 + 2049) << 16)
      | (*(unsigned __int8 *)(v6 + 2050) << 8);
  v15 = *(unsigned __int8 *)(v6 + 2051);
  v43[1] = v38;
  v16 = *(_QWORD *)(a2 + 26);
  LODWORD(v38) = (*(unsigned __int8 *)(v6 + 2061) << 16) | (v11 << 24) | v10;
  HIDWORD(v38) = v12;
  v17 = *(unsigned __int8 *)(v6 + 2052);
  v46 = v39;
  v47 = v40;
  v18 = v13 | (v17 << 24);
  v19 = *(unsigned __int8 *)(v6 + 2053);
  v20 = *(unsigned __int8 *)(v6 + 2054);
  v44 = v8;
  v45 = v9;
  v43[0] = v38 | (*(unsigned __int8 *)(v6 + 2062) << 8);
  kHeavyHash(v43, 1, v18 | (v19 << 16) | (v20 << 8), v14 | v15, bswap32(HIDWORD(v16)), bswap32(v16), v52, 1);
  v21 = &v51;
  v22 = v55;
  do
  {
    v23 = *++v21;
    *--v22 = v23;
  }
  while ( v21 != &v53 );
  v24 = target_to_diff_ks5((int)v54);
  if ( v24 <= 0x24 )
  {
    V_LOCK(v24);
    V_INT((int)v48, "chain");
    v37 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "check_nonce_ks5",
      15,
      908,
      20,
      v55);
    return 2;
  }
  if ( v41 > v24 )
  {
LABEL_11:
    V_LOCK(v24);
    V_INT((int)v49, "chain");
    v35 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "check_nonce_ks5",
      15,
      929,
      20,
      v55);
    return 1;
  }
  else
  {
    v25 = v54;
    v26 = v42 + 32 * (*(unsigned __int8 *)(a2 + 16) + 260);
    v27 = v26 - 1;
    v28 = v26 + 31;
    do
    {
      v30 = *v25++;
      v29 = v30;
      v31 = *(unsigned __int8 *)++v27;
      v24 = v31;
      v32 = v29 > v31;
      if ( v29 < v31 )
        break;
      if ( v32 )
        goto LABEL_11;
    }
    while ( v27 != v28 );
    V_LOCK(v24);
    V_INT((int)v50, "chain");
    v33 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
      192,
      "check_nonce_ks5",
      15,
      932,
      20,
      v55);
    return 0;
  }
}
