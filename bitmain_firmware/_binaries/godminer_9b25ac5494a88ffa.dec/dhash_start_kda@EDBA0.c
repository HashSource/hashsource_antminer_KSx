int __fastcall dhash_start_kda(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int result; // r0
  _DWORD v7[2]; // [sp+28h] [bp-1050h] BYREF
  __int64 v8; // [sp+30h] [bp-1048h]
  _BYTE v9[32]; // [sp+38h] [bp-1040h] BYREF
  _BYTE v10[32]; // [sp+58h] [bp-1020h] BYREF
  _BYTE v11[4096]; // [sp+78h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v9, "chain");
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
         192,
         "dhash_start_kda",
         15,
         482,
         40,
         v11);
  v7[0] = 4;
  v7[1] = 0;
  v8 = 5505025;
  V_LOCK(v3);
  V_INT((int)v10, "chain");
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_nonce_len_KDA_2110",
    30,
    323,
    40,
    v11);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 260))(a1, v7);
  usleep(0x2710u);
  v5 = *(unsigned __int8 *)(a1 + 452);
  result = 0;
  *(_BYTE *)(a1 + 249) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 456) = (int)*(float *)(a1 + 956);
  return result;
}
