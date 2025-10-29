int __fastcall sub_127260(int a1)
{
  int v2; // r6
  unsigned int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char buf; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_30776C != 1 )
    sub_126FA4();
  v2 = 8;
  v3 = 128;
  do
  {
    sub_126E94();
    usleep(0x3E8u);
    if ( (a1 & v3) != 0 )
    {
      buf = 49;
      if ( write(dword_2E6C84, &buf, 1u) != 1 )
      {
        strcpy(s, "error! write SDA high");
        V_LOCK(*(_DWORD *)" high");
        v4 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v4);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          200,
          "sda_high",
          8,
          45,
          40,
          v14);
      }
    }
    else
    {
      buf = 48;
      if ( write(dword_2E6C84, &buf, 1u) != 1 )
      {
        strcpy(s, "error! write SDA low");
        V_LOCK(*(_DWORD *)" low");
        v5 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v5);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
          200,
          "sda_low",
          7,
          56,
          40,
          v14);
      }
    }
    sub_126F68();
    usleep(0x3E8u);
    --v2;
    v3 >>= 1;
  }
  while ( v2 );
  v6 = 4;
  do
  {
    sub_126E94();
    usleep(0x3E8u);
    if ( dword_30776C )
      sub_126C74();
    v7 = sub_126BAC();
    if ( !v7 )
    {
LABEL_16:
      sub_126F68();
      return usleep(0x3E8u);
    }
    while ( v7 != -1 )
    {
      sub_126F68();
      usleep(0x3E8u);
      sub_126E94();
      usleep(0x3E8u);
      v7 = sub_126BAC();
      if ( !v7 )
        goto LABEL_16;
    }
    v9 = snprintf(s, 0x800u, "%s:%d ack error", "i2c_check_ack", 293);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      200,
      "i2c_check_ack",
      13,
      293,
      40,
      v14);
    sub_126F68();
    usleep(0x3E8u);
    --v6;
  }
  while ( v6 );
  strcpy(s, "IIC_SendData checkack 3 times,send data checkack error");
  V_LOCK(*(_DWORD *)" error");
  v11 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v11);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
           200,
           "i2c_send_data",
           13,
           359,
           100,
           v14);
}
