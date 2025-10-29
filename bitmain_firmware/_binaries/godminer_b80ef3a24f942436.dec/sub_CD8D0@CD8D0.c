int __fastcall sub_CD8D0(int a1, int a2)
{
  float v2; // s0
  unsigned int v3; // r6
  int v4; // r7
  int v5; // r10
  int v6; // r8
  float v7; // s11
  int v8; // r9
  int v9; // r5
  float v10; // s6
  float v11; // s15
  int v12; // r3
  int v13; // r0
  int v14; // r4
  float v15; // s16
  float v16; // s17
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v24; // [sp+44h] [bp-1038h]
  __int64 v25; // [sp+48h] [bp-1034h] BYREF
  __int64 v26; // [sp+50h] [bp-102Ch]
  _BYTE v27[16]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v28[4100]; // [sp+78h] [bp-1004h] BYREF

  v25 = 0;
  v26 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v26) = 12;
  }
  else
  {
    WORD1(v26) = 8;
  }
  v3 = -1068236443;
  v4 = 2;
  v24 = 2;
LABEL_6:
  v5 = 0;
  v6 = 0;
  v7 = (float)v4;
LABEL_7:
  v8 = v6 + 1;
  v9 = v6;
  v10 = (float)(v6 + 1);
  while ( 1 )
  {
    v11 = (float)(v9 + 1);
    v12 = (int)(float)((float)((float)((float)((float)(v2 * v10) * v11) * v7) / 25.0) * 100.0);
    v13 = 1374389535 * v12;
    v14 = v12 / 100;
    if ( v12 % 100 > 50 )
      ++v14;
    if ( (unsigned int)(v14 - 16) <= 0xEA )
    {
      v15 = (float)((float)v14 * 25.0) / v7;
      if ( (v4 != 1 || v15 <= 3125.0) && v15 <= 3200.0 && v15 >= 2000.0 )
      {
        v3 = v9 & 7 | (v4 << 8) | 0xC0000000 | v5 | (v14 << 16) | ((v15 > 2400.0) << 28);
        v16 = (float)(v15 / v10) / v11;
        if ( fabsf(v16 - v2) < 3.0 )
          break;
      }
    }
    if ( v9-- == 0 )
    {
      v5 += 16;
      ++v6;
      if ( v8 != 8 )
        goto LABEL_7;
      v4 = 1;
      if ( v24 == 1 )
      {
        LODWORD(v25) = v3;
        V_LOCK(v13);
        V_INT((int)v27, "chain", *(int *)(a1 + 248));
        v18 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v18);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_freq_DCR_1727",
          25,
          752,
          40,
          v28);
        goto LABEL_22;
      }
      v24 = 1;
      goto LABEL_6;
    }
  }
  V_LOCK(v13);
  v19 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "inferred_plldivider",
          19,
          579,
          20,
          v28);
  LODWORD(v25) = v9 & 7 | (v4 << 8) | 0xC0000000 | v5 | (v14 << 16) | ((v15 > 2400.0) << 28);
  V_LOCK(v20);
  V_INT((int)v27, "chain", *(int *)(a1 + 248));
  v21 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_freq_DCR_1727",
    25,
    752,
    40,
    v28);
  if ( v16 > 0.0 )
    v9 = (*(int (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v25);
  else
    v9 = -1;
LABEL_22:
  usleep(0x2710u);
  return v9;
}
