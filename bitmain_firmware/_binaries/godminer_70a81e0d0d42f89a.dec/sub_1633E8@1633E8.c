int __fastcall sub_1633E8(int a1, const char *a2, const char *a3, const char *a4)
{
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v10; // r0
  char s[4072]; // [sp+18h] [bp-2004h] BYREF
  char v12[4100]; // [sp+1018h] [bp-1004h] BYREF

  v4 = snprintf(
         s,
         0x1000u,
         "/usr/bin/updatename.sh %s %s %s %s %s %s",
         *(const char **)(a1 + 8),
         (const char *)(a1 + 42),
         (const char *)(a1 + 72),
         a2,
         a3,
         a4);
  if ( v4 >= 0x1000 )
  {
    V_LOCK(v4);
    v10 = logfmt_raw((int)v12, 0x1000u);
    v7 = -1;
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/log/log.c",
      173,
      "_log_update_name",
      16,
      192,
      40,
      v12);
  }
  else
  {
    V_LOCK(v4);
    v5 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/log/log.c",
      173,
      "_log_update_name",
      16,
      195,
      20,
      v12);
    v6 = my_system(s);
    v7 = v6;
    if ( v6 )
    {
      V_LOCK(v6);
      v8 = logfmt_raw((int)v12, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "_log_update_name",
        16,
        199,
        40,
        v12);
    }
  }
  return v7;
}
