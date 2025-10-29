int __fastcall sub_A5C70(int a1, int a2, char *a3)
{
  int v3; // r5
  char *v7; // r8
  char *v8; // r7
  char *v9; // r5
  int v10; // r0
  const char *v11; // r12
  int v12; // r3
  const char *v14; // [sp+4h] [bp-1020h]
  _BYTE v15[4100]; // [sp+20h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    v7 = (char *)abin2hex(v3 + 1468, 4);
    v8 = (char *)abin2hex(v3 + 1480, 28);
    v9 = (char *)abin2hex(v3 + 1508, 1347);
    V_LOCK(v9);
    target_to_diff_zec(a1 + 1032);
    v10 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_prepare_upstream_work_zec",
      33,
      322,
      20,
      v15);
    v11 = *(const char **)(a2 + 16);
    v12 = *(_DWORD *)(a2 + 1920);
    v14 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v12 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\": %d, \"method\": \"mining.submit\", \"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"]}",
      v12,
      v11,
      v14,
      v7,
      v8,
      v9);
    free(v7);
    free(v8);
    free(v9);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
