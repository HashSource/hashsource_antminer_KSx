int __fastcall sub_E22D0(int a1, int a2)
{
  float v2; // s0
  int v5; // r4
  unsigned int v7; // [sp+3Ch] [bp-1038h] BYREF
  __int64 v8; // [sp+40h] [bp-1034h] BYREF
  __int64 v9; // [sp+48h] [bp-102Ch]
  _DWORD v10[7]; // [sp+50h] [bp-1024h] BYREF
  int v11; // [sp+6Ch] [bp-1008h]
  char v12[4100]; // [sp+70h] [bp-1004h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v9) = 12;
  }
  else
  {
    WORD1(v9) = 8;
  }
  sub_E1934(&v7);
  LODWORD(v8) = v7;
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
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v2,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_freq_KDA_2110",
    25,
    638,
    40,
    v12);
  if ( v2 <= 0.0 )
    v5 = -1;
  else
    v5 = (*(int (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v8);
  usleep(0x2710u);
  return v5;
}
