int __fastcall sub_C8118(int a1, int a2)
{
  int v3; // r0
  _DWORD v5[2]; // [sp+28h] [bp-1034h] BYREF
  __int64 v6; // [sp+30h] [bp-102Ch]
  _BYTE v7[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v5[1] = 0;
  v5[0] = a2;
  v6 = 4194305;
  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v3 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_analog_mux_DASH_1766",
    32,
    924,
    40,
    v8);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v5);
}
