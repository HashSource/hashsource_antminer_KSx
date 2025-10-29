int __fastcall sub_C9C60(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  _DWORD v6[2]; // [sp+28h] [bp-1034h] BYREF
  __int64 v7; // [sp+30h] [bp-102Ch]
  _BYTE v8[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+58h] [bp-1004h] BYREF

  v6[1] = 0;
  v6[0] = a2;
  v7 = 2883585;
  V_LOCK(a1);
  V_INT((int)v8, "chain");
  v3 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_io_cfg_DASH_1766",
    28,
    339,
    40,
    v9);
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
  usleep(0x2710u);
  return v4;
}
