int bitmain_power_fw_version()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_30D00C || (v0 = sub_11BC2C(), v0 >= 0) )
  {
    v0 = sub_11B51C(dword_30D008);
    dword_30D014 = v0;
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
    V_LOCK(v2);
    v3 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_power_fw_version",
      24,
      743,
      100,
      v5);
  }
  return v0;
}
