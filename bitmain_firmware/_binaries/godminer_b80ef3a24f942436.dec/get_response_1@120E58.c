int __fastcall get_response_1(int a1)
{
  unsigned int v2; // r10
  char *v3; // r4
  int v4; // r0
  int v5; // r0
  void *v6; // r0
  int v7; // r0
  int v8; // r4
  int v9; // r0
  __useconds_t v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // [sp+14h] [bp-2010h]
  unsigned int v17; // [sp+18h] [bp-200Ch]
  char s[4096]; // [sp+20h] [bp-2004h] BYREF
  _BYTE v19[4100]; // [sp+1020h] [bp-1004h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "get_response_1", *(_DWORD *)(a1 + 244));
  V_LOCK(v4);
  syscall(224);
  v16 = 0;
  v17 = 1;
  v5 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "get_response_1",
    14,
    390,
    40,
    v19);
  prctl(15, v3);
  v6 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v7 = dev_ctrl((int)v6);
    v8 = (*(int (__fastcall **)(_DWORD, char *, int))(v7 + 76))(*(_DWORD *)(a1 + 244), s, 256);
    getresponce_1_len += v8;
    V_LOCK(v8);
    v9 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_base.c",
      166,
      "get_response_1",
      14,
      405,
      20,
      v19);
    if ( *(_BYTE *)(a1 + 897) )
      break;
    if ( v8 <= 0 )
    {
      v10 = v2;
      v2 *= 2;
      v6 = (void *)usleep(v10);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 860), s, v8) && v17 <= ++v16 )
      {
        V_LOCK(0);
        v12 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v12);
        v13 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_base.c",
                166,
                "get_response_1",
                14,
                416,
                40,
                v19);
        V_LOCK(v13);
        v14 = logfmt_raw((int)v19, 0x1000u);
        v16 = 0;
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "get_response_1",
          14,
          417,
          40,
          v19);
        v15 = 10 * v17;
        if ( 10 * v17 >= 0x989680 )
          v15 = 10000000;
        v17 = v15;
      }
      v2 = 64;
      v6 = memset(s, 0, v8);
    }
  }
  *(_BYTE *)(a1 + 897) = 0;
  return 0;
}
