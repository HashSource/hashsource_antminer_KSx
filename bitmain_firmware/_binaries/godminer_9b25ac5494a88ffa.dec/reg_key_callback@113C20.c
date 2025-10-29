int __fastcall reg_key_callback(int a1)
{
  int v2; // r5
  _DWORD *v3; // r2
  int v4; // r3
  int v6; // r0
  int v8; // r0
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = pthread_mutex_lock(&stru_309BD0);
  if ( v2 )
  {
    v2 = -1;
    V_LOCK(*(_DWORD *)"failed to api lock\n");
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
      195,
      "reg_key_callback",
      16,
      390,
      100,
      v9);
  }
  else
  {
    v3 = &off_309BEC;
    v4 = 0;
    while ( *v3++ )
    {
      if ( ++v4 == 5 )
      {
        v2 = -2;
        V_LOCK(*(_DWORD *)" available\n");
        v6 = logfmt_raw((int)v9, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
          195,
          "reg_key_callback",
          16,
          404,
          100,
          v9);
        goto LABEL_7;
      }
    }
    dword_309BCC[v4 + 8] = a1;
LABEL_7:
    pthread_mutex_unlock(&stru_309BD0);
  }
  return v2;
}
