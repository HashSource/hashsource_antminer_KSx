int __fastcall sub_E7CD0(int a1)
{
  int v2; // r0
  int v3; // r4
  _DWORD v5[2]; // [sp+28h] [bp-1034h] BYREF
  __int64 v6; // [sp+30h] [bp-102Ch]
  _BYTE v7[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v5[1] = 0;
  v5[0] = (char *)&dword_10110 + 1;
  v6 = 3145729;
  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_io_drive_strenth_all_KAS_2380",
    41,
    273,
    40,
    v8);
  v3 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v5);
  usleep(0x2710u);
  return v3;
}
