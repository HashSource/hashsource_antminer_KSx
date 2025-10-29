int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  int v5; // r0
  int v6; // r0
  _BYTE v8[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_306BA0);
  if ( v2 )
  {
    V_LOCK(*(_DWORD *)"failed to api lock\n");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
      195,
      "unreg_key_callback",
      18,
      423,
      100,
      v8);
    return -1;
  }
  else
  {
    v3 = (int *)&off_306BBC;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        V_LOCK(*(_DWORD *)"istered before\n");
        v5 = logfmt_raw((int)v8, 0x1000u);
        V_UNLOCK(v5);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
          195,
          "unreg_key_callback",
          18,
          436,
          80,
          v8);
        goto LABEL_7;
      }
    }
    dword_306B9C[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_306BA0);
    return 0;
  }
}
