int __fastcall sub_163578(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char s[4072]; // [sp+18h] [bp-2000h] BYREF
  char v13[4096]; // [sp+1018h] [bp-1000h] BYREF

  v2 = snprintf(s, 0x1000u, "/usr/bin/checksize.sh %d %s", 0, *(const char **)(a1 + 8));
  if ( v2 >= 0x1000 )
  {
    V_LOCK(v2);
    v10 = logfmt_raw((int)v13, 0x1000u);
    v6 = -1;
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/log/log.c",
      173,
      "log_rotate",
      10,
      214,
      40,
      v13);
  }
  else
  {
    v3 = my_system(s);
    if ( v3 )
    {
      V_LOCK(v3);
      v9 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "log_rotate",
        10,
        220,
        40,
        v13);
    }
    v4 = snprintf(
           s,
           0x1000u,
           "/usr/bin/rotate.sh %d %d %s %s %s %s %s",
           0,
           *(_DWORD *)a1,
           *(const char **)(a1 + 8),
           *(const char **)(a1 + 4),
           (const char *)(a1 + 42),
           (const char *)(a1 + 72),
           *(const char **)(a1 + 92));
    if ( v4 >= 0x1000 )
    {
      V_LOCK(v4);
      v11 = logfmt_raw((int)v13, 0x1000u);
      v6 = -1;
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "log_rotate",
        10,
        226,
        40,
        v13);
    }
    else
    {
      v5 = my_system(s);
      v6 = v5;
      if ( !v5 )
        return 0;
      V_LOCK(v5);
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "log_rotate",
        10,
        232,
        40,
        v13);
    }
  }
  return v6;
}
