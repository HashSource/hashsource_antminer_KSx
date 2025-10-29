int __fastcall sub_EE8B8(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r4
  __int64 v8; // [sp+30h] [bp-1030h] BYREF
  __int64 v9; // [sp+38h] [bp-1028h]
  _BYTE v10[32]; // [sp+40h] [bp-1020h] BYREF
  _BYTE v11[4096]; // [sp+60h] [bp-1000h] BYREF

  v8 = 0;
  v9 = 0;
  V_LOCK(a1);
  V_INT((int)v10, "chain", *(int *)(a1 + 248));
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_core_ticket_mask_KDA_2110",
    37,
    182,
    40,
    v11);
  v5 = *(_DWORD *)(a1 + 340);
  WORD1(v9) = 3;
  LODWORD(v8) = a2;
  BYTE5(v9) = v5;
  BYTE4(v9) = -1;
  LOBYTE(v9) = 1;
  BYTE6(v9) = 1;
  v6 = (*(int (__fastcall **)(int, __int64 *))(a1 + 268))(a1, &v8);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 432) = a2;
  return v6;
}
