int i2c_sim_init()
{
  int v0; // r0
  int v1; // r6
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v24[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(s, "i2c_sim_init start");
  V_LOCK(*(_DWORD *)"i2c_sim_init start");
  v0 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v0);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_sim_init",
    12,
    98,
    40,
    v24);
  if ( access("/sys/class/gpio/gpio461/", 0) != -1 )
  {
LABEL_2:
    if ( access("/sys/class/gpio/gpio459/", 0) == -1 )
    {
      v1 = system("echo 459 > /sys/class/gpio/export");
      if ( v1 )
      {
        v14 = snprintf(s, 0x800u, "[i2c_sim] echo %s > %s failed", "459", "/sys/class/gpio/export");
        V_LOCK(v14);
        v15 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v15);
        v6 = g_zc;
        v7 = 115;
        goto LABEL_16;
      }
      strcpy(s, "init gpio459");
      V_LOCK(*(_DWORD *)"init gpio459");
      v11 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        195,
        "i2c_sim_init",
        12,
        119,
        40,
        v24);
    }
    v1 = system("echo high > /sys/class/gpio/gpio461/direction");
    if ( v1 )
    {
      v4 = snprintf(s, 0x800u, "[i2c_sim] echo high > %s failed", 2776852);
      V_LOCK(v4);
      v5 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v5);
      v6 = g_zc;
      v7 = 125;
    }
    else
    {
      v1 = system("echo high > /sys/class/gpio/gpio459/direction");
      if ( !v1 )
      {
        dword_311F8C = 1;
        if ( dword_2F187C > 0 )
          close(dword_2F187C);
        dword_2F187C = open64("/sys/class/gpio/gpio459/value", 1);
        if ( dword_2F187C < 0 )
        {
          strcpy(s, "open gpio459 failed");
          V_LOCK(*(_DWORD *)"open gpio459 failed");
          v21 = logfmt_raw((int)v24, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
            195,
            "i2c_sim_init",
            12,
            144,
            100,
            v24);
          return dword_2F187C;
        }
        else
        {
          if ( dword_2F1874 > 0 )
            close(dword_2F1874);
          dword_2F1874 = open64("/sys/class/gpio/gpio461/value", 1);
          if ( dword_2F1874 < 0 )
          {
            strcpy(s, "open gpio461 failed");
            V_LOCK(*(_DWORD *)"open gpio461 failed");
            v22 = logfmt_raw((int)v24, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
              195,
              "i2c_sim_init",
              12,
              155,
              100,
              v24);
            return dword_2F1874;
          }
          else
          {
            if ( dword_2F1878 > 0 )
              close(dword_2F1878);
            dword_2F1878 = open64(2776852, 1);
            if ( dword_2F1878 >= 0 )
            {
              v1 = 255;
              v18 = snprintf(s, 0x800u, "power i2c device:%s addr:0x%02x fd:%d", 2777052, 16, 255);
              V_LOCK(v18);
              v19 = logfmt_raw((int)v24, 0x1000u);
              V_UNLOCK(v19);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                172,
                40,
                v24);
              strcpy(s, "i2c_sim_init end");
              V_LOCK(*(_DWORD *)"i2c_sim_init end");
              v20 = logfmt_raw((int)v24, 0x1000u);
              V_UNLOCK(v20);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                173,
                40,
                v24);
            }
            else
            {
              strcpy(s, "open gpio461 direction failed");
              V_LOCK(*(_DWORD *)"ection failed");
              v2 = logfmt_raw((int)v24, 0x1000u);
              V_UNLOCK(v2);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                167,
                40,
                v24);
              strcpy(s, "open gpio461 direction failed");
              V_LOCK(*(_DWORD *)"ection failed");
              v3 = logfmt_raw((int)v24, 0x1000u);
              V_UNLOCK(v3);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
                195,
                "i2c_sim_init",
                12,
                168,
                100,
                v24);
              return dword_2F1878;
            }
          }
        }
        return v1;
      }
      v16 = snprintf(s, 0x800u, "[i2c_sim] echo high > %s failed", 2776932);
      V_LOCK(v16);
      v17 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v17);
      v6 = g_zc;
      v7 = 132;
    }
LABEL_16:
    zlog(
      v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      195,
      "i2c_sim_init",
      12,
      v7,
      100,
      v24);
    return v1;
  }
  v9 = system("echo 461 > /sys/class/gpio/export");
  if ( !v9 )
  {
    strcpy(s, "init gpio461");
    V_LOCK(*(_DWORD *)"init gpio461");
    v10 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      195,
      "i2c_sim_init",
      12,
      108,
      40,
      v24);
    goto LABEL_2;
  }
  v12 = snprintf(s, 0x800u, "[i2c_sim] echo %s > %s failed", "461", "/sys/class/gpio/export");
  V_LOCK(v12);
  v13 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_sim_init",
    12,
    104,
    100,
    v24);
  return v9;
}
