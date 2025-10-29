int __fastcall sub_1061EC(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( hal_key_reset_addr() == a1 )
    return 256;
  if ( hal_key_ipreport_addr() == a1 )
    return 257;
  snprintf(s, 0x800u, "unmaped port = %d\n", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_ui.c",
    190,
    "convert_port_to_ui_type",
    23,
    124,
    100,
    v4);
  return 259;
}
