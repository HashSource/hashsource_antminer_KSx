int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  int v2; // r7
  int v3; // r4
  unsigned int v6; // r8
  int v7; // r0
  unsigned int v8; // r9
  unsigned int v9; // r7
  unsigned int valid; // r0
  unsigned __int8 *v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r4
  unsigned int v15; // t1
  unsigned int v16; // t1
  bool v17; // cc
  void *v18; // r0
  int v19; // r0
  int v21; // r4
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // [sp+38h] [bp-1818h] BYREF
  int v27; // [sp+58h] [bp-17F8h] BYREF
  int v28; // [sp+78h] [bp-17D8h] BYREF
  int v29; // [sp+98h] [bp-17B8h] BYREF
  int v30; // [sp+B8h] [bp-1798h] BYREF
  _BYTE v31[32]; // [sp+D8h] [bp-1778h] BYREF
  unsigned __int8 v32[32]; // [sp+F8h] [bp-1758h] BYREF
  char v33[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  _BYTE v35[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v3 = *(_DWORD *)(a1 + 824);
  v6 = *(_DWORD *)(v3 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v3 + 140 * v2 + 5120), 0x88u);
  s[34] = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v33, 200, 9);
  equihash_blake2b_update((int)v33, (char *)s, 0x8Cu);
  Sha256_Onestep((unsigned __int8 *)s, 1487, (int)v32);
  Sha256_Onestep(v32, 32, (int)v31);
  reverse_hex((int)v31, 0x20u);
  v7 = target_to_diff_zec((int)v31);
  v8 = *(unsigned __int8 *)(a2 + 52);
  v9 = v7;
  if ( v8 != v7 )
  {
    V_LOCK(v7);
    V_INT((int)&v26, "chain", *(int *)(a1 + 248));
    v21 = 3;
    v23 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      886,
      20,
      v35);
    return v21;
  }
  if ( v8 <= 0x11 )
  {
    V_LOCK(v7);
    V_INT((int)&v27, "chain", *(int *)(a1 + 248));
    v21 = 2;
    v22 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      892,
      20,
      v35);
    return v21;
  }
  valid = IsValidSolution(v33, a2 + 54);
  if ( valid )
  {
    V_LOCK(valid);
    V_INT((int)&v28, "chain", *(int *)(a1 + 248));
    v21 = 2;
    v25 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      899,
      20,
      v35);
    return v21;
  }
  if ( v9 < v6 )
  {
LABEL_13:
    V_LOCK(valid);
    V_INT((int)&v29, "chain", *(int *)(a1 + 248));
    v21 = 1;
    v24 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      927,
      20,
      v35);
    return v21;
  }
  v11 = v31;
  v12 = v3 + 32 * (*(unsigned __int8 *)(a2 + 53) + 736);
  v13 = v12 - 1;
  v14 = v12 + 31;
  do
  {
    v15 = *v11++;
    valid = v15;
    v16 = *(unsigned __int8 *)++v13;
    v17 = valid > v16;
    if ( valid < v16 )
      break;
    if ( v17 )
      goto LABEL_13;
  }
  while ( v13 != v14 );
  v18 = memcpy((void *)(a2 + 1398), s, 0x5CFu);
  V_LOCK(v18);
  V_INT((int)&v30, "chain", *(int *)(a1 + 248));
  v19 = logfmt_raw((int)v35, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "check_nonce_zec_1746",
    20,
    932,
    20,
    v35);
  return 0;
}
