int read_version_file()
{
  char *v0; // r4
  int v1; // r5
  FILE *v2; // r6
  void *v3; // r0
  signed int v4; // r0
  char *v5; // r0
  int v6; // r8
  char *v7; // r0
  size_t v8; // r2
  size_t v9; // r0
  int v10; // r3
  size_t v11; // r0
  int v12; // r3
  int v13; // r0
  int v15; // r0
  int v16; // r0
  char s[256]; // [sp+10h] [bp-1100h] BYREF
  _BYTE v18[4096]; // [sp+110h] [bp-1000h] BYREF

  v0 = (char *)max_timeout_value;
  v1 = (int)s;
  v2 = (FILE *)fopen64(opt_version_path, "rb");
  v3 = memset(s, 0, sizeof(s));
  if ( v2 )
  {
    v4 = fread(s, 1u, 0x100u, v2);
    if ( v4 <= 0 )
    {
      V_LOCK(v4);
      v1 = (int)&g_zc;
      v16 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v16);
      v11 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "read_version_file",
              17,
              659,
              100,
              v18);
    }
    else
    {
      v5 = strchr(s, 10);
      if ( v5 )
      {
        memcpy(g_miner_compiletime, s, v5 - s);
        v6 = stpcpy(s);
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
        v1 = 31564;
      else
        HIWORD(v1) = (unsigned int)&g_zc >> 16;
      if ( v12 == 13 )
      {
        HIWORD(v1) = 48;
        v0[228] = 0;
      }
    }
  }
  else
  {
    V_LOCK(v3);
    v1 = (int)&g_zc;
    v15 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v15);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "read_version_file",
            17,
            654,
            100,
            v18);
  }
  V_LOCK(v11);
  v13 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v13);
  return zlog(
           *(_DWORD *)v1,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/god-miner.c",
           160,
           "read_version_file",
           17,
           694,
           60,
           v18);
}
