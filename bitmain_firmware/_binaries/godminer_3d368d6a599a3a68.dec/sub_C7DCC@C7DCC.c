int __fastcall sub_C7DCC(int a1, int a2)
{
  float v2; // s0
  unsigned int *v4; // r0
  int v5; // r0
  int v6; // r4
  unsigned int v8; // [sp+3Ch] [bp-1038h] BYREF
  __int64 v9; // [sp+40h] [bp-1034h] BYREF
  __int64 v10; // [sp+48h] [bp-102Ch]
  int v11; // [sp+50h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+70h] [bp-1004h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v10) = 12;
  }
  else
  {
    WORD1(v10) = 8;
  }
  v4 = sub_C7458(&v8);
  LODWORD(v9) = v8;
  V_LOCK(v4);
  V_INT((int)&v11, "chain");
  v5 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_freq_DASH_1766",
    26,
    679,
    40,
    v12);
  if ( v2 <= 0.0 )
    v6 = -1;
  else
    v6 = (*(int (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v9);
  usleep(0x2710u);
  return v6;
}
