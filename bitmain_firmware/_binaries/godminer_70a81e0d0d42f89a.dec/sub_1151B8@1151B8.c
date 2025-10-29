int __fastcall sub_1151B8(int a1)
{
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( hal_key_reset_addr() == a1 )
    return 256;
  if ( hal_key_ipreport_addr() == a1 )
    return 257;
  v3 = snprintf(s, 0x800u, "unmaped port = %d\n", a1);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_ui.c",
    195,
    "convert_port_to_ui_type",
    23,
    124,
    100,
    v6);
  return 259;
}
