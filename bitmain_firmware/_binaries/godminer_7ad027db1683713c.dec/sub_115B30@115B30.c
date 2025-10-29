int sub_115B30()
{
  ssize_t v0; // r0
  char buf; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v4[4096]; // [sp+818h] [bp-1000h] BYREF

  v0 = read(dword_2D10A0, &buf, 1u);
  if ( v0 == 1 )
    return buf != 48;
  snprintf(s, 0x800u, "error! read SDA return %d", v0);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "sda_status",
    10,
    85,
    40,
    v4);
  return -1;
}
