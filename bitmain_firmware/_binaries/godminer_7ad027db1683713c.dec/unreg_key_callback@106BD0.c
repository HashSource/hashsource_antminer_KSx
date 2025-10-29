int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  char v6[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_2E8A54);
  if ( v2 )
  {
    strcpy(v6, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "unreg_key_callback",
      18,
      423,
      100,
      v7);
    return -1;
  }
  else
  {
    v3 = (int *)&off_2E8A70;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        strcpy(v6, "listener not registered before\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
          190,
          "unreg_key_callback",
          18,
          436,
          80,
          v7);
        goto LABEL_7;
      }
    }
    dword_2E8A50[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_2E8A54);
    return 0;
  }
}
