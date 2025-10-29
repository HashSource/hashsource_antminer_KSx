int __fastcall sub_DFA80(int a1)
{
  int v2; // r4
  _DWORD v4[2]; // [sp+28h] [bp-1034h] BYREF
  __int64 v5; // [sp+30h] [bp-102Ch]
  _DWORD v6[7]; // [sp+38h] [bp-1024h] BYREF
  int v7; // [sp+54h] [bp-1008h]
  char v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v4[1] = 0;
  v4[0] = (char *)&dword_10110 + 1;
  v5 = 3145729;
  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v8,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "set io drive strenth %08x",
    (char *)&dword_10110 + 1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_io_drive_strenth_all_KAS_2380",
    41,
    232,
    40,
    v8);
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v4);
  usleep(0x2710u);
  return v2;
}
