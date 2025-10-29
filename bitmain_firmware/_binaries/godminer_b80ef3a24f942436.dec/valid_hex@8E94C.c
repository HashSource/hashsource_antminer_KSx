int __fastcall valid_hex(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r2
  int v4; // t1
  int v5; // r0
  int v7; // r0
  _BYTE v8[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK(0);
    v7 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_hex",
      9,
      211,
      20,
      v8);
    return 0;
  }
  v2 = strlen(a1);
  if ( v2 )
  {
    if ( *(int *)&aGetValueFromLo[4 * *(unsigned __int8 *)a1 + 136] >= 0 )
    {
      v3 = a1;
      v2 += (size_t)(a1 - 1);
      while ( v3 != (const char *)v2 )
      {
        v4 = *(unsigned __int8 *)++v3;
        if ( *(int *)&aGetValueFromLo[4 * v4 + 136] < 0 )
          goto LABEL_8;
      }
      return 1;
    }
LABEL_8:
    V_LOCK(v2);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "valid_hex",
      9,
      221,
      20,
      v8);
    return 0;
  }
  return 1;
}
