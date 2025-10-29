int __fastcall set_frequency_ks5(int a1, int a2)
{
  float v2; // s0
  int v3; // r5
  int v5; // r3
  int v7; // r6
  int v8; // r0
  unsigned int *v9; // r0
  double v10; // d9
  int v11; // r0
  int v12; // r8
  unsigned int *v13; // r0
  unsigned int *v14; // r5
  int v15; // r7
  int v16; // r0
  unsigned int *v17; // r2
  int v18; // r7
  unsigned int v19; // r3
  void (__fastcall *v20)(int, _DWORD *); // r3
  int v21; // r7
  int v22; // r0
  unsigned int *v23; // r2
  int v24; // r7
  unsigned int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r3
  int v30; // r0
  int v31; // r0
  int v32; // [sp+4h] [bp-106Ch]
  int v33; // [sp+4h] [bp-106Ch]
  int v34; // [sp+10h] [bp-1060h]
  int v35; // [sp+14h] [bp-105Ch]
  int v36; // [sp+18h] [bp-1058h]
  int v37; // [sp+1Ch] [bp-1054h]
  int v38; // [sp+38h] [bp-1038h] BYREF
  unsigned int v39; // [sp+3Ch] [bp-1034h] BYREF
  __int64 v40; // [sp+40h] [bp-1030h] BYREF
  __int64 v41; // [sp+48h] [bp-1028h]
  _BYTE v42[16]; // [sp+50h] [bp-1020h] BYREF
  int v43; // [sp+60h] [bp-1010h]
  int v44; // [sp+64h] [bp-100Ch]
  int v45; // [sp+68h] [bp-1008h]
  int v46; // [sp+6Ch] [bp-1004h]
  _DWORD v47[2]; // [sp+70h] [bp-1000h] BYREF
  __int64 v48; // [sp+78h] [bp-FF8h]

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 332);
  v38 = 0;
  if ( v5 > 0 )
  {
    v7 = 0;
    do
    {
      ++v7;
      v8 = *(_DWORD *)(a1 + 528) + v3;
      v3 += 44;
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 20));
    }
    while ( *(_DWORD *)(a1 + 332) > v7 );
  }
  v39 = 0;
  v40 = 0;
  v41 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      WORD1(v41) = 12;
  }
  else
  {
    WORD1(v41) = 8;
  }
  v9 = sub_EFBC8(&v39);
  LODWORD(v40) = v39;
  V_LOCK(v9);
  V_INT((int)v42, "chain");
  v10 = v2;
  v34 = v43;
  v35 = v44;
  v36 = v45;
  v37 = v46;
  v11 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_freq_KS5_2382",
    25,
    717,
    40,
    v47);
  if ( v2 > 0.0 )
    (*(void (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v40);
  usleep(0x2710u);
  usleep(0x2710u);
  v12 = *(_DWORD *)(a1 + 332);
  v40 = 0;
  v41 = 524289;
  v13 = (unsigned int *)calloc(12 * v12, 1u);
  v14 = v13;
  if ( !v13 )
  {
    v15 = 3;
    goto LABEL_25;
  }
  v16 = (*(int (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD, int, int, int, int, char *, int, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 284))(
          a1,
          &v40,
          v12,
          v13,
          &v38,
          v32,
          200,
          0,
          v34,
          v35,
          v36,
          v37,
          "set pll_no %d freq: %.2f, expected freq: %.2f",
          a2,
          COERCE_UNSIGNED_INT64(v2),
          HIDWORD(COERCE_UNSIGNED_INT64(v2)),
          COERCE_UNSIGNED_INT64(v2),
          HIDWORD(COERCE_UNSIGNED_INT64(v2)));
  if ( v38 > 0 )
  {
    if ( (bswap32(*v14) & 0x80000000) == 0 )
    {
LABEL_29:
      V_LOCK(v16);
      v15 = 18;
      v30 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
        192,
        "set_frequency_ks5",
        17,
        687,
        100,
        v47);
      goto LABEL_30;
    }
    v17 = v14;
    v18 = 0;
    while ( ++v18 != v38 )
    {
      v19 = v17[3];
      v17 += 3;
      if ( (bswap32(v19) & 0x80000000) == 0 )
        goto LABEL_29;
    }
  }
  usleep(0x2710u);
  v20 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  v47[1] = 0;
  v47[0] = 0x80000000;
  v48 = 4718593;
  v20(a1, v47);
  v21 = *(_DWORD *)(a1 + 332);
  v40 = 0;
  v41 = 1;
  memset(v14, 0, 12 * v21);
  v22 = (*(int (__fastcall **)(int, __int64 *, int, unsigned int *, int *, int, int, _DWORD))(a1 + 284))(
          a1,
          &v40,
          v21,
          v14,
          &v38,
          v33,
          200,
          0);
  if ( v38 <= 0 )
  {
LABEL_24:
    v12 = *(_DWORD *)(a1 + 332);
    v15 = 0;
    goto LABEL_25;
  }
  if ( fabs((double)(unsigned __int16)bswap32(*v14) * 0.00390625 * 25.0 - v10) <= 10.0 )
  {
    v23 = v14;
    v24 = 0;
    while ( ++v24 != v38 )
    {
      v25 = v23[3];
      v23 += 3;
      if ( fabs((double)(unsigned __int16)bswap32(v25) * 0.00390625 * 25.0 - v10) > 10.0 )
        goto LABEL_31;
    }
    goto LABEL_24;
  }
LABEL_31:
  V_LOCK(v22);
  v15 = 18;
  v31 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v31);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_frequency_ks5",
    17,
    707,
    100,
    v47);
LABEL_30:
  v12 = *(_DWORD *)(a1 + 332);
LABEL_25:
  free(v14);
  if ( v12 > 0 )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      ++v27;
      v28 = *(_DWORD *)(a1 + 528) + v26;
      v26 += 44;
      *(float *)(v28 + 4) = v2;
      *(float *)(v28 + 12) = v2;
      pthread_mutex_unlock((pthread_mutex_t *)(v28 + 20));
    }
    while ( *(_DWORD *)(a1 + 332) > v27 );
  }
  return v15;
}
