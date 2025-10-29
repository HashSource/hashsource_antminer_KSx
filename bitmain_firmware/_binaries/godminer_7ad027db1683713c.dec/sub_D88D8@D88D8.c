int __fastcall sub_D88D8(int a1)
{
  int (__fastcall *v2)(int, int *); // r3
  int v4; // [sp+10h] [bp-1004h] BYREF
  _BYTE v5[12]; // [sp+14h] [bp-1000h]

  V_LOCK();
  logfmt_raw((char *)&v4, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_HNS_2130", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_software_reset_HNS_2130",
    35,
    125,
    20,
    &v4);
  v4 = 3;
  *(_QWORD *)v5 = 0;
  v2 = *(int (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v5[4] = 4456449;
  return v2(a1, &v4);
}
