int __fastcall sub_C4970(int a1, int a2)
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
  int v13; // r4
  float v14; // s16
  float v15; // s17
  int v20; // [sp+44h] [bp-1038h]
  __int64 v21; // [sp+48h] [bp-1034h] BYREF
  __int64 v22; // [sp+50h] [bp-102Ch]
  int v23; // [sp+58h] [bp-1024h] BYREF
  int v24; // [sp+5Ch] [bp-1020h]
  int v25; // [sp+60h] [bp-101Ch]
  int v26; // [sp+64h] [bp-1018h]
  __int64 v27; // [sp+68h] [bp-1014h]
  int v28; // [sp+70h] [bp-100Ch]
  int v29; // [sp+74h] [bp-1008h]
  char v30[4100]; // [sp+78h] [bp-1004h] BYREF

  v21 = 0;
  v22 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v22) = 12;
  }
  else
  {
    WORD1(v22) = 8;
  }
  v3 = -1068236443;
  v4 = 2;
  v20 = 2;
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
    v13 = v12 / 100;
    if ( v12 % 100 > 50 )
      ++v13;
    if ( (unsigned int)(v13 - 16) <= 0xEA )
    {
      v14 = (float)((float)v13 * 25.0) / v7;
      if ( (v4 != 1 || v14 <= 3125.0) && v14 <= 3200.0 && v14 >= 2000.0 )
      {
        v3 = v9 & 7 | (v4 << 8) | 0xC0000000 | v5 | (v13 << 16) | ((v14 > 2400.0) << 28);
        v15 = (float)(v14 / v10) / v11;
        if ( fabsf(v15 - v2) < 3.0 )
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
      if ( v20 == 1 )
      {
        LODWORD(v21) = v3;
        V_LOCK();
        V_INT((int)&v23, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v29,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          "set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_freq_DCR_1727",
          25,
          638,
          40,
          v30);
        goto LABEL_22;
      }
      v20 = 1;
      goto LABEL_6;
    }
  }
  V_LOCK();
  logfmt_raw(
    v30,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v2,
    v15,
    v14,
    v13,
    v4,
    v6,
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "inferred_plldivider",
    19,
    538,
    20,
    v30);
  LODWORD(v21) = v9 & 7 | (v4 << 8) | 0xC0000000 | v5 | (v13 << 16) | ((v14 > 2400.0) << 28);
  V_LOCK();
  V_INT((int)&v23, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v30,
    0x1000u,
    0,
    v29,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v15,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_freq_DCR_1727",
    25,
    638,
    40,
    v30);
  if ( v15 > 0.0 )
    v9 = (*(int (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v21);
  else
    v9 = -1;
LABEL_22:
  usleep(0x2710u);
  return v9;
}
