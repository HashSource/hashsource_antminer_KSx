int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int (__fastcall *v2)(int, _QWORD *); // r3
  _QWORD v4[512]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v4);
  v2 = *(int (__fastcall **)(int, _QWORD *))(a1 + 248);
  v4[0] = 0;
  v4[1] = 3407873;
  return v2(a1, v4);
}
