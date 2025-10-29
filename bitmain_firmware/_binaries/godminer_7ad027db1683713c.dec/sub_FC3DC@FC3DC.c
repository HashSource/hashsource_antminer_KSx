int __fastcall sub_FC3DC(int a1, int a2)
{
  int result; // r0
  _DWORD v5[2]; // [sp+10h] [bp-1014h] BYREF
  char v6; // [sp+18h] [bp-100Ch]
  char v7; // [sp+19h] [bp-100Bh]
  __int16 v8; // [sp+1Ah] [bp-100Ah]
  int v9; // [sp+1Ch] [bp-1008h]
  char v10[4100]; // [sp+20h] [bp-1004h] BYREF

  v5[1] = 0;
  v9 = 0;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "set ticket mask reg %02x tm %d", 20, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_ticket_mask_ZEC_1746",
    32,
    154,
    20,
    v10);
  v8 = 20;
  v5[0] = a2;
  v6 = 1;
  v7 = 0;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v5);
  *(_DWORD *)(a1 + 408) = a2;
  return result;
}
