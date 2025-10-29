int __fastcall i2c_uninit(int a1)
{
  int v1; // r0
  int v2; // r0
  int v4; // r0
  char *v5; // r6
  _DWORD *v6; // r4
  const char *v7; // r6
  char *v8; // r5
  int v9; // r0
  int v10; // r0
  _DWORD v11[2]; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+820h] [bp-1004h] BYREF

  v11[0] = a1;
  ptr = 0;
  if ( pthread_mutex_lock(&stru_311F6C) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v4 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v4);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
             191,
             "i2c_uninit",
             10,
             102,
             100,
             v14);
  }
  else
  {
    if ( find_c_map((int *)dword_311F88, (int)v11, &ptr) == 1 )
    {
      v5 = (char *)ptr;
      remove_c_map((int *)dword_311F88, (int)v11);
      v6 = new_iterator_c_map(dword_311F88);
      if ( ((int (*)(void))*v6)() )
      {
        v7 = v5 + 12;
        while ( 1 )
        {
          v8 = (char *)((int (*)(void))v6[2])();
          if ( !strncmp(v7, v8 + 12, 0x100u) )
            break;
          free(v8);
          if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
            goto LABEL_13;
        }
        v9 = snprintf(s, 0x800u, "%s still open for %d\n", v7, *(_DWORD *)v8);
        V_LOCK(v9);
        v10 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          191,
          "i2c_uninit",
          10,
          119,
          20,
          v14);
        free(v8);
        delete_iterator_c_map(v6);
      }
      else
      {
LABEL_13:
        delete_iterator_c_map(v6);
        close(*((_DWORD *)ptr + 1));
      }
    }
    else
    {
      v1 = snprintf(s, 0x800u, "ctx(%d) not inited\n", v11[0]);
      V_LOCK(v1);
      v2 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_uninit",
        10,
        132,
        80,
        v14);
    }
    if ( ptr )
      free(ptr);
    return pthread_mutex_unlock(&stru_311F6C);
  }
}
