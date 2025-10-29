int __fastcall my_system(const char *a1)
{
  FILE *v1; // r4
  int result; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int *v7; // r0
  int v8; // r0
  char s[1024]; // [sp+10h] [bp-1400h] BYREF
  char v10[4096]; // [sp+410h] [bp-1000h] BYREF

  if ( a1 )
  {
    v1 = popen(a1, "r");
    if ( v1 )
    {
      while ( fgets(s, 1024, v1) )
        ;
      result = pclose(v1);
      v3 = result;
      if ( result == -1 )
      {
        V_LOCK(-1);
        v6 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/common/general/log/log.c",
          173,
          "my_system",
          9,
          169,
          40,
          v10);
      }
      else
      {
        if ( !result )
          return result;
        V_LOCK(result);
        v3 = BYTE1(v3);
        v4 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v4);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/common/general/log/log.c",
          173,
          "my_system",
          9,
          178,
          40,
          v10);
      }
    }
    else
    {
      V_LOCK(0);
      v7 = _errno_location();
      v3 = -1;
      strerror(*v7);
      v8 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/common/general/log/log.c",
        173,
        "my_system",
        9,
        158,
        40,
        v10);
    }
  }
  else
  {
    V_LOCK(0);
    v3 = -1;
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/log/log.c",
      173,
      "my_system",
      9,
      153,
      40,
      v10);
  }
  return v3;
}
