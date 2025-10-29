int __fastcall sub_EC52C(int a1, char a2, int a3)
{
  int v4; // r0
  _DWORD v6[2]; // [sp+30h] [bp-1034h] BYREF
  __int64 v7; // [sp+38h] [bp-102Ch]
  _BYTE v8[32]; // [sp+40h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+60h] [bp-1004h] BYREF

  v6[1] = 0;
  v6[0] = (a3 << 16) | 2;
  v7 = 6029312;
  BYTE1(v7) = a2;
  V_LOCK(a1);
  V_INT((int)v8, "chain");
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_uart_relay_KDA_2110",
    31,
    946,
    40,
    v9);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
}
