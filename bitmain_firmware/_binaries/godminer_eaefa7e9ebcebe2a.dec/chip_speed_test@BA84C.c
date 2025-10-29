int __fastcall chip_speed_test(int a1)
{
  int (__fastcall *v1)(int, float *); // r3
  int v3; // r0
  int v4; // r0
  int miner_working_status; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r12
  int v9; // r6
  int v10; // r7
  _DWORD *v11; // r1
  unsigned int v12; // s15
  unsigned int v13; // r9
  unsigned int v14; // t1
  int v15; // lr
  bool v16; // zf
  _DWORD *v17; // r9
  int v18; // r8
  int v19; // r2
  int *v20; // r1
  int v21; // t1
  int v23; // r0
  int v24; // r0
  int *v25; // r7
  int v26; // r6
  int v27; // r9
  int v28; // t1
  int v29; // r0
  float v30; // [sp+1Ch] [bp-1458h] BYREF
  int v31; // [sp+20h] [bp-1454h] BYREF
  unsigned __int8 v32; // [sp+26h] [bp-144Eh]
  _BYTE v33[64]; // [sp+30h] [bp-1444h] BYREF
  char v34[1024]; // [sp+70h] [bp-1404h] BYREF
  _DWORD v35[1025]; // [sp+470h] [bp-1004h] BYREF

  v1 = *(int (__fastcall **)(int, float *))(a1 + 144);
  v30 = 0.0;
  v3 = v1(a1, &v30);
  v30 = v30 * 120.0;
  V_LOCK(v3);
  v4 = logfmt_raw((int)v35, 0x1000u);
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
    v35);
  miner_working_status = get_miner_working_status((int)&v31);
  v6 = v32;
  if ( v32 )
  {
    V_LOCK(miner_working_status);
    v23 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      214,
      "chip_speed_test",
      15,
      45,
      20,
      v35);
    return 0;
  }
  else
  {
    if ( *(int *)(a1 + 332) <= 0 )
    {
      if ( *(int *)(a1 + 524) >= 0 )
        return 0;
      v24 = *(_DWORD *)"bad asic id:";
      strcpy(v34, "bad asic id:");
    }
    else
    {
      v7 = v32;
      v8 = v32;
      v9 = *(_DWORD *)(a1 + 528);
      v10 = v32;
      v11 = (_DWORD *)(*(_DWORD *)(a1 + 480) - 4);
      v12 = (unsigned int)v30;
      do
      {
        v14 = v11[1];
        ++v11;
        v13 = v14;
        v15 = v9 + v6;
        if ( v14 < v12 )
        {
          v16 = v13 == 0;
          v17 = &v35[v8++ & 0xF];
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
      while ( *(_DWORD *)(a1 + 332) > v7 );
      if ( v8 >= 16 )
        v18 = 16;
      else
        v18 = v8;
      if ( *(_DWORD *)(a1 + 524) >= v8 )
      {
        if ( v8 > 0 )
        {
          v19 = 0;
          v20 = (int *)v33;
          do
          {
            v21 = *v20++;
            ++v19;
            *(_DWORD *)(v9 + 44 * v21 + 16) = 0;
          }
          while ( v19 < v18 );
        }
        return 0;
      }
      v24 = *(_DWORD *)"bad asic id:";
      strcpy(v34, "bad asic id:");
      if ( v8 > 0 )
      {
        v25 = (int *)v33;
        v26 = 12;
        v27 = 0;
        do
        {
          v28 = *v25++;
          v24 = snprintf(&v34[v26], 1024 - v26, "%03d ", v28);
          ++v27;
          v26 += v24;
        }
        while ( v27 < v18 );
      }
    }
    V_LOCK(v24);
    v29 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      214,
      "chip_speed_test",
      15,
      129,
      40,
      v35);
    (*(void (__fastcall **)(int, _DWORD))(a1 + 208))(a1, 0);
    return 0;
  }
}
