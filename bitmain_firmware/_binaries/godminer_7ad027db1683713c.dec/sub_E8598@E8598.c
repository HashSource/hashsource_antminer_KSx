int __fastcall sub_E8598(int a1, int a2)
{
  int v3; // r4
  _DWORD v5[2]; // [sp+28h] [bp-1034h] BYREF
  __int64 v6; // [sp+30h] [bp-102Ch]
  _DWORD v7[7]; // [sp+38h] [bp-1024h] BYREF
  int v8; // [sp+54h] [bp-1008h]
  char v9[4100]; // [sp+58h] [bp-1004h] BYREF

  v5[1] = 0;
  v5[0] = a2;
  v6 = 16711681;
  V_LOCK();
  V_INT((int)v7, "chain", *(int *)(a1 + 232));
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "set io cfg value %08x", v5[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/./backend/chip_setting.c",
    168,
    "ChipSetting_io_cfg_LTC_1489",
    27,
    298,
    40,
    v9);
  v3 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v5);
  usleep(0x2710u);
  return v3;
}
