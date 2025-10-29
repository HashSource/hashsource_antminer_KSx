int __fastcall softreset_all_chip_ks5(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  int v7; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  __int64 v9; // [sp+50h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)&v7, "chain");
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
         192,
         "softreset_all_chip_ks5",
         22,
         963,
         40,
         v8);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_software_reset_KS5_2382",
    35,
    123,
    20,
    v8);
  v8[1] = 0;
  v8[0] = 3;
  v9 = 0;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  LOBYTE(v9) = 1;
  WORD1(v9) = 68;
  v5(a1, v8);
  sub_F0440(a1, 10, 0);
  sub_F07F0(a1, 127);
  return 0;
}
