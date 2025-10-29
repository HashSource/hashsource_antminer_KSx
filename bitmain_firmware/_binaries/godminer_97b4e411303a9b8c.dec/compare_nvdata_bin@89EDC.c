int compare_nvdata_bin()
{
  const char *v0; // r4
  int v1; // r5
  const char *v2; // r1
  int v3; // r0
  int v4; // r0
  int v6; // r0
  _BYTE v7[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = (const char *)&unk_2E670D;
  v1 = 0;
  while ( !strstr(*(const char **)(v0 - 17), "str") )
  {
    if ( *((unsigned __int8 *)v0 - 1) != **(unsigned __int8 **)(v0 - 5) )
    {
      V_LOCK(v0);
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "compare_nvdata_bin",
        18,
        1792,
        40,
        v7);
      return 1;
    }
LABEL_6:
    ++v1;
    v0 += 88;
    if ( v1 == 12 )
      return 0;
  }
  if ( **(_BYTE **)(v0 - 9) )
    v2 = *(const char **)(v0 - 9);
  else
    v2 = "None";
  v3 = strcmp(v0, v2);
  if ( !v3 )
    goto LABEL_6;
  V_LOCK(v3);
  v6 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/god-miner.c",
    160,
    "compare_nvdata_bin",
    18,
    1783,
    40,
    v7);
  return 1;
}
