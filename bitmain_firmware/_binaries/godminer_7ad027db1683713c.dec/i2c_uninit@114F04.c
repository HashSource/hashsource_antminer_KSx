int __fastcall i2c_uninit(int a1)
{
  char *v2; // r6
  _DWORD *v3; // r4
  const char *v4; // r6
  char *v5; // r5
  _DWORD v6[2]; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v9[4100]; // [sp+820h] [bp-1004h] BYREF

  v6[0] = a1;
  ptr = 0;
  if ( pthread_mutex_lock(&stru_2E9490) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
             191,
             "i2c_uninit",
             10,
             102,
             100,
             v9);
  }
  else
  {
    if ( find_c_map((int *)dword_2E94AC, (int)v6, &ptr) == 1 )
    {
      v2 = (char *)ptr;
      remove_c_map((int *)dword_2E94AC, (int)v6);
      v3 = new_iterator_c_map(dword_2E94AC);
      if ( ((int (*)(void))*v3)() )
      {
        v4 = v2 + 12;
        while ( 1 )
        {
          v5 = (char *)((int (*)(void))v3[2])();
          if ( !strncmp(v4, v5 + 12, 0x100u) )
            break;
          free(v5);
          if ( !((int (__fastcall *)(_DWORD *))*v3)(v3) )
            goto LABEL_13;
        }
        snprintf(s, 0x800u, "%s still open for %d\n", v4, *(_DWORD *)v5);
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          191,
          "i2c_uninit",
          10,
          119,
          20,
          v9);
        free(v5);
        delete_iterator_c_map(v3);
      }
      else
      {
LABEL_13:
        delete_iterator_c_map(v3);
        close(*((_DWORD *)ptr + 1));
      }
    }
    else
    {
      snprintf(s, 0x800u, "ctx(%d) not inited\n", v6[0]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_uninit",
        10,
        132,
        80,
        v9);
    }
    if ( ptr )
      free(ptr);
    return pthread_mutex_unlock(&stru_2E9490);
  }
}
