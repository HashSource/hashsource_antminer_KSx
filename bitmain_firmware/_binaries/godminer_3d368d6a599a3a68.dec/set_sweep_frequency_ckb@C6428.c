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
  float *v14; // r8
  int v15; // r7
  float *v16; // r6
  char v17; // r5
  float v18; // s15
  int v19; // r3
  float v20; // s16
  unsigned int *v21; // r0
  int v22; // r0
  int v23; // r0
  float *v24; // r6
  int v25; // r5
  float v26; // s15
  int v27; // r2
  int v29; // [sp+38h] [bp-129Ch]
  int chain_domain_num; // [sp+3Ch] [bp-1298h]
  float *v31; // [sp+48h] [bp-128Ch]
  int i; // [sp+4Ch] [bp-1288h]
  int v33; // [sp+58h] [bp-127Ch]
  int v34; // [sp+5Ch] [bp-1278h]
  int v35; // [sp+60h] [bp-1274h]
  unsigned int v37; // [sp+6Ch] [bp-1268h] BYREF
  int v38; // [sp+70h] [bp-1264h] BYREF
  __int64 v39; // [sp+90h] [bp-1244h] BYREF
  __int64 v40; // [sp+98h] [bp-123Ch]
  __int64 v41; // [sp+A0h] [bp-1234h]
  __int64 v42; // [sp+A8h] [bp-122Ch]
  __int64 v43; // [sp+B0h] [bp-1224h]
  __int64 v44; // [sp+B8h] [bp-121Ch]
  __int64 v45; // [sp+C0h] [bp-1214h]
  __int64 v46; // [sp+C8h] [bp-120Ch]
  _DWORD v47[128]; // [sp+D0h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 964);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 332);
  v8 = 0.0;
  v33 = domain_asic_num;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = (float *)v47;
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
    v35 = v13 + 1;
    v34 = 1;
    v29 = 4 * domain_asic_num;
    do
    {
      if ( v33 > 0 )
      {
        v31 = a2;
        for ( i = 0; i != v33; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v14 = v31;
            v15 = 0;
            v16 = (float *)&v47[i];
            v17 = i;
            do
            {
              v18 = *v14;
              domain_asic_num = (int)&v37;
              ++v15;
              v14 = (float *)((char *)v14 + v29);
              if ( v18 > *v16 )
              {
                v19 = *(_DWORD *)(a1 + 428);
                v39 = 0;
                v40 = 0x80000;
                v20 = v5 + (float)((float)v34 * v2);
                v37 = 0;
                BYTE1(v40) = v19 * v17;
                if ( v18 < v20 )
                  v20 = v18;
                v21 = sub_C274C(&v37);
                LODWORD(v39) = v37;
                V_LOCK(v21);
                V_INT((int)&v38, "chain");
                v22 = logfmt_raw((int)s, 0x1000u);
                V_UNLOCK(v22);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
                  171,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  701,
                  20,
                  s);
                (*(void (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v39);
                domain_asic_num = usleep(0x2710u);
                *v16 = v20;
              }
              v16 = (float *)((char *)v16 + v29);
              v17 += v33;
            }
            while ( chain_domain_num != v15 );
          }
          ++v31;
        }
      }
      V_LOCK(domain_asic_num);
      ++v34;
      v23 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v23);
      domain_asic_num = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_ckb_2042/backend_ckb_2042.c",
                          192,
                          "set_sweep_frequency_ckb",
                          23,
                          437,
                          20,
                          s);
    }
    while ( v34 != v35 );
  }
  memset(s, 0, 0x1000u);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( v33 * chain_domain_num > 0 )
  {
    v24 = (float *)v47;
    v25 = 0;
    do
    {
      v26 = *v24++;
      v27 = v25++;
      sprintf((char *)&v39, "ASIC-%03d [%.2f] ", v27, v26);
      strcat(s, (const char *)&v39);
    }
    while ( v25 != v33 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
