int __fastcall sub_E6B2C(int a1, int a2, char a3, __int16 a4)
{
  float v4; // s0
  int v5; // r7
  int v6; // r2
  int v7; // r10
  float v8; // s18
  unsigned int v9; // r9
  int v10; // r5
  int v11; // r3
  int v12; // r0
  int v13; // r6
  float v14; // s16
  int v15; // r0
  int v16; // r0
  int v17; // r3
  float v18; // s26
  int v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v27; // [sp+44h] [bp-1038h]
  __int64 v28; // [sp+48h] [bp-1034h] BYREF
  __int64 v29; // [sp+50h] [bp-102Ch]
  _BYTE v30[16]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v31[4100]; // [sp+78h] [bp-1004h] BYREF

  v28 = 0;
  v29 = 0;
  BYTE1(v29) = a4;
  if ( !a2 )
    a4 = 8;
  LOBYTE(v29) = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v29) = 12;
  }
  else
  {
    WORD1(v29) = a4;
  }
  v5 = 2;
  v6 = -1068236443;
  v27 = 2;
LABEL_8:
  v7 = 0;
  v8 = (float)v5;
LABEL_9:
  v10 = v7;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)v10 * (float)((float)v7 * v4)) * v8) / 25.0) * 100.0);
    v12 = 1374389535 * v11;
    v13 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v13;
    if ( (unsigned int)(v13 - 16) <= 0xEA )
    {
      v14 = (float)((float)v13 * 25.0) / v8;
      if ( (v5 != 1 || v14 <= 3125.0) && v14 <= 3200.0 )
      {
        v12 = 25 * v13;
        if ( v14 >= 2000.0 )
        {
          v15 = sub_26EE98(v12, v5);
          v16 = sub_26EE98(v15, v7);
          v12 = sub_26EE98(v16, v10);
          v17 = v14 > 2400.0;
          v9 = (v5 << 8) | 0xC0000000 | (16 * v7);
          v6 = v10 & 7 | v9 | (v13 << 16) | (v17 << 28);
          v18 = (float)v12;
          if ( fabsf((float)v12 - v4) < 3.0 )
            break;
        }
      }
    }
    if ( v10-- == 0 )
    {
      if ( ++v7 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v27 == 1 )
      {
        LODWORD(v28) = v6;
        V_LOCK(v12);
        V_INT((int)v30, "chain");
        v20 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
          171,
          "ChipSetting_freq_kas_KAS_2380",
          29,
          694,
          40,
          v31);
        goto LABEL_24;
      }
      v27 = 1;
      goto LABEL_8;
    }
  }
  v21 = v10 & 7 | v9 | (v13 << 16) | (v17 << 28);
  V_LOCK(v12);
  v22 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
          171,
          "inferred_plldivider_kas",
          23,
          667,
          20,
          v31);
  LODWORD(v28) = v21;
  V_LOCK(v23);
  V_INT((int)v30, "chain");
  v24 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_freq_kas_KAS_2380",
    29,
    694,
    40,
    v31);
  if ( v18 > 0.0 )
    v10 = (*(int (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v28);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
