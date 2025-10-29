int __fastcall sub_E3CC4(int a1, int a2, int a3)
{
  _DWORD v6[2]; // [sp+30h] [bp-1034h] BYREF
  __int64 v7; // [sp+38h] [bp-102Ch]
  _DWORD v8[7]; // [sp+40h] [bp-1024h] BYREF
  int v9; // [sp+5Ch] [bp-1008h]
  char v10[4100]; // [sp+60h] [bp-1004h] BYREF

  v6[1] = 0;
  v6[0] = (a3 << 16) | 2;
  v7 = 6029312;
  BYTE1(v7) = a2;
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "set uart relay, chip:%02x, %08x",
    a2,
    v6[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_uart_relay_KDA_2110",
    31,
    905,
    40,
    v10);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v6);
}
