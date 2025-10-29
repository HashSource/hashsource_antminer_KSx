int __fastcall i2c_init(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v4; // r5
  int v5; // r12
  int v6; // r5
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD v9[1024]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E9490) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw((char *)v9, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_init",
      8,
      45,
      100,
      v9);
    return -4;
  }
  else
  {
    if ( dword_2E94A8 )
    {
      v2 = (_DWORD *)dword_2E94AC;
    }
    else
    {
      strcpy(s, "init i2c map\n");
      V_LOCK();
      logfmt_raw((char *)v9, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_init",
        8,
        51,
        20,
        v9);
      v2 = new_c_map((int)sub_114B54, 0, 0);
      dword_2E94AC = (int)v2;
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
      snprintf(s, 0x800u, "%s has already opened\n", a1);
      V_LOCK();
      logfmt_raw((char *)v9, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_init",
        8,
        62,
        20,
        v9);
      memset(v9, 0, 0x10Cu);
      v5 = *(_DWORD *)(v4 + 4);
      v9[0] = dword_2E94A8 + 1;
      v9[1] = v5;
      ++dword_2E94A8;
      strncpy((char *)&v9[3], a1, 0x100u);
      insert_c_map((int *)dword_2E94AC, &dword_2E94A8, 4u, v9, 0x10Cu);
      free((void *)v4);
      delete_iterator_c_map(v3);
      goto LABEL_11;
    }
LABEL_9:
    delete_iterator_c_map(v3);
    v6 = open64(a1, 2050);
    if ( v6 >= 0 )
    {
      memset(v9, 0, 0x10Cu);
      v9[0] = ++dword_2E94A8;
      v9[1] = v6;
      strncpy((char *)&v9[3], a1, 0x100u);
      insert_c_map((int *)dword_2E94AC, &dword_2E94A8, 4u, v9, 0x10Cu);
LABEL_11:
      pthread_mutex_unlock(&stru_2E9490);
      return dword_2E94A8;
    }
    snprintf(s, 0x800u, "failed to open %s\n", a1);
    V_LOCK();
    logfmt_raw((char *)v9, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_init",
      8,
      80,
      100,
      v9);
    pthread_mutex_unlock(&stru_2E9490);
    return -1;
  }
}
