int __fastcall get_response(int a1)
{
  unsigned int v2; // r6
  char *v3; // r4
  int v4; // r0
  int v5; // r7
  void *v6; // r0
  int (**v7)(); // r0
  int v8; // r0
  size_t v9; // r4
  __useconds_t v10; // r0
  int v12; // r3
  int v13; // [sp+0h] [bp-1124h]
  unsigned int v14; // [sp+14h] [bp-1110h]
  char s[256]; // [sp+20h] [bp-1104h] BYREF
  char v16[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 228));
  V_LOCK();
  v4 = syscall(224);
  v5 = 0;
  v14 = 1;
  logfmt_raw(v16, 0x1000u, 0, "%s on pid %ld", v3, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "get_response",
    12,
    253,
    40,
    v16);
  prctl(15, v3);
  v6 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v7 = dev_ctrl((int)v6);
    v8 = ((int (__fastcall *)(_DWORD, char *, int))v7[15])(*(_DWORD *)(a1 + 228), s, 256);
    v9 = v8;
    if ( *(_BYTE *)(a1 + 861) )
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
      v2 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 832), s, v8) && v14 <= ++v5 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(a1 + 232));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "get_response",
          12,
          276,
          40,
          v16);
        V_LOCK();
        v13 = v5;
        v5 = 0;
        logfmt_raw(v16, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v13, v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_base.c",
          166,
          "get_response",
          12,
          277,
          40,
          v16);
        v12 = 10 * v14;
        if ( 10 * v14 >= 0x989680 )
          v12 = 10000000;
        v14 = v12;
      }
      v6 = memset(s, 0, v9);
    }
  }
  *(_BYTE *)(a1 + 861) = 0;
  return 0;
}
