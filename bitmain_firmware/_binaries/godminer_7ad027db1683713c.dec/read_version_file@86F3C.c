int read_version_file()
{
  char *v0; // r4
  int v1; // r5
  FILE *v2; // r6
  signed int v3; // r6
  char *v4; // r0
  char *v5; // r7
  int v6; // r8
  char *v7; // r0
  size_t v8; // r2
  size_t v9; // r0
  int v10; // r3
  size_t v11; // r0
  int v12; // r3
  char s[256]; // [sp+10h] [bp-1100h] BYREF
  char v15[4096]; // [sp+110h] [bp-1000h] BYREF

  v0 = (char *)max_timeout_value;
  v1 = (int)s;
  v2 = (FILE *)fopen64(opt_version_path, "rb");
  memset(s, 0, sizeof(s));
  if ( v2 )
  {
    v3 = fread(s, 1u, 0x100u, v2);
    if ( v3 <= 0 )
    {
      V_LOCK();
      v1 = (int)&g_zc;
      logfmt_raw(v15, 0x1000u, 0, "Read miner version file %s error %d", opt_version_path, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "read_version_file",
        17,
        657,
        100,
        v15);
    }
    else
    {
      v4 = strchr(s, 10);
      v5 = v4;
      if ( v4 )
      {
        memcpy(g_miner_compiletime, s, v4 - s);
        v6 = stpcpy(s, v5 + 1);
        v7 = strchr(s, 10);
        if ( v7 )
          v8 = v7 - s;
        else
          v8 = v6 - (_DWORD)s;
        if ( !v7 )
          ++v8;
        memcpy(g_miner_type, s, v8);
      }
      else
      {
        strcpy(g_miner_compiletime, s);
      }
      v9 = strlen(g_miner_compiletime) - 1;
      v10 = *((unsigned __int8 *)&max_timeout_value[20] + v9 + 4);
      if ( v10 == 10 )
      {
        *((_BYTE *)&max_timeout_value[20] + v9 + 4) = 0;
        v9 = strlen(g_miner_compiletime) - 1;
        v10 = *((unsigned __int8 *)&max_timeout_value[20] + v9 + 4);
      }
      if ( v10 == 13 )
        *((_BYTE *)&max_timeout_value[20] + v9 + 4) = 0;
      v11 = strlen(g_miner_type) - 1;
      v12 = *((unsigned __int8 *)&max_timeout_value[28] + v11 + 4);
      if ( v12 == 10 )
      {
        *((_BYTE *)&max_timeout_value[28] + v11 + 4) = 0;
        v11 = strlen(g_miner_type) - 1;
        v12 = *((unsigned __int8 *)&max_timeout_value[28] + v11 + 4);
      }
      if ( v12 == 13 )
        v0 = (char *)max_timeout_value + v11;
      else
        LOWORD(v1) = (unsigned __int16)&g_zc;
      if ( v12 == 13 )
        v1 = 38292;
      else
        HIWORD(v1) = (unsigned int)&g_zc >> 16;
      if ( v12 == 13 )
      {
        HIWORD(v1) = 46;
        v0[228] = 0;
      }
    }
  }
  else
  {
    V_LOCK();
    v1 = (int)&g_zc;
    logfmt_raw(v15, 0x1000u, 0, "Open miner version file %s error", opt_version_path);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "read_version_file",
      17,
      652,
      100,
      v15);
  }
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "Miner compile time: %s type: %s", g_miner_compiletime, g_miner_type);
  V_UNLOCK();
  return zlog(
           *(_DWORD *)v1,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/god-miner.c",
           155,
           "read_version_file",
           17,
           692,
           60,
           v15);
}
