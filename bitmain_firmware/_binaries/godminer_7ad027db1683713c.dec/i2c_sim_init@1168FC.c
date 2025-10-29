int i2c_sim_init()
{
  int v0; // r6
  int v2; // r6
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(s, "i2c_sim_init start");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_sim_init",
    12,
    98,
    40,
    v4);
  if ( access("/sys/class/gpio/gpio461/", 0) != -1 )
  {
LABEL_2:
    if ( access("/sys/class/gpio/gpio459/", 0) == -1 )
    {
      v0 = system("echo 459 > /sys/class/gpio/export");
      if ( v0 )
      {
        snprintf(s, 0x800u, "[i2c_sim] echo %s > %s failed", "459", "/sys/class/gpio/export");
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          195,
          "i2c_sim_init",
          12,
          115,
          100,
          v4);
        return v0;
      }
      strcpy(s, "init gpio459");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        195,
        "i2c_sim_init",
        12,
        119,
        40,
        v4);
    }
    v0 = system("echo high > /sys/class/gpio/gpio461/direction");
    if ( v0 )
    {
      snprintf(s, 0x800u, "[i2c_sim] echo high > %s failed", "/sys/class/gpio/gpio461/direction");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        195,
        "i2c_sim_init",
        12,
        125,
        100,
        v4);
    }
    else
    {
      v0 = system("echo high > /sys/class/gpio/gpio459/direction");
      if ( v0 )
      {
        snprintf(s, 0x800u, "[i2c_sim] echo high > %s failed", "/sys/class/gpio/gpio459/direction");
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          195,
          "i2c_sim_init",
          12,
          132,
          100,
          v4);
      }
      else
      {
        dword_2E94B0 = 1;
        if ( dword_2D10A8 > 0 )
          close(dword_2D10A8);
        dword_2D10A8 = open64("/sys/class/gpio/gpio459/value", 1);
        if ( dword_2D10A8 < 0 )
        {
          strcpy(s, "open gpio459 failed");
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
            195,
            "i2c_sim_init",
            12,
            144,
            100,
            v4);
          return dword_2D10A8;
        }
        else
        {
          if ( dword_2D10A0 > 0 )
            close(dword_2D10A0);
          dword_2D10A0 = open64("/sys/class/gpio/gpio461/value", 1);
          if ( dword_2D10A0 < 0 )
          {
            strcpy(s, "open gpio461 failed");
            V_LOCK();
            logfmt_raw(v4, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              195,
              "i2c_sim_init",
              12,
              155,
              100,
              v4);
            return dword_2D10A0;
          }
          else
          {
            if ( dword_2D10A4 > 0 )
              close(dword_2D10A4);
            dword_2D10A4 = open64("/sys/class/gpio/gpio461/direction", 1);
            if ( dword_2D10A4 >= 0 )
            {
              v0 = 255;
              snprintf(s, 0x800u, "power i2c device:%s addr:0x%02x fd:%d", "sim_dev", 16, 255);
              V_LOCK();
              logfmt_raw(v4, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                172,
                40,
                v4);
              strcpy(s, "i2c_sim_init end");
              V_LOCK();
              logfmt_raw(v4, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                173,
                40,
                v4);
            }
            else
            {
              strcpy(s, "open gpio461 direction failed");
              V_LOCK();
              logfmt_raw(v4, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                167,
                40,
                v4);
              strcpy(s, "open gpio461 direction failed");
              V_LOCK();
              logfmt_raw(v4, 0x1000u, 0, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                168,
                100,
                v4);
              return dword_2D10A4;
            }
          }
        }
      }
    }
    return v0;
  }
  v2 = system("echo 461 > /sys/class/gpio/export");
  if ( !v2 )
  {
    strcpy(s, "init gpio461");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      195,
      "i2c_sim_init",
      12,
      108,
      40,
      v4);
    goto LABEL_2;
  }
  snprintf(s, 0x800u, "[i2c_sim] echo %s > %s failed", "461", "/sys/class/gpio/export");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_sim_init",
    12,
    104,
    100,
    v4);
  return v2;
}
