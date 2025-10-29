int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  int v2; // r7
  int v3; // r4
  unsigned int v5; // r8
  int v6; // r0
  unsigned int v7; // r9
  unsigned int v8; // r7
  unsigned int valid; // r0
  unsigned __int8 *v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r4
  unsigned int v14; // t1
  unsigned int v15; // t1
  bool v16; // cc
  void *v17; // r0
  int v18; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // [sp+38h] [bp-1818h] BYREF
  int v26; // [sp+58h] [bp-17F8h] BYREF
  int v27; // [sp+78h] [bp-17D8h] BYREF
  int v28; // [sp+98h] [bp-17B8h] BYREF
  int v29; // [sp+B8h] [bp-1798h] BYREF
  _BYTE v30[32]; // [sp+D8h] [bp-1778h] BYREF
  _BYTE v31[32]; // [sp+F8h] [bp-1758h] BYREF
  _BYTE v32[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  _BYTE v34[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v3 = *(_DWORD *)(a1 + 816);
  v5 = *(_DWORD *)(v3 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v3 + 140 * v2 + 5120), 0x88u);
  s[34] = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v32, 200, 9);
  equihash_blake2b_update((int)v32, s);
  Sha256_Onestep(s, 1487, v31);
  Sha256_Onestep(v31, 32, v30);
  reverse_hex((int)v30, 0x20u);
  v6 = target_to_diff_zec((int)v30);
  v7 = *(unsigned __int8 *)(a2 + 52);
  v8 = v6;
  if ( v7 != v6 )
  {
    V_LOCK(v6);
    V_INT((int)&v25, "chain");
    v20 = 3;
    v22 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "check_nonce_zec_1746",
      20,
      886,
      20,
      v34);
    return v20;
  }
  if ( v7 <= 0x11 )
  {
    V_LOCK(v6);
    V_INT((int)&v26, "chain");
    v20 = 2;
    v21 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "check_nonce_zec_1746",
      20,
      892,
      20,
      v34);
    return v20;
  }
  valid = IsValidSolution(v32, a2 + 54);
  if ( valid )
  {
    V_LOCK(valid);
    V_INT((int)&v27, "chain");
    v20 = 2;
    v24 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "check_nonce_zec_1746",
      20,
      899,
      20,
      v34);
    return v20;
  }
  if ( v8 < v5 )
  {
LABEL_13:
    V_LOCK(valid);
    V_INT((int)&v28, "chain");
    v20 = 1;
    v23 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
      192,
      "check_nonce_zec_1746",
      20,
      927,
      20,
      v34);
    return v20;
  }
  v10 = v30;
  v11 = v3 + 32 * (*(unsigned __int8 *)(a2 + 53) + 736);
  v12 = v11 - 1;
  v13 = v11 + 31;
  do
  {
    v14 = *v10++;
    valid = v14;
    v15 = *(unsigned __int8 *)++v12;
    v16 = valid > v15;
    if ( valid < v15 )
      break;
    if ( v16 )
      goto LABEL_13;
  }
  while ( v12 != v13 );
  v17 = memcpy((void *)(a2 + 1398), s, 0x5CFu);
  V_LOCK(v17);
  V_INT((int)&v29, "chain");
  v18 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
    192,
    "check_nonce_zec_1746",
    20,
    932,
    20,
    v34);
  return 0;
}
