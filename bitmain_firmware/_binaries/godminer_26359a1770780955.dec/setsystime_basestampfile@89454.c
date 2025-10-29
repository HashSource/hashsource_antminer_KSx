int setsystime_basestampfile()
{
  FILE *v0; // r0
  FILE *v1; // r5
  int v2; // r0
  int v3; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r0
  time_t when[22]; // [sp+10h] [bp-106Ch] BYREF
  time_t v12[4]; // [sp+68h] [bp-1014h] BYREF
  _BYTE v13[4100]; // [sp+78h] [bp-1004h] BYREF

  v0 = (FILE *)fopen64("/nvdata/timestamp.data", "r+");
  v1 = v0;
  if ( v0 )
  {
    when[0] = 0;
    v2 = fscanf(v0, "%ld", when);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "setsystime_basestampfile",
      24,
      1475,
      40,
      v13);
    if ( when[0] )
      stime(when);
    return fclose(v1);
  }
  v5 = fopen64("/nvdata/timestamp.data", "w+");
  v1 = (FILE *)v5;
  if ( v5 )
  {
    V_LOCK(v5);
    v6 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/god-miner.c",
      160,
      "setsystime_basestampfile",
      24,
      1458,
      40,
      v13);
    if ( _xstat64(3, "/config/sn", when)
      && _xstat64(3, "/config/passwd", when)
      && (v7 = _xstat64(3, "/config/shadow", when)) != 0 )
    {
      V_LOCK(v7);
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "setsystime_basestampfile",
        24,
        1466,
        40,
        v13);
    }
    else
    {
      fprintf(v1, "%ld", v12[0]);
      stime(v12);
    }
    fflush(v1);
    return fclose(v1);
  }
  V_LOCK(0);
  v9 = *_errno_location();
  strerror(v9);
  v10 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v10);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/god-miner.c",
           160,
           "setsystime_basestampfile",
           24,
           1452,
           40,
           v13);
}
