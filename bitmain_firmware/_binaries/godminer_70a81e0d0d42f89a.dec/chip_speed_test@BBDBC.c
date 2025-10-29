int __fastcall chip_speed_test(_DWORD *a1)
{
  int (__fastcall *v1)(_DWORD *, float *); // r3
  int v3; // r0
  int v4; // r0
  int miner_working_status; // r0
  int v6; // r4
  int v7; // r3
  int v8; // r5
  int v9; // r8
  int v10; // r12
  _DWORD *v11; // r2
  unsigned int v12; // s15
  unsigned int v13; // r9
  unsigned int v14; // t1
  int v15; // r0
  bool v16; // zf
  _DWORD *v17; // r9
  int v18; // r3
  int v19; // r8
  int v20; // r11
  int v21; // r2
  int v22; // r0
  int v23; // r3
  int v24; // r11
  int v25; // lr
  int v26; // r2
  int *v27; // r1
  int v28; // t1
  int v30; // r0
  int *v31; // r5
  int v32; // r7
  int v33; // r8
  int v34; // t1
  int v35; // r0
  int v36; // r0
  int v37; // r3
  int v38; // r0
  __int64 v39; // [sp+0h] [bp-14BCh]
  int v40; // [sp+8h] [bp-14B4h]
  float v41; // [sp+44h] [bp-1478h] BYREF
  int v42; // [sp+48h] [bp-1474h] BYREF
  unsigned __int8 v43; // [sp+4Eh] [bp-146Eh]
  int v44; // [sp+58h] [bp-1464h] BYREF
  _DWORD v45[16]; // [sp+78h] [bp-1444h] BYREF
  char v46[1016]; // [sp+B8h] [bp-1404h] BYREF
  _DWORD v47[1025]; // [sp+4B8h] [bp-1004h] BYREF

  v1 = (int (__fastcall *)(_DWORD *, float *))a1[36];
  v41 = 0.0;
  v3 = v1(a1, &v41);
  v41 = v41 * 120.0;
  V_LOCK(v3);
  v4 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    214,
    "chip_speed_test",
    15,
    37,
    20,
    v47);
  miner_working_status = get_miner_working_status((int)&v42);
  v6 = v43;
  if ( v43 )
  {
    V_LOCK(miner_working_status);
    v38 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v38);
    v36 = g_zc;
    v40 = 20;
    LOWORD(v37) = -16192;
    v39 = 0x2D0000000FLL;
LABEL_32:
    HIWORD(v37) = (unsigned int)"chip_speed_test" >> 16;
    zlog(
      v36,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      214,
      v37,
      v39,
      HIDWORD(v39),
      v40,
      v47);
    return 0;
  }
  if ( (int)a1[83] <= 0 )
  {
    v18 = a1[61];
    v8 = v43;
  }
  else
  {
    v7 = v43;
    v8 = v43;
    v9 = a1[132];
    v10 = v43;
    v11 = (_DWORD *)(a1[120] - 4);
    v12 = (unsigned int)v41;
    do
    {
      v14 = v11[1];
      ++v11;
      v13 = v14;
      v15 = v9 + v6;
      if ( v14 < v12 )
      {
        v16 = v13 == 0;
        v17 = &v47[v8++ & 0xF];
        if ( !v16 )
          *(_DWORD *)(v15 + 16) = 3;
        *(v17 - 272) = v7;
        if ( v16 )
          *(_DWORD *)(v15 + 16) = 2;
      }
      else
      {
        *(_DWORD *)(v15 + 16) = v10;
      }
      *v11 = v10;
      ++v7;
      v6 += 44;
    }
    while ( a1[83] > v7 );
    v18 = a1[61];
    if ( v8 >= 16 )
      v6 = 16;
    else
      v6 = v8;
    if ( dword_2E7E50 > 0 && (unsigned int)(v8 - 1) <= 2 )
    {
      v19 = 0;
      do
      {
        while ( 1 )
        {
          if ( dword_2ED0E0[v18] <= 3 )
          {
            v20 = v45[v19];
            v21 = v20 + (v18 << 8);
            if ( !dword_2ED130[v21] )
              break;
          }
          if ( v8 == ++v19 )
            goto LABEL_21;
        }
        dword_2ED130[v21] = 1;
        V_LOCK(v15);
        ++v19;
        V_INT((int)&v44, "chain");
        v22 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
          214,
          "chip_speed_test",
          15,
          90,
          40,
          v47);
        v23 = a1[132] + 44 * v20;
        *(_DWORD *)(v23 + 16) = 0;
        pthread_mutex_lock((pthread_mutex_t *)(v23 + 20));
        v24 = a1[132] + 44 * v20;
        *(float *)(v24 + 4) = *(float *)(v24 + 4) - 50.0;
        v15 = pthread_mutex_unlock((pthread_mutex_t *)(v24 + 20));
        v18 = a1[61];
        ++dword_2ED0E0[v18];
      }
      while ( v8 != v19 );
    }
  }
LABEL_21:
  if ( !v18 )
    dword_2E7E50 -= 120;
  if ( v8 > a1[131] )
  {
    v30 = *(_DWORD *)"bad asic id:";
    strcpy(v46, "bad asic id:");
    if ( v8 > 0 )
    {
      v31 = v45;
      v32 = 12;
      v33 = 0;
      do
      {
        v34 = *v31++;
        v30 = snprintf(&v46[v32], 1024 - v32, "%03d ", v34);
        ++v33;
        v32 += v30;
      }
      while ( v33 < v6 );
    }
    V_LOCK(v30);
    v35 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v35);
    v36 = g_zc;
    v40 = 40;
    LOWORD(v37) = (unsigned __int16)"chip_speed_test";
    v39 = 0x810000000FLL;
    goto LABEL_32;
  }
  if ( v8 > 0 )
  {
    v25 = a1[132];
    v26 = 0;
    v27 = v45;
    do
    {
      v28 = *v27++;
      ++v26;
      *(_DWORD *)(v25 + 44 * v28 + 16) = 0;
    }
    while ( v26 < v6 );
  }
  return 0;
}
