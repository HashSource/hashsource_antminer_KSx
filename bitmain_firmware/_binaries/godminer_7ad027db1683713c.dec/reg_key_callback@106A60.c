int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  char v7[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_2E8A54);
  if ( v2 )
  {
    v2 = -1;
    strcpy(v7, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "reg_key_callback",
      16,
      390,
      100,
      v8);
  }
  else
  {
    v3 = &off_2E8A70;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        v2 = -2;
        strcpy(v7, "no more listener available\n");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
          190,
          "reg_key_callback",
          16,
          404,
          100,
          v8);
        goto LABEL_7;
      }
    }
    dword_2E8A50[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_2E8A54);
  }
  return v2;
}
