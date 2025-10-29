int __fastcall set_sweep_frequency_ckb(int a1, float *a2)
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
  float v14; // s23
  float *v15; // r8
  int v16; // r7
  float *v17; // r6
  char v18; // r5
  float v19; // s15
  int v20; // r3
  float v21; // s16
  float *v22; // r6
  int v23; // r5
  float v24; // s15
  int v25; // r2
  int v27; // [sp+4h] [bp-12D0h]
  int v28; // [sp+20h] [bp-12B4h]
  int v29; // [sp+24h] [bp-12B0h]
  int v30; // [sp+38h] [bp-129Ch]
  int chain_domain_num; // [sp+3Ch] [bp-1298h]
  float *v32; // [sp+48h] [bp-128Ch]
  int i; // [sp+4Ch] [bp-1288h]
  int v34; // [sp+58h] [bp-127Ch]
  int v35; // [sp+5Ch] [bp-1278h]
  int v36; // [sp+60h] [bp-1274h]
  unsigned int v38; // [sp+6Ch] [bp-1268h] BYREF
  _DWORD v39[7]; // [sp+70h] [bp-1264h] BYREF
  int v40; // [sp+8Ch] [bp-1248h]
  __int64 v41; // [sp+90h] [bp-1244h] BYREF
  __int64 v42; // [sp+98h] [bp-123Ch]
  __int64 v43; // [sp+A0h] [bp-1234h]
  __int64 v44; // [sp+A8h] [bp-122Ch]
  __int64 v45; // [sp+B0h] [bp-1224h]
  __int64 v46; // [sp+B8h] [bp-121Ch]
  __int64 v47; // [sp+C0h] [bp-1214h]
  __int64 v48; // [sp+C8h] [bp-120Ch]
  _DWORD v49[128]; // [sp+D0h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 940);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 312);
  v8 = 0.0;
  v34 = domain_asic_num;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = (float *)v49;
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
    v36 = v13 + 1;
    v35 = 1;
    v30 = 4 * domain_asic_num;
    do
    {
      if ( v34 <= 0 )
      {
        v14 = (float)v35;
      }
      else
      {
        v14 = (float)v35;
        v32 = a2;
        for ( i = 0; i != v34; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v15 = v32;
            v16 = 0;
            v17 = (float *)&v49[i];
            v18 = i;
            do
            {
              v19 = *v15;
              ++v16;
              v15 = (float *)((char *)v15 + v30);
              if ( v19 > *v17 )
              {
                v20 = *(_DWORD *)(a1 + 404);
                v41 = 0;
                v42 = 0x80000;
                v21 = v5 + (float)(v14 * v2);
                v38 = 0;
                BYTE1(v42) = v20 * v18;
                if ( v19 < v21 )
                  v21 = v19;
                sub_BA2F4(&v38);
                LODWORD(v41) = v38;
                V_LOCK();
                V_INT((int)v39, "chain", *(int *)(a1 + 232));
                logfmt_raw(
                  s,
                  0x1000u,
                  0,
                  v40,
                  v39[0],
                  v39[1],
                  v39[2],
                  v39[3],
                  v39[4],
                  v39[5],
                  v39[6],
                  v40,
                  "set freq: %.2f, expected freq: %.2f",
                  v29,
                  v21,
                  v21);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/backend/chip_setting.c",
                  166,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  660,
                  20,
                  s);
                (*(void (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v41);
                usleep(0x2710u);
                *v17 = v21;
              }
              v17 = (float *)((char *)v17 + v30);
              v18 += v34;
            }
            while ( chain_domain_num != v16 );
          }
          ++v32;
        }
      }
      V_LOCK();
      v28 = v35++;
      logfmt_raw(
        s,
        0x1000u,
        0,
        "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ",
        *(_DWORD *)(a1 + 228),
        v27,
        (float)(v5 + (float)(v14 * v2)),
        v5,
        v2,
        v28);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        187,
        "set_sweep_frequency_ckb",
        23,
        437,
        20,
        s);
    }
    while ( v35 != v36 );
  }
  memset(s, 0, 0x1000u);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( v34 * chain_domain_num > 0 )
  {
    v22 = (float *)v49;
    v23 = 0;
    do
    {
      v24 = *v22++;
      v25 = v23++;
      sprintf((char *)&v41, "ASIC-%03d [%.2f] ", v25, v24);
      strcat(s, (const char *)&v41);
    }
    while ( v23 != v34 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
