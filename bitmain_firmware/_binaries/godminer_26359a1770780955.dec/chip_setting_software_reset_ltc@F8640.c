int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _QWORD *); // r3
  _QWORD v5[512]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v5);
  v3 = *(int (__fastcall **)(int, _QWORD *))(a1 + 264);
  v5[0] = 0;
  v5[1] = 3407873;
  return v3(a1, v5);
}
