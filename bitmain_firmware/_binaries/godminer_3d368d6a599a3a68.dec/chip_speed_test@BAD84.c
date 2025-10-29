int __fastcall chip_speed_test(_DWORD *a1)
{
  int v1; // r7
  int (__fastcall *v2)(_DWORD *, int *); // r3
  int v4; // r0
  int v5; // r0
  int miner_working_status; // r0
  int v7; // r3
  float v8; // s15
  int v9; // r2
  int v10; // r12
  int v11; // r7
  int v12; // r8
  _DWORD *v13; // r1
  unsigned int v14; // s15
  unsigned int v15; // r10
  unsigned int v16; // t1
  int v17; // lr
  bool v18; // zf
  _DWORD *v19; // r10
  int v20; // r3
  int v21; // r5
  int v22; // r2
  int *v23; // r1
  int v24; // t1
  int v26; // r0
  int v27; // r0
  int v28; // r3
  int v29; // r0
  int *v30; // r8
  int v31; // r7
  int v32; // r9
  int v33; // t1
  int v34; // r0
  __int64 v35; // [sp+0h] [bp-18h]
  int v36; // [sp+8h] [bp-10h]
  int v37; // [sp+14h] [bp-4h] BYREF
  unsigned __int8 v38; // [sp+1Eh] [bp+6h]
  _BYTE v39[64]; // [sp+28h] [bp+10h] BYREF
  char v40[1016]; // [sp+68h] [bp+50h] BYREF
  _DWORD v41[1025]; // [sp+468h] [bp+450h] BYREF

  v2 = (int (__fastcall *)(_DWORD *, int *))a1[36];
  *(_DWORD *)(v1 - 4) = 0;
  v4 = v2(a1, &v37);
  *(float *)(v1 - 4) = *(float *)(v1 - 4) * 120.0;
  V_LOCK(v4);
  v5 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    214,
    "chip_speed_test",
    15,
    37,
    20,
    v41);
  miner_working_status = get_miner_working_status(v1);
  v7 = v38;
  if ( v38 )
  {
    V_LOCK(miner_working_status);
    v26 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v26);
    v27 = g_zc;
    LOWORD(v28) = (unsigned __int16)"chip_speed_test";
    v36 = 20;
    v35 = 0x2D0000000FLL;
  }
  else
  {
    if ( (int)a1[83] <= 0 )
    {
      if ( (int)a1[131] >= 0 )
        return 0;
      v29 = *(_DWORD *)"bad asic id:";
      strcpy(v40, "bad asic id:");
    }
    else
    {
      v8 = *(float *)(v1 - 4);
      v9 = v38;
      v10 = v38;
      v11 = a1[132];
      v12 = v38;
      v13 = (_DWORD *)(a1[120] - 4);
      v14 = (unsigned int)v8;
      do
      {
        v16 = v13[1];
        ++v13;
        v15 = v16;
        v17 = v11 + v7;
        if ( v16 < v14 )
        {
          v18 = v15 == 0;
          v19 = &v41[v10++ & 0xF];
          if ( !v18 )
            *(_DWORD *)(v17 + 16) = 3;
          *(v19 - 272) = v9;
          if ( v18 )
            *(_DWORD *)(v17 + 16) = 2;
        }
        else
        {
          *(_DWORD *)(v17 + 16) = v12;
        }
        *v13 = v12;
        ++v9;
        v7 += 44;
      }
      while ( a1[83] > v9 );
      v20 = a1[131];
      if ( v10 >= 16 )
        v21 = 16;
      else
        v21 = v10;
      if ( v20 >= v10 )
      {
        if ( v10 > 0 )
        {
          v22 = 0;
          v23 = (int *)v39;
          do
          {
            v24 = *v23++;
            ++v22;
            *(_DWORD *)(v11 + 44 * v24 + 16) = 0;
          }
          while ( v22 < v21 );
        }
        return 0;
      }
      v29 = *(_DWORD *)"bad asic id:";
      strcpy(v40, "bad asic id:");
      if ( v10 > 0 )
      {
        v30 = (int *)v39;
        v31 = 12;
        v32 = 0;
        do
        {
          v33 = *v30++;
          v29 = snprintf(&v40[v31], 1024 - v31, "%03d ", v33);
          ++v32;
          v31 += v29;
        }
        while ( v32 < v21 );
      }
    }
    V_LOCK(v29);
    v34 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v34);
    v27 = g_zc;
    v36 = 40;
    LOWORD(v28) = -23124;
    v35 = 0x810000000FLL;
  }
  HIWORD(v28) = (unsigned int)"chip_speed_test" >> 16;
  zlog(
    v27,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    214,
    v28,
    v35,
    HIDWORD(v35),
    v36,
    v41);
  return 0;
}
