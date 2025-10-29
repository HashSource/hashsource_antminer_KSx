int __fastcall sub_AAFE8(int a1)
{
  unsigned __int16 v2; // r0
  int v3; // r1
  int v4; // r6
  int v6; // [sp+10h] [bp-1010h] BYREF
  int v7; // [sp+14h] [bp-100Ch] BYREF
  struct timeval tv; // [sp+18h] [bp-1008h] BYREF
  char v9[4096]; // [sp+20h] [bp-1000h] BYREF

  dbl_2D3460 = 0.0;
  gettimeofday(&tv, 0);
  v6 = tv.tv_usec + 1000000 * tv.tv_sec;
  v2 = rand_r((unsigned int *)&v6);
  v3 = *(_DWORD *)(a1 + 1096);
  v7 = 0;
  v4 = v2;
  if ( str2hex((int)&v7, v3, 8) != 4 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Failed to convert string nonce1 to hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
      189,
      "pre_push_work_rvn_2020",
      22,
      25,
      100,
      v9);
  }
  *(_QWORD *)&dbl_2D3460 += v4;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "start_nonce_rvn_high: %016llx", dbl_2D3460);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
    189,
    "pre_push_work_rvn_2020",
    22,
    33,
    40,
    v9);
  return 0;
}
