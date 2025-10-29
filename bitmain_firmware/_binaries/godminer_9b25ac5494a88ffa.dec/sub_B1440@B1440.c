int __fastcall sub_B1440(int a1)
{
  unsigned __int16 v2; // r0
  int v3; // r1
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+10h] [bp-1010h] BYREF
  int v10; // [sp+14h] [bp-100Ch] BYREF
  struct timeval tv; // [sp+18h] [bp-1008h] BYREF
  _BYTE v12[4096]; // [sp+20h] [bp-1000h] BYREF

  dbl_2E84E8 = 0.0;
  gettimeofday(&tv, 0);
  v9 = tv.tv_usec + 1000000 * tv.tv_sec;
  v2 = rand_r((unsigned int *)&v9);
  v3 = *(_DWORD *)(a1 + 1096);
  v10 = 0;
  v4 = v2;
  v5 = str2hex((int)&v10, v3, 8);
  if ( v5 != 4 )
  {
    V_LOCK(v5);
    v6 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
      194,
      "pre_push_work_rvn_2044",
      22,
      25,
      100,
      v12);
  }
  *(_QWORD *)&dbl_2E84E8 += v4;
  V_LOCK(32);
  v7 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
    194,
    "pre_push_work_rvn_2044",
    22,
    33,
    40,
    v12);
  return 0;
}
