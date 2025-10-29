int __fastcall get_response(int a1)
{
  unsigned int v2; // r6
  char *v3; // r8
  int v4; // r0
  int v5; // r7
  int v6; // r0
  void *v7; // r0
  int v8; // r0
  int v9; // r0
  size_t v10; // r4
  __useconds_t v11; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r3
  unsigned int v17; // [sp+14h] [bp-1110h]
  _BYTE s[256]; // [sp+20h] [bp-1104h] BYREF
  _BYTE v19[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 228));
  V_LOCK(v4);
  syscall(224);
  v5 = 0;
  v17 = 1;
  v6 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "get_response",
    12,
    256,
    40,
    v19);
  prctl(15, v3);
  v7 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v8 = dev_ctrl((int)v7);
    v9 = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(v8 + 60))(*(_DWORD *)(a1 + 228), s, 256);
    v10 = v9;
    if ( *(_BYTE *)(a1 + 861) )
      break;
    if ( v9 <= 0 )
    {
      v11 = v2;
      v2 *= 2;
      v7 = (void *)usleep(v11);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      v2 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 832), s, v9) && v17 <= ++v5 )
      {
        V_LOCK(0);
        v13 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v13);
        v14 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_base.c",
                166,
                "get_response",
                12,
                279,
                40,
                v19);
        V_LOCK(v14);
        v5 = 0;
        v15 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "get_response",
          12,
          280,
          40,
          v19);
        v16 = 10 * v17;
        if ( 10 * v17 >= 0x989680 )
          v16 = 10000000;
        v17 = v16;
      }
      v7 = memset(s, 0, v10);
    }
  }
  *(_BYTE *)(a1 + 861) = 0;
  return 0;
}
