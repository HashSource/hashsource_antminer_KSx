int sub_12B63C()
{
  int v0; // r4
  int v1; // r8
  unsigned int v2; // r6
  int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r0
  char buf; // [sp+17h] [bp-1805h] BYREF
  char v9[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v10[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_311F8C )
    sub_12ABE8();
  v0 = 8;
  v1 = 0;
  v2 = 128;
  while ( 1 )
  {
    sub_12AE08();
    usleep(0x3E8u);
    close(dword_2F1874);
    dword_2F1874 = open64("/sys/class/gpio/gpio461/value", 0);
    if ( dword_2F1874 < 0 )
    {
      v1 = 255;
      strcpy(v9, "open gpio461 failed");
      V_LOCK(*(_DWORD *)"open gpio461 failed");
      v6 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
        195,
        "i2c_recv_data",
        13,
        380,
        40,
        v10);
LABEL_13:
      sub_12AEDC();
      usleep(0x3E8u);
      return v1;
    }
    v3 = sub_12AB20();
    if ( v3 != 1 )
      break;
    v1 |= v2;
LABEL_8:
    sub_12AEDC();
    usleep(0x3E8u);
    --v0;
    v2 >>= 1;
    if ( !v0 )
    {
      sub_12AE08();
      usleep(0x3E8u);
      if ( dword_311F8C != 1 )
        sub_12AF18();
      buf = 49;
      if ( write(dword_2F1874, &buf, 1u) != 1 )
      {
        strcpy(v9, "error! write SDA high");
        V_LOCK(*(_DWORD *)" high");
        v4 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v4);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          195,
          "sda_high",
          8,
          45,
          40,
          v10);
      }
      goto LABEL_13;
    }
  }
  if ( v3 != -1 )
    goto LABEL_8;
  sub_12AEDC();
  usleep(0x3E8u);
  strcpy(v9, "read GPIO461 error");
  V_LOCK(*(_DWORD *)"read GPIO461 error");
  v7 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "i2c_recv_data",
    13,
    395,
    40,
    v10);
  return 255;
}
