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
  float *v15; // r8
  int v16; // r7
  float *v17; // r6
  char v18; // r5
  float v19; // s15
  char v20; // r3
  float v21; // s16
  unsigned int *v22; // r0
  int v23; // r0
  int v24; // r0
  int chain_domain_num; // [sp+3Ch] [bp-1268h]
  float *v27; // [sp+48h] [bp-125Ch]
  int i; // [sp+4Ch] [bp-1258h]
  int v29; // [sp+58h] [bp-124Ch]
  int v30; // [sp+5Ch] [bp-1248h]
  int v31; // [sp+60h] [bp-1244h]
  unsigned int v33; // [sp+6Ch] [bp-1238h] BYREF
  __int64 v34; // [sp+70h] [bp-1234h] BYREF
  __int64 v35; // [sp+78h] [bp-122Ch]
  int v36; // [sp+80h] [bp-1224h] BYREF
  _DWORD v37[128]; // [sp+A0h] [bp-1204h] BYREF
  _BYTE v38[4100]; // [sp+2A0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 964);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 332);
  v8 = 0.0;
  v29 = domain_asic_num;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = (float *)v37;
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
    v31 = v13 + 1;
    v14 = 4 * domain_asic_num;
    v30 = 1;
    do
    {
      if ( v29 > 0 )
      {
        v27 = a2;
        for ( i = 0; i != v29; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v15 = v27;
            v16 = 0;
            v17 = (float *)&v37[i];
            v18 = i;
            do
            {
              v19 = *v15;
              domain_asic_num = (int)&v33;
              ++v16;
              v15 = (float *)((char *)v15 + v14);
              if ( v19 > *v17 )
              {
                v20 = *(_DWORD *)(a1 + 428) * v18;
                v34 = 0;
                v35 = 0x80000;
                v21 = v5 + (float)((float)v30 * v2);
                v33 = 0;
                BYTE1(v35) = v20;
                if ( v19 < v21 )
                  v21 = v19;
                v22 = sub_E9AB4(&v33);
                LODWORD(v34) = v33;
                V_LOCK(v22);
                V_INT((int)&v36, "chain");
                v23 = logfmt_raw((int)v38, 0x1000u);
                V_UNLOCK(v23);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
                  171,
                  "ChipSetting_one_asic_freq_KDA_2110",
                  34,
                  701,
                  20,
                  v38);
                (*(void (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v34);
                domain_asic_num = usleep(0x2710u);
                *v17 = v21;
              }
              v17 = (float *)((char *)v17 + v14);
              v18 += v29;
            }
            while ( chain_domain_num != v16 );
          }
          ++v27;
        }
      }
      V_LOCK(domain_asic_num);
      ++v30;
      v24 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v24);
      domain_asic_num = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/backend/backend_kda_2110/backend_kda_2110.c",
                          192,
                          "set_sweep_frequency_kda_2110",
                          28,
                          446,
                          20,
                          v38);
    }
    while ( v30 != v31 );
  }
  usleep(0x7A120u);
  return 0;
}
