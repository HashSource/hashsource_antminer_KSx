int __fastcall valid_hex(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r2
  const char *v4; // r0
  int v5; // t1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Null string passed to valid_hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_hex",
      9,
      215,
      20,
      v7);
    return 0;
  }
  v2 = strlen(a1);
  if ( v2 )
  {
    if ( *(int *)&aGetValueFromLo[4 * *(unsigned __int8 *)a1 + 148] >= 0 )
    {
      v3 = a1;
      v4 = &a1[v2 - 1];
      while ( v3 != v4 )
      {
        v5 = *(unsigned __int8 *)++v3;
        if ( *(int *)&aGetValueFromLo[4 * v5 + 148] < 0 )
          goto LABEL_8;
      }
      return 1;
    }
LABEL_8:
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Invalid charpassed to valid_hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_hex",
      9,
      225,
      20,
      v7);
    return 0;
  }
  return 1;
}
