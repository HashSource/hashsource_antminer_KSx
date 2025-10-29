int __fastcall chip_speed_test(_DWORD *a1)
{
  int (__fastcall *v1)(_DWORD *, float *); // r3
  int v3; // r0
  int v4; // r0
  int miner_working_status; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r4
  int v9; // r9
  int v10; // lr
  _DWORD *v11; // r1
  unsigned int v12; // s15
  unsigned int v13; // r10
  unsigned int v14; // t1
  int v15; // r12
  bool v16; // zf
  _DWORD *v17; // r10
  int v18; // r2
  int v19; // r8
  int v20; // r9
  int v21; // r1
  int v22; // lr
  int v23; // r2
  int *v24; // r1
  int v25; // t1
  int v27; // r0
  int *v28; // r4
  int v29; // r5
  int v30; // r9
  int v31; // t1
  int v32; // r0
  int v33; // r0
  int v34; // r3
  int v35; // r0
  __int64 v36; // [sp+0h] [bp-1464h]
  int v37; // [sp+8h] [bp-145Ch]
  float v38; // [sp+10h] [bp-1454h] BYREF
  int v39; // [sp+14h] [bp-1450h] BYREF
  unsigned __int8 v40; // [sp+1Ah] [bp-144Ah]
  _DWORD v41[16]; // [sp+20h] [bp-1444h] BYREF
  char v42[1024]; // [sp+60h] [bp-1404h] BYREF
  _DWORD v43[1025]; // [sp+460h] [bp-1004h] BYREF

  v1 = (int (__fastcall *)(_DWORD *, float *))a1[36];
  v38 = 0.0;
  v3 = v1(a1, &v38);
  v38 = v38 * 120.0;
  V_LOCK(v3);
  v4 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    209,
    "chip_speed_test",
    15,
    35,
    20,
    v43);
  miner_working_status = get_miner_working_status((int)&v39);
  v6 = v40;
  if ( v40 )
  {
    V_LOCK(miner_working_status);
    v35 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v35);
    v33 = g_zc;
    LOWORD(v34) = 22388;
    v37 = 20;
    v36 = 0x2B0000000FLL;
LABEL_31:
    HIWORD(v34) = (unsigned int)"chip_speed_test" >> 16;
    zlog(
      v33,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      209,
      v34,
      v36,
      HIDWORD(v36),
      v37,
      v43);
    return 0;
  }
  if ( (int)a1[84] <= 0 )
  {
    v18 = a1[60];
    v19 = v40;
    v8 = v40;
  }
  else
  {
    v7 = v40;
    v8 = v40;
    v9 = a1[132];
    v10 = v40;
    v11 = (_DWORD *)(a1[120] - 4);
    v12 = (unsigned int)v38;
    do
    {
      v14 = v11[1];
      ++v11;
      v13 = v14;
      v15 = v9 + v6;
      if ( v14 < v12 )
      {
        v16 = v13 == 0;
        v17 = &v43[v8++ & 0xF];
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
    while ( a1[84] > v7 );
    v18 = a1[60];
    if ( v8 >= 16 )
      v19 = 16;
    else
      v19 = v8;
    if ( dword_2F0A10 > 0 && (unsigned int)(v8 - 1) <= 2 )
    {
      v20 = 0;
      do
      {
        while ( dword_2F5568[v18] > 3 )
        {
          if ( v8 == ++v20 )
            goto LABEL_20;
        }
        v21 = v41[v20++];
        *(_DWORD *)(a1[132] + 44 * v21 + 16) = 0;
        set_onechip_to_lower_level_kas(a1, (unsigned __int8)v21);
        v18 = a1[60];
        ++dword_2F5568[v18];
      }
      while ( v8 != v20 );
    }
  }
LABEL_20:
  if ( !v18 )
    dword_2F0A10 -= 120;
  if ( v8 > a1[131] )
  {
    v27 = *(_DWORD *)"bad asic id:";
    strcpy(v42, "bad asic id:");
    if ( v8 > 0 )
    {
      v28 = v41;
      v29 = 12;
      v30 = 0;
      do
      {
        v31 = *v28++;
        v27 = snprintf(&v42[v29], 1024 - v29, "%03d ", v31);
        ++v30;
        v29 += v27;
      }
      while ( v30 < v19 );
    }
    V_LOCK(v27);
    v32 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v32);
    v33 = g_zc;
    v37 = 40;
    LOWORD(v34) = (unsigned __int16)"chip_speed_test";
    v36 = 0x6D0000000FLL;
    goto LABEL_31;
  }
  if ( v8 > 0 )
  {
    v22 = a1[132];
    v23 = 0;
    v24 = v41;
    do
    {
      v25 = *v24++;
      ++v23;
      *(_DWORD *)(v22 + 44 * v25 + 16) = 0;
    }
    while ( v23 < v19 );
  }
  return 0;
}
