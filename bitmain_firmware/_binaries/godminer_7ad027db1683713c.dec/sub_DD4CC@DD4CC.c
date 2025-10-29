int __fastcall sub_DD4CC(int a1, int a2, char a3, __int16 a4)
{
  float v4; // s0
  int v5; // r7
  int v6; // r2
  int v7; // r10
  float v8; // s18
  unsigned int v9; // r9
  int v10; // r5
  int v11; // r3
  int v12; // r6
  float v13; // s16
  unsigned int v14; // r0
  unsigned int v15; // r0
  signed int v16; // r0
  int v17; // r3
  float v18; // s26
  int v20; // r4
  int v21; // r6
  int v25; // [sp+44h] [bp-1038h]
  __int64 v26; // [sp+48h] [bp-1034h] BYREF
  __int64 v27; // [sp+50h] [bp-102Ch]
  int v28; // [sp+58h] [bp-1024h] BYREF
  int v29; // [sp+5Ch] [bp-1020h]
  int v30; // [sp+60h] [bp-101Ch]
  int v31; // [sp+64h] [bp-1018h]
  __int64 v32; // [sp+68h] [bp-1014h]
  int v33; // [sp+70h] [bp-100Ch]
  int v34; // [sp+74h] [bp-1008h]
  char v35[4100]; // [sp+78h] [bp-1004h] BYREF

  v26 = 0;
  v27 = 0;
  BYTE1(v27) = a4;
  if ( !a2 )
    a4 = 8;
  LOBYTE(v27) = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v27) = 12;
  }
  else
  {
    WORD1(v27) = a4;
  }
  v5 = 2;
  v6 = -1068236443;
  v25 = 2;
LABEL_8:
  v7 = 0;
  v8 = (float)v5;
LABEL_9:
  v10 = v7;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)v10 * (float)((float)v7 * v4)) * v8) / 25.0) * 100.0);
    v12 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v12;
    if ( (unsigned int)(v12 - 16) <= 0xEA )
    {
      v13 = (float)((float)v12 * 25.0) / v8;
      if ( (v5 != 1 || v13 <= 3125.0) && v13 <= 3200.0 && v13 >= 2000.0 )
      {
        v14 = sub_25A970(25 * v12, v5);
        v15 = sub_25A970(v14, v7);
        v16 = sub_25A970(v15, v10);
        v17 = v13 > 2400.0;
        v9 = (v5 << 8) | 0xC0000000 | (16 * v7);
        v6 = v10 & 7 | v9 | (v12 << 16) | (v17 << 28);
        v18 = (float)v16;
        if ( fabsf((float)v16 - v4) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      if ( ++v7 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v25 == 1 )
      {
        LODWORD(v26) = v6;
        V_LOCK();
        V_INT((int)&v28, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v35,
          0x1000u,
          0,
          v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          "KAS_set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          0,
          0,
          v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_freq_kas_KAS_2380",
          29,
          615,
          40,
          v35);
        goto LABEL_24;
      }
      v25 = 1;
      goto LABEL_8;
    }
  }
  v20 = v12;
  v21 = v10 & 7 | v9 | (v12 << 16) | (v17 << 28);
  V_LOCK();
  logfmt_raw(
    v35,
    0x1000u,
    0,
    "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
    v4,
    v18,
    v13,
    v20,
    v5,
    v7,
    v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "inferred_plldivider_kas",
    23,
    588,
    20,
    v35);
  LODWORD(v26) = v21;
  V_LOCK();
  V_INT((int)&v28, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v35,
    0x1000u,
    0,
    v34,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    "KAS_set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v18,
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_freq_kas_KAS_2380",
    29,
    615,
    40,
    v35);
  if ( v18 > 0.0 )
    v10 = (*(int (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v26);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
