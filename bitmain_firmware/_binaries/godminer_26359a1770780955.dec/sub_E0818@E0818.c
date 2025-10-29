int __fastcall sub_E0818(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1004h] BYREF
  _BYTE v6[12]; // [sp+14h] [bp-1000h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_software_reset_HNS_2130",
    35,
    123,
    20,
    &v5);
  v5 = 3;
  *(_QWORD *)v6 = 0;
  v3 = *(int (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v6[4] = 4456449;
  return v3(a1, &v5);
}
