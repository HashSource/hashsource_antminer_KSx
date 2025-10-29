int __fastcall valid_ascii(const char *a1)
{
  signed int v2; // r0
  const char *v3; // r2
  int v4; // t1
  int v5; // r0
  int v7; // r0
  int v8; // r0
  _BYTE v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK(0);
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/util.c",
      155,
      "valid_ascii",
      11,
      301,
      20,
      v9);
    return 0;
  }
  v2 = strlen(a1);
  if ( !v2 )
  {
    V_LOCK(0);
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/util.c",
      155,
      "valid_ascii",
      11,
      307,
      20,
      v9);
    return 0;
  }
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3++;
    if ( (unsigned int)(v4 - 32) > 0x5E )
    {
      V_LOCK(v2);
      v5 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/util.c",
        155,
        "valid_ascii",
        11,
        316,
        20,
        v9);
      return 0;
    }
  }
  while ( v3 - a1 < v2 );
  return 1;
}
