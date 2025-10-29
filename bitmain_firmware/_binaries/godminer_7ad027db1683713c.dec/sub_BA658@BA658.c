int __fastcall sub_BA658(int a1, int a2)
{
  int v4; // r2
  int v5; // r4
  int v7; // [sp+2Ch] [bp-1034h]
  __int64 v8; // [sp+30h] [bp-1030h] BYREF
  __int64 v9; // [sp+38h] [bp-1028h]
  _DWORD v10[7]; // [sp+40h] [bp-1020h] BYREF
  int v11; // [sp+5Ch] [bp-1004h]
  char v12[4096]; // [sp+60h] [bp-1000h] BYREF

  v8 = 0;
  v9 = 0;
  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "set core ticket mask reg %02x tm %02x",
    3,
    a2,
    v7,
    0LL,
    0LL);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_core_ticket_mask_CKB_2042",
    37,
    171,
    40,
    v12);
  v4 = *(_DWORD *)(a1 + 316);
  LODWORD(v8) = a2;
  BYTE5(v9) = v4;
  BYTE4(v9) = -1;
  LODWORD(v9) = 196609;
  BYTE6(v9) = 1;
  v5 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v8);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 408) = a2;
  return v5;
}
