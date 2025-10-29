int __fastcall chip_speed_test(int a1)
{
  int (__fastcall *v1)(int, float *); // r3
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
  int v32; // r8
  int v33; // r9
  int v34; // t1
  int v35; // r0
  int v36; // r0
  float v37; // [sp+44h] [bp-46Ch] BYREF
  int v38; // [sp+48h] [bp-468h] BYREF
  unsigned __int8 v39; // [sp+4Eh] [bp-462h]
  int v40; // [sp+58h] [bp-458h] BYREF
  _DWORD v41[16]; // [sp+78h] [bp-438h] BYREF
  char v42[1024]; // [sp+B8h] [bp-3F8h] BYREF
  _DWORD v43[1025]; // [sp+4B8h] [bp+8h] BYREF

  v1 = *(int (__fastcall **)(int, float *))(a1 + 144);
  v37 = 0.0;
  v3 = v1(a1, &v37);
  v37 = v37 * 120.0;
  V_LOCK(v3);
  v4 = logfmt_raw((int)v43, 0x1000u);
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
    v43);
  miner_working_status = get_miner_working_status((int)&v38);
  v6 = v39;
  if ( v39 )
  {
    V_LOCK(miner_working_status);
    v36 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      214,
      "chip_speed_test",
      15,
      45,
      20,
      v43);
    return 0;
  }
  else
  {
    if ( *(int *)(a1 + 328) <= 0 )
    {
      v18 = *(_DWORD *)(a1 + 240);
      v8 = v39;
    }
    else
    {
      v7 = v39;
      v8 = v39;
      v9 = *(_DWORD *)(a1 + 520);
      v10 = v39;
      v11 = (_DWORD *)(*(_DWORD *)(a1 + 472) - 4);
      v12 = (unsigned int)v37;
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
      while ( *(_DWORD *)(a1 + 328) > v7 );
      v18 = *(_DWORD *)(a1 + 240);
      if ( v8 >= 16 )
        v6 = 16;
      else
        v6 = v8;
      if ( dword_2E4E3C > 0 && (unsigned int)(v8 - 1) <= 2 )
      {
        v19 = 0;
        do
        {
          while ( 1 )
          {
            if ( dword_2E9DB0[v18] <= 3 )
            {
              v20 = v41[v19];
              v21 = v20 + (v18 << 8);
              if ( !dword_2E9E00[v21] )
                break;
            }
            if ( v8 == ++v19 )
              goto LABEL_21;
          }
          dword_2E9E00[v21] = 1;
          V_LOCK(v15);
          ++v19;
          V_INT((int)&v40, "chain");
          v22 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v22);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
            214,
            "chip_speed_test",
            15,
            90,
            40,
            v43);
          v23 = *(_DWORD *)(a1 + 520) + 44 * v20;
          *(_DWORD *)(v23 + 16) = 0;
          pthread_mutex_lock((pthread_mutex_t *)(v23 + 20));
          v24 = *(_DWORD *)(a1 + 520) + 44 * v20;
          *(float *)(v24 + 4) = *(float *)(v24 + 4) - 50.0;
          v15 = pthread_mutex_unlock((pthread_mutex_t *)(v24 + 20));
          v18 = *(_DWORD *)(a1 + 240);
          ++dword_2E9DB0[v18];
        }
        while ( v8 != v19 );
      }
    }
LABEL_21:
    if ( !v18 )
      dword_2E4E3C -= 120;
    if ( v8 > *(_DWORD *)(a1 + 516) )
    {
      v30 = *(_DWORD *)"bad asic id:";
      strcpy(v42, "bad asic id:");
      if ( v8 > 0 )
      {
        v31 = v41;
        v32 = 12;
        v33 = 0;
        do
        {
          v34 = *v31++;
          v30 = snprintf(&v42[v32], 1024 - v32, "%03d ", v34);
          ++v33;
          v32 += v30;
        }
        while ( v33 < v6 );
      }
      V_LOCK(v30);
      v35 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v35);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        214,
        "chip_speed_test",
        15,
        129,
        40,
        v43);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
      return 0;
    }
    else
    {
      if ( v8 > 0 )
      {
        v25 = *(_DWORD *)(a1 + 520);
        v26 = 0;
        v27 = v41;
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
  }
}
