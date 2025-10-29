int __fastcall set_sweep_frequency_kda_2110(int a1, float *a2)
{
  float v2; // s0
  float v5; // s22
  int domain_asic_num; // r0
  int v7; // r1
  float v8; // s15
  float *v9; // r1
  float *v10; // r2
  float *v11; // r3
  float v12; // s14
  int v13; // r3
  int v14; // r10
  float v15; // s23
  float *v16; // r8
  int v17; // r7
  float *v18; // r6
  char v19; // r5
  float v20; // s15
  char v21; // r3
  float v22; // s16
  int v24; // [sp+4h] [bp-12A0h]
  int v25; // [sp+20h] [bp-1284h]
  int v26; // [sp+24h] [bp-1280h]
  int chain_domain_num; // [sp+3Ch] [bp-1268h]
  float *v28; // [sp+48h] [bp-125Ch]
  int i; // [sp+4Ch] [bp-1258h]
  int v30; // [sp+58h] [bp-124Ch]
  int v31; // [sp+5Ch] [bp-1248h]
  int v32; // [sp+60h] [bp-1244h]
  unsigned int v34; // [sp+6Ch] [bp-1238h] BYREF
  __int64 v35; // [sp+70h] [bp-1234h] BYREF
  __int64 v36; // [sp+78h] [bp-122Ch]
  _DWORD v37[7]; // [sp+80h] [bp-1224h] BYREF
  int v38; // [sp+9Ch] [bp-1208h]
  _DWORD v39[128]; // [sp+A0h] [bp-1204h] BYREF
  char v40[4100]; // [sp+2A0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 940);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 312);
  v8 = 0.0;
  v30 = domain_asic_num;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = (float *)v39;
    v11 = a2;
    do
    {
      v12 = *v11++;
      *v10++ = v5;
      if ( v12 > v8 )
        v8 = v12;
    }
    while ( v11 != v9 );
  }
  v13 = (int)(((float)((float)(v8 - v5) + v2) - 0.001) / v2);
  if ( v13 > 0 )
  {
    v32 = v13 + 1;
    v14 = 4 * domain_asic_num;
    v31 = 1;
    do
    {
      if ( v30 <= 0 )
      {
        v15 = (float)v31;
      }
      else
      {
        v15 = (float)v31;
        v28 = a2;
        for ( i = 0; i != v30; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v16 = v28;
            v17 = 0;
            v18 = (float *)&v39[i];
            v19 = i;
            do
            {
              v20 = *v16;
              ++v17;
              v16 = (float *)((char *)v16 + v14);
              if ( v20 > *v18 )
              {
                v21 = *(_DWORD *)(a1 + 404) * v19;
                v35 = 0;
                v36 = 0x80000;
                v22 = v5 + (float)(v15 * v2);
                v34 = 0;
                BYTE1(v36) = v21;
                if ( v20 < v22 )
                  v22 = v20;
                sub_E1934(&v34);
                LODWORD(v35) = v34;
                V_LOCK();
                V_INT((int)v37, "chain", *(int *)(a1 + 232));
                logfmt_raw(
                  v40,
                  0x1000u,
                  0,
                  v38,
                  v37[0],
                  v37[1],
                  v37[2],
                  v37[3],
                  v37[4],
                  v37[5],
                  v37[6],
                  v38,
                  "set freq: %.2f, expected freq: %.2f",
                  v26,
                  v22,
                  v22);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/chip_setting.c",
                  166,
                  "ChipSetting_one_asic_freq_KDA_2110",
                  34,
                  660,
                  20,
                  v40);
                (*(void (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v35);
                usleep(0x2710u);
                *v18 = v22;
              }
              v18 = (float *)((char *)v18 + v14);
              v19 += v30;
            }
            while ( chain_domain_num != v17 );
          }
          ++v28;
        }
      }
      V_LOCK();
      v25 = v31++;
      logfmt_raw(
        v40,
        0x1000u,
        0,
        "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ",
        *(_DWORD *)(a1 + 228),
        v24,
        (float)(v5 + (float)(v15 * v2)),
        v5,
        v2,
        v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        187,
        "set_sweep_frequency_kda_2110",
        28,
        446,
        20,
        v40);
    }
    while ( v31 != v32 );
  }
  usleep(0x7A120u);
  return 0;
}
