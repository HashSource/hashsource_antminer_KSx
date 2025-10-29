int __fastcall sub_10CC14(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  char v7; // [sp+18h] [bp-100Ch]
  char v8; // [sp+19h] [bp-100Bh]
  __int16 v9; // [sp+1Ah] [bp-100Ah]
  int v10; // [sp+1Ch] [bp-1008h]
  _BYTE v11[4100]; // [sp+20h] [bp-1004h] BYREF

  v6[1] = 0;
  v10 = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_ticket_mask_ZEC_1746",
    32,
    165,
    20,
    v11);
  v9 = 20;
  v6[0] = a2;
  v7 = 1;
  v8 = 0;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
  *(_DWORD *)(a1 + 432) = a2;
  return result;
}
