int __fastcall sub_1075EC(unsigned int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _DWORD v18[1024]; // [sp+818h] [bp-1000h] BYREF

  v4 = sub_107574(a1);
  if ( v4 )
  {
    v5 = snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v4, a2);
    V_LOCK(v5);
    v6 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "gpio_ctrl_ui",
      12,
      271,
      20,
      v18);
    if ( pthread_mutex_lock(&stru_2E9F4C) )
    {
      v8 = -1;
      strcpy(s, "failed to api lock\n");
      V_LOCK(*(_DWORD *)"failed to api lock\n");
      v15 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
        190,
        "gpio_ctrl_ui",
        12,
        274,
        100,
        v18);
    }
    else
    {
      v7 = dword_2E9F64;
      if ( a2 == 1 )
      {
        sub_107394(v4, dword_2E9F64);
        v8 = gpio_write(v4, 0);
      }
      else if ( a2 == 2 )
      {
        v16 = v4;
        if ( dword_2E9F64 )
        {
          v8 = -1;
          if ( exists_c_map(dword_2E9F64, &v16) )
          {
            v10 = snprintf(s, 0x800u, "port %d already exist in map\n", v16);
            V_LOCK(v10);
            v11 = logfmt_raw((int)v18, 0x1000u);
            V_UNLOCK(v11);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
              190,
              "add_port_to_gpio_map",
              20,
              224,
              20,
              v18);
          }
          else
          {
            v12 = snprintf(s, 0x800u, "add %d to flicker map with interval %d\n", v16, 200);
            V_LOCK(v12);
            v13 = logfmt_raw((int)v18, 0x1000u);
            V_UNLOCK(v13);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
              190,
              "add_port_to_gpio_map",
              20,
              218,
              20,
              v18);
            v18[0] = 200;
            v18[1] = 0;
            v18[2] = 1;
            insert_c_map(v7, &v16, 4, v18, 12);
          }
        }
        else
        {
          v8 = -1;
        }
      }
      else
      {
        sub_107394(v4, dword_2E9F64);
        v8 = gpio_write(v4, 1);
      }
      pthread_mutex_unlock(&stru_2E9F4C);
    }
  }
  else
  {
    v8 = -1;
    strcpy(s, "unsuported gpio port\n");
    V_LOCK(*(_DWORD *)"port\n");
    v14 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
      190,
      "gpio_ctrl_ui",
      12,
      268,
      100,
      v18);
  }
  return v8;
}
