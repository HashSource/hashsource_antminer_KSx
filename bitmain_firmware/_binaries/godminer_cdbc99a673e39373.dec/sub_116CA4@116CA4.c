int sub_116CA4()
{
  ssize_t v0; // r0
  int v2; // r0
  int v3; // r0
  char buf; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v6[4096]; // [sp+818h] [bp-1000h] BYREF

  v0 = read(dword_2D2590, &buf, 1u);
  if ( v0 == 1 )
    return buf != 48;
  v2 = snprintf(s, 0x800u, "error! read SDA return %d", v0);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
    195,
    "sda_status",
    10,
    85,
    40,
    v6);
  return -1;
}
