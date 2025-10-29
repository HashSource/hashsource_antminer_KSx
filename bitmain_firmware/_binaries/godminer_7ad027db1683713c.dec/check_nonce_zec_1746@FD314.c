int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  int v2; // r7
  int v3; // r4
  unsigned int v6; // r8
  int v7; // r0
  unsigned int v8; // r9
  unsigned int v9; // r7
  unsigned __int8 *v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r4
  unsigned int v14; // r0
  unsigned int v15; // t1
  unsigned int v16; // t1
  bool v17; // cc
  int v19; // r4
  _DWORD v20[7]; // [sp+38h] [bp-1818h] BYREF
  int v21; // [sp+54h] [bp-17FCh]
  _DWORD v22[7]; // [sp+58h] [bp-17F8h] BYREF
  int v23; // [sp+74h] [bp-17DCh]
  _DWORD v24[7]; // [sp+78h] [bp-17D8h] BYREF
  int v25; // [sp+94h] [bp-17BCh]
  _DWORD v26[7]; // [sp+98h] [bp-17B8h] BYREF
  int v27; // [sp+B4h] [bp-179Ch]
  _DWORD v28[7]; // [sp+B8h] [bp-1798h] BYREF
  int v29; // [sp+D4h] [bp-177Ch]
  _BYTE v30[32]; // [sp+D8h] [bp-1778h] BYREF
  unsigned __int8 v31[32]; // [sp+F8h] [bp-1758h] BYREF
  char v32[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  char v34[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v3 = *(_DWORD *)(a1 + 800);
  v6 = *(_DWORD *)(v3 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v3 + 140 * v2 + 5120), 0x88u);
  s[34] = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v32, 200, 9);
  equihash_blake2b_update((int)v32, (char *)s, 0x8Cu);
  Sha256_Onestep((unsigned __int8 *)s, 1487, (int)v31);
  Sha256_Onestep(v31, 32, (int)v30);
  reverse_hex((int)v30, 0x20u);
  v7 = target_to_diff_zec((int)v30);
  v8 = *(unsigned __int8 *)(a2 + 52);
  v9 = v7;
  if ( v8 != v7 )
  {
    V_LOCK();
    V_INT((int)v20, "chain", *(int *)(a1 + 232));
    v19 = 3;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      "hw error, type %d, calculate diff %d, chip return diff %d,",
      3,
      v9,
      *(unsigned __int8 *)(a2 + 52));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      886,
      20,
      v34);
    return v19;
  }
  if ( v8 <= 0x11 )
  {
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 232));
    v19 = 2;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "hw error, type %d, diff %d, ticket mask %d",
      2,
      v8,
      18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      892,
      20,
      v34);
    return v19;
  }
  if ( IsValidSolution(v32, a2 + 54) )
  {
    V_LOCK();
    V_INT((int)v24, "chain", *(int *)(a1 + 232));
    v19 = 2;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "hw error, type %d, solution verify failed",
      2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      899,
      20,
      v34);
    return v19;
  }
  if ( v9 < v6 )
  {
LABEL_13:
    V_LOCK();
    V_INT((int)v26, "chain", *(int *)(a1 + 232));
    v19 = 1;
    logfmt_raw(
      v34,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "hw error, type %d, this diff(%d) not reach pool(%d)",
      1,
      v9,
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      187,
      "check_nonce_zec_1746",
      20,
      927,
      20,
      v34);
    return v19;
  }
  v10 = v30;
  v11 = v3 + 32 * (*(unsigned __int8 *)(a2 + 53) + 736);
  v12 = v11 - 1;
  v13 = v11 + 31;
  do
  {
    v15 = *v10++;
    v14 = v15;
    v16 = *(unsigned __int8 *)++v12;
    v17 = v14 > v16;
    if ( v14 < v16 )
      break;
    if ( v17 )
      goto LABEL_13;
  }
  while ( v12 != v13 );
  memcpy((void *)(a2 + 1398), s, 0x5CFu);
  V_LOCK();
  V_INT((int)v28, "chain", *(int *)(a1 + 232));
  logfmt_raw(v34, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, "hw no error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "check_nonce_zec_1746",
    20,
    932,
    20,
    v34);
  return 0;
}
