int __fastcall sub_EEAC4(int a1, char a2, int a3)
{
  char v3; // r1
  unsigned int *v5; // r0
  int v6; // r0
  int v7; // r4
  unsigned int v9; // [sp+3Ch] [bp-1034h] BYREF
  __int64 v10; // [sp+40h] [bp-1030h] BYREF
  __int64 v11; // [sp+48h] [bp-1028h]
  int v12; // [sp+50h] [bp-1020h] BYREF
  _BYTE v13[4096]; // [sp+70h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 428) * a2;
  v10 = 0;
  v11 = 0;
  BYTE1(v11) = v3;
  v9 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
      WORD1(v11) = 12;
  }
  else
  {
    WORD1(v11) = 8;
  }
  v5 = sub_EE4F8(&v9);
  LODWORD(v10) = v9;
  V_LOCK(v5);
  V_INT((int)&v12, "chain");
  v6 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_one_asic_freq_KS5_2382",
    34,
    701,
    20,
    v13);
  v7 = (*(int (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v10);
  usleep(0x2710u);
  return v7;
}
