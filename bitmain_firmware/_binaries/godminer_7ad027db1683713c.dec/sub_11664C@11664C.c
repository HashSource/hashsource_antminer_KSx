int sub_11664C()
{
  int v0; // r4
  int v1; // r8
  unsigned int v2; // r6
  int v3; // r0
  char buf; // [sp+17h] [bp-1805h] BYREF
  char v6[2040]; // [sp+18h] [bp-1804h] BYREF
  char v7[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_2E94B0 )
    sub_115BF8();
  v0 = 8;
  v1 = 0;
  v2 = 128;
  while ( 1 )
  {
    sub_115E18();
    usleep(0x3E8u);
    close(dword_2D10A0);
    dword_2D10A0 = open64("/sys/class/gpio/gpio461/value", 0);
    if ( dword_2D10A0 < 0 )
    {
      v1 = 255;
      strcpy(v6, "open gpio461 failed");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        195,
        "i2c_recv_data",
        13,
        380,
        40,
        v7);
LABEL_13:
      sub_115EEC();
      usleep(0x3E8u);
      return v1;
    }
    v3 = sub_115B30();
    if ( v3 != 1 )
      break;
    v1 |= v2;
LABEL_8:
    sub_115EEC();
    usleep(0x3E8u);
    --v0;
    v2 >>= 1;
    if ( !v0 )
    {
      sub_115E18();
      usleep(0x3E8u);
      if ( dword_2E94B0 != 1 )
        sub_115F28();
      buf = 49;
      if ( write(dword_2D10A0, &buf, 1u) != 1 )
      {
        strcpy(v6, "error! write SDA high");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          195,
          "sda_high",
          8,
          45,
          40,
          v7);
      }
      goto LABEL_13;
    }
  }
  if ( v3 != -1 )
    goto LABEL_8;
  sub_115EEC();
  usleep(0x3E8u);
  strcpy(v6, "read GPIO461 error");
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_recv_data",
    13,
    395,
    40,
    v7);
  return 255;
}
