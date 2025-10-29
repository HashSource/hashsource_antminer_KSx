int __fastcall sub_1161E4(int a1)
{
  int v2; // r6
  unsigned int v3; // r4
  int v4; // r6
  int v5; // r0
  char buf; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v9[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_2E94B0 != 1 )
    sub_115F28();
  v2 = 8;
  v3 = 128;
  do
  {
    sub_115E18();
    usleep(0x3E8u);
    if ( (a1 & v3) != 0 )
    {
      buf = 49;
      if ( write(dword_2D10A0, &buf, 1u) != 1 )
      {
        strcpy(s, "error! write SDA high");
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, s);
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
          v9);
      }
    }
    else
    {
      buf = 48;
      if ( write(dword_2D10A0, &buf, 1u) != 1 )
      {
        strcpy(s, "error! write SDA low");
        V_LOCK();
        logfmt_raw(v9, 0x1000u, a1 & v3, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          195,
          "sda_low",
          7,
          56,
          40,
          v9);
      }
    }
    sub_115EEC();
    usleep(0x3E8u);
    --v2;
    v3 >>= 1;
  }
  while ( v2 );
  v4 = 4;
  do
  {
    sub_115E18();
    usleep(0x3E8u);
    if ( dword_2E94B0 )
      sub_115BF8();
    v5 = sub_115B30();
    if ( !v5 )
    {
LABEL_16:
      sub_115EEC();
      return usleep(0x3E8u);
    }
    while ( v5 != -1 )
    {
      sub_115EEC();
      usleep(0x3E8u);
      sub_115E18();
      usleep(0x3E8u);
      v5 = sub_115B30();
      if ( !v5 )
        goto LABEL_16;
    }
    snprintf(s, 0x800u, "%s:%d ack error", "i2c_check_ack", 293);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      195,
      "i2c_check_ack",
      13,
      293,
      40,
      v9);
    sub_115EEC();
    usleep(0x3E8u);
    --v4;
  }
  while ( v4 );
  strcpy(s, "IIC_SendData checkack 3 times,send data checkack error");
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
           195,
           "i2c_send_data",
           13,
           359,
           100,
           v9);
}
