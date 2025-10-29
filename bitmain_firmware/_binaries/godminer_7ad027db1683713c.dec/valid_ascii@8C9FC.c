int __fastcall valid_ascii(const char *a1)
{
  signed int v2; // r0
  const char *v3; // r2
  int v4; // t1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Null string passed to valid_ascii");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_ascii",
      11,
      240,
      20,
      v6);
    return 0;
  }
  v2 = strlen(a1);
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Zero length string passed to valid_ascii");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_ascii",
      11,
      246,
      20,
      v6);
    return 0;
  }
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3++;
    if ( (unsigned int)(v4 - 32) > 0x5E )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "Invalid char passed to valid_ascii");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/util.c",
        150,
        "valid_ascii",
        11,
        255,
        20,
        v6);
      return 0;
    }
  }
  while ( v3 - a1 < v2 );
  return 1;
}
