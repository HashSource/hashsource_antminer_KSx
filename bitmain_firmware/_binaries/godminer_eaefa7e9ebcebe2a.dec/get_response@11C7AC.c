int __fastcall get_response(int a1)
{
  unsigned int v2; // r9
  char *v3; // r5
  int v4; // r0
  int v5; // r7
  int v6; // r11
  int v7; // r0
  void *v8; // r0
  int v9; // r0
  int v10; // r0
  size_t v11; // r5
  int v12; // r0
  int v13; // r3
  int v14; // r0
  __useconds_t v15; // r0
  int v16; // r0
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r3
  unsigned int v23; // [sp+10h] [bp-1114h]
  _BYTE s[256]; // [sp+20h] [bp-1104h] BYREF
  _BYTE v25[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 244));
  V_LOCK(v4);
  syscall(224);
  v5 = 0;
  v6 = 0;
  v23 = 1;
  v7 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_base.c",
    171,
    "get_response",
    12,
    258,
    40,
    v25);
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
      v15 = v2;
      v2 *= 2;
      v8 = (void *)usleep(v15);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      v12 = queue_element_num(*(_DWORD *)(a1 + 856));
      v13 = v6 ^ 1;
      if ( v12 > 0x4000 )
        v14 = v13 & 1;
      else
        v14 = 0;
      if ( v14 )
      {
        v6 = 1;
        v16 = usleep(0x40u);
        V_LOCK(v16);
        v17 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v17);
        v8 = (void *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                       171,
                       "get_response",
                       12,
                       275,
                       40,
                       v25);
      }
      else
      {
        if ( !queue_enqueue(*(_DWORD *)(a1 + 856), s, v11, v13) && v23 <= ++v5 )
        {
          V_LOCK(0);
          v19 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v19);
          v20 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
                  171,
                  "get_response",
                  12,
                  287,
                  40,
                  v25);
          V_LOCK(v20);
          v5 = 0;
          v21 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/backend_base.c",
            171,
            "get_response",
            12,
            288,
            40,
            v25);
          v22 = 10 * v23;
          if ( 10 * v23 >= 0x989680 )
            v22 = 10000000;
          v23 = v22;
        }
        v2 = 64;
        v8 = memset(s, 0, v11);
      }
    }
  }
  *(_BYTE *)(a1 + 885) = 0;
  return 0;
}
