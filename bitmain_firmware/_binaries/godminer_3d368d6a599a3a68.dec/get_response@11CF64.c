int __fastcall get_response(int a1)
{
  unsigned int v2; // r9
  char *v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0
  void *v8; // r0
  int v9; // r0
  int v10; // r0
  size_t v11; // r5
  int v12; // r0
  __useconds_t v13; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r3
  unsigned int v20; // [sp+14h] [bp-1110h]
  _BYTE s[256]; // [sp+20h] [bp-1104h] BYREF
  _BYTE v22[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 244));
  V_LOCK(v4);
  syscall(224);
  v5 = 0;
  v6 = 0;
  v20 = 1;
  v7 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_base.c",
    171,
    "get_response",
    12,
    257,
    40,
    v22);
  prctl(15, v3);
  v8 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v9 = dev_ctrl((int)v8);
    v10 = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(v9 + 60))(*(_DWORD *)(a1 + 244), s, 256);
    v11 = v10;
    if ( *(_BYTE *)(a1 + 885) )
      break;
    if ( v10 <= 0 )
    {
      v13 = v2;
      v2 *= 2;
      v8 = (void *)usleep(v13);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      v12 = queue_element_num(*(_DWORD *)(a1 + 856));
      if ( v12 <= 0x4000 )
      {
        if ( !queue_enqueue(*(_DWORD *)(a1 + 856), s, v11) && v20 <= ++v5 )
        {
          V_LOCK(0);
          v16 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v16);
          v17 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                  171,
                  "get_response",
                  12,
                  290,
                  40,
                  v22);
          V_LOCK(v17);
          v5 = 0;
          v18 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
            171,
            "get_response",
            12,
            291,
            40,
            v22);
          v19 = 10 * v20;
          if ( 10 * v20 >= 0x989680 )
            v19 = 10000000;
          v20 = v19;
        }
        v2 = 64;
        v8 = memset(s, 0, v11);
      }
      else
      {
        if ( !v6 )
        {
          V_LOCK(v12);
          v15 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v15);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
            171,
            "get_response",
            12,
            276,
            40,
            v22);
        }
        v6 = 1;
        v8 = (void *)usleep(0x40u);
      }
    }
  }
  *(_BYTE *)(a1 + 885) = 0;
  return 0;
}
