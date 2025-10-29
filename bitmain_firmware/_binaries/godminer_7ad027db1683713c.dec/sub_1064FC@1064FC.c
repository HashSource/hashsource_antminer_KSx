int __fastcall sub_1064FC(unsigned int a1, int a2)
{
  int *v4; // r7
  int *v5; // r4
  int v6; // r6
  int *v8; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _DWORD v10[1024]; // [sp+818h] [bp-1000h] BYREF

  v4 = (int *)sub_106484(a1);
  if ( v4 )
  {
    snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v4, a2);
    V_LOCK();
    logfmt_raw((char *)v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "gpio_ctrl_ui",
      12,
      271,
      20,
      v10);
    if ( pthread_mutex_lock(&stru_2E8A54) )
    {
      v6 = -1;
      strcpy(s, "failed to api lock\n");
      V_LOCK();
      logfmt_raw((char *)v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
        190,
        "gpio_ctrl_ui",
        12,
        274,
        100,
        v10);
    }
    else
    {
      v5 = (int *)dword_2E8A6C;
      if ( a2 == 1 )
      {
        sub_1062A4(v4, (int *)dword_2E8A6C);
        v6 = gpio_write((int)v4, 0);
      }
      else if ( a2 == 2 )
      {
        v8 = v4;
        if ( dword_2E8A6C )
        {
          v6 = -1;
          if ( exists_c_map((int *)dword_2E8A6C, (int)&v8) )
          {
            snprintf(s, 0x800u, "port %d already exist in map\n", v8);
            V_LOCK();
            logfmt_raw((char *)v10, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
              190,
              "add_port_to_gpio_map",
              20,
              224,
              20,
              v10);
          }
          else
          {
            snprintf(s, 0x800u, "add %d to flicker map with interval %d\n", v8, 200);
            V_LOCK();
            logfmt_raw((char *)v10, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
              190,
              "add_port_to_gpio_map",
              20,
              218,
              20,
              v10);
            v10[0] = 200;
            v10[1] = 0;
            v10[2] = 1;
            insert_c_map(v5, &v8, 4u, v10, 0xCu);
          }
        }
        else
        {
          v6 = -1;
        }
      }
      else
      {
        sub_1062A4(v4, (int *)dword_2E8A6C);
        v6 = gpio_write((int)v4, 1);
      }
      pthread_mutex_unlock(&stru_2E8A54);
    }
  }
  else
  {
    v6 = -1;
    strcpy(s, "unsuported gpio port\n");
    V_LOCK();
    logfmt_raw((char *)v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "gpio_ctrl_ui",
      12,
      268,
      100,
      v10);
  }
  return v6;
}
