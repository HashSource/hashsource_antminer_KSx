int __fastcall dhash_start_kda(int a1)
{
  int v2; // r3
  int result; // r0
  _DWORD v4[2]; // [sp+28h] [bp-1050h] BYREF
  __int64 v5; // [sp+30h] [bp-1048h]
  _DWORD v6[7]; // [sp+38h] [bp-1040h] BYREF
  int v7; // [sp+54h] [bp-1024h]
  _DWORD v8[7]; // [sp+58h] [bp-1020h] BYREF
  int v9; // [sp+74h] [bp-1004h]
  char v10[4096]; // [sp+78h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw(v10, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "dhash_start_kda");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    187,
    "dhash_start_kda",
    15,
    482,
    40,
    v10);
  v4[0] = 4;
  v4[1] = 0;
  v5 = 5505025;
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 232));
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "set nonce len value %08x", 4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_nonce_len_KDA_2110",
    30,
    282,
    40,
    v10);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v4);
  usleep(0x2710u);
  v2 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v2 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
