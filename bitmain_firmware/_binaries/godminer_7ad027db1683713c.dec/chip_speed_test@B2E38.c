int __fastcall chip_speed_test(_DWORD *a1)
{
  void (__fastcall *v1)(_DWORD *, float *); // r3
  int v3; // r3
  int v4; // r2
  int v5; // r4
  int v6; // r8
  int v7; // lr
  _DWORD *v8; // r1
  unsigned int v9; // s15
  unsigned int v10; // r10
  unsigned int v11; // t1
  int v12; // r12
  bool v13; // zf
  char *v14; // r10
  int v15; // r3
  int v16; // r9
  _BOOL4 v17; // r2
  int *v18; // r2
  int v19; // t1
  int *v20; // r11
  int v21; // r8
  int v22; // t1
  int v23; // r2
  int v24; // lr
  int v25; // r2
  int *v26; // r1
  int v27; // t1
  int v29; // r0
  int v30; // r3
  int *v31; // r4
  int v32; // r5
  int v33; // r8
  int v34; // t1
  bool v35; // nf
  __int64 v36; // [sp+0h] [bp-1464h]
  int v37; // [sp+8h] [bp-145Ch]
  float v38; // [sp+10h] [bp-1454h] BYREF
  int v39; // [sp+14h] [bp-1450h] BYREF
  unsigned __int8 v40; // [sp+1Ah] [bp-144Ah]
  _DWORD v41[16]; // [sp+20h] [bp-1444h] BYREF
  char v42[1024]; // [sp+60h] [bp-1404h] BYREF
  char v43[4100]; // [sp+460h] [bp-1004h] BYREF

  v1 = (void (__fastcall *)(_DWORD *, float *))a1[36];
  v38 = 0.0;
  v1(a1, &v38);
  v38 = v38 * 120.0;
  V_LOCK();
  logfmt_raw(v43, 0x1000u, 0, "qualify nonce count %f", v38);
  V_UNLOCK();
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
  get_miner_working_status((int)&v39);
  v3 = v40;
  if ( v40 )
  {
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "check lost connection to pool, keep the state of all chips!");
    V_UNLOCK();
    v29 = g_zc;
    LOWORD(v30) = (unsigned __int16)"chip_speed_test";
    v37 = 20;
    v36 = 0x2B0000000FLL;
  }
  else
  {
    if ( (int)a1[78] <= 0 )
    {
      v35 = (int)a1[125] < 0;
      dword_2D09CC -= 120;
      if ( !v35 )
        return 0;
      strcpy(v42, "bad asic id:");
    }
    else
    {
      v4 = v40;
      v5 = v40;
      v6 = a1[126];
      v7 = v40;
      v8 = (_DWORD *)(a1[114] - 4);
      v9 = (unsigned int)v38;
      do
      {
        v11 = v8[1];
        ++v8;
        v10 = v11;
        v12 = v6 + v3;
        if ( v11 < v9 )
        {
          v13 = v10 == 0;
          v14 = &v43[4 * (v5++ & 0xF)];
          if ( !v13 )
            *(_DWORD *)(v12 + 16) = 3;
          *((_DWORD *)v14 - 272) = v4;
          if ( v13 )
            *(_DWORD *)(v12 + 16) = 2;
        }
        else
        {
          *(_DWORD *)(v12 + 16) = v7;
        }
        *v8 = v7;
        ++v4;
        v3 += 44;
      }
      while ( a1[78] > v4 );
      v15 = dword_2D09CC;
      if ( v5 >= 16 )
        v16 = 16;
      else
        v16 = v5;
      if ( dword_2D09CC > 0 )
      {
        v17 = v5 <= 3;
        if ( !v5 )
          v17 = 0;
        if ( v17 )
        {
          v18 = v41;
          do
          {
            v19 = *v18++;
            *(_DWORD *)(v6 + 44 * v19 + 16) = 0;
          }
          while ( &v41[v5] != v18 );
          v20 = v41;
          v21 = 0;
          do
          {
            v22 = *v20++;
            ++v21;
            set_onechip_to_lower_level_kas((int)a1, (unsigned __int8)v22);
          }
          while ( v5 > v21 );
          v15 = dword_2D09CC;
        }
      }
      v23 = a1[125];
      dword_2D09CC = v15 - 120;
      if ( v23 >= v5 )
      {
        if ( v5 > 0 )
        {
          v24 = a1[126];
          v25 = 0;
          v26 = v41;
          do
          {
            v27 = *v26++;
            ++v25;
            *(_DWORD *)(v24 + 44 * v27 + 16) = 0;
          }
          while ( v25 < v16 );
        }
        return 0;
      }
      strcpy(v42, "bad asic id:");
      if ( v5 > 0 )
      {
        v31 = v41;
        v32 = 12;
        v33 = 0;
        do
        {
          v34 = *v31++;
          ++v33;
          v32 += snprintf(&v42[v32], 1024 - v32, "%03d ", v34);
        }
        while ( v33 < v16 );
      }
    }
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "%s", v42);
    V_UNLOCK();
    v29 = g_zc;
    v37 = 40;
    LOWORD(v30) = 27360;
    v36 = 0x670000000FLL;
  }
  HIWORD(v30) = (unsigned int)"chip_speed_test" >> 16;
  zlog(
    v29,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    209,
    v30,
    v36,
    HIDWORD(v36),
    v37,
    v43);
  return 0;
}
