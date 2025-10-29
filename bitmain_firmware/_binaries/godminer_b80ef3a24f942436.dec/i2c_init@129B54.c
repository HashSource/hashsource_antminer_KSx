int __fastcall i2c_init(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r12
  int v8; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD v15[1024]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_311F6C) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v11 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_init",
      8,
      45,
      100,
      v15);
    return -4;
  }
  else
  {
    if ( dword_311F84 )
    {
      v2 = (_DWORD *)dword_311F88;
    }
    else
    {
      strcpy(s, "init i2c map\n");
      V_LOCK(*(_DWORD *)"init i2c map\n");
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_init",
        8,
        51,
        20,
        v15);
      v2 = new_c_map((int)sub_129B44, 0, 0);
      dword_311F88 = (int)v2;
    }
    v3 = new_iterator_c_map((int)v2);
    if ( ((int (*)(void))*v3)() )
    {
      while ( 1 )
      {
        v4 = ((int (*)(void))v3[2])();
        if ( !strncmp(a1, (const char *)(v4 + 12), 0x100u) )
          break;
        free((void *)v4);
        if ( !((int (__fastcall *)(_DWORD *))*v3)(v3) )
          goto LABEL_9;
      }
      v5 = snprintf(s, 0x800u, "%s has already opened\n", a1);
      V_LOCK(v5);
      v6 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_init",
        8,
        62,
        20,
        v15);
      memset(v15, 0, 0x10Cu);
      v7 = *(_DWORD *)(v4 + 4);
      v15[0] = dword_311F84 + 1;
      v15[1] = v7;
      ++dword_311F84;
      strncpy((char *)&v15[3], a1, 0x100u);
      insert_c_map((int *)dword_311F88, &dword_311F84, 4u, v15, 0x10Cu);
      free((void *)v4);
      delete_iterator_c_map(v3);
      goto LABEL_11;
    }
LABEL_9:
    delete_iterator_c_map(v3);
    v8 = open64(a1, 2050);
    if ( v8 >= 0 )
    {
      memset(v15, 0, 0x10Cu);
      v15[0] = ++dword_311F84;
      v15[1] = v8;
      strncpy((char *)&v15[3], a1, 0x100u);
      insert_c_map((int *)dword_311F88, &dword_311F84, 4u, v15, 0x10Cu);
LABEL_11:
      pthread_mutex_unlock(&stru_311F6C);
      return dword_311F84;
    }
    v12 = snprintf(s, 0x800u, "failed to open %s\n", a1);
    V_LOCK(v12);
    v13 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_init",
      8,
      80,
      100,
      v15);
    pthread_mutex_unlock(&stru_311F6C);
    return -1;
  }
}
