int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_306CA4 )
    return sub_119834(dword_306CA0, a1);
  v2 = sub_119DDC();
  if ( v2 >= 0 )
    return sub_119834(dword_306CA0, a1);
  v4 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage_by_n");
  V_LOCK(v4);
  v5 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
    194,
    "bitmain_set_voltage_by_n",
    24,
    794,
    100,
    v7);
  return v2;
}
