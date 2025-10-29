int bitmain_set_voltage()
{
  unsigned int v0; // r0
  int v1; // r5
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v4[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( dword_2E8B5C || (v1 = sub_10C79C(), v1 >= 0) )
  {
    v0 = bitmain_convert_V_to_N();
    if ( v0 > 0xFF )
      return -2147482879;
    else
      return sub_10C214(dword_2E8B58, (unsigned __int8)v0);
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_set_voltage",
      19,
      708,
      100,
      v4);
  }
  return v1;
}
