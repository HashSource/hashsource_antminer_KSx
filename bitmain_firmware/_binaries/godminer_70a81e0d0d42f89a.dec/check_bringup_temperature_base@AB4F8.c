int __fastcall check_bringup_temperature_base(int a1)
{
  int all_created_runtime; // r9
  int v2; // r8
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r4
  int v10; // r10
  int v11; // t1
  int v12; // r1
  int v13; // r10
  int v14; // r8
  char *v15; // r6
  int v16; // r4
  int v17; // r2
  int v18; // r7
  _DWORD *v19; // r1
  int v20; // r0
  char *v22; // r4
  int v23; // r9
  int v24; // r10
  int v25; // t1
  int v26; // r6
  char *v27; // r8
  int v28; // r6
  int v29; // r2
  int v30; // r3
  double v31; // r0
  int v32; // r3
  bool v33; // cc
  int result; // r0
  double v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v42; // [sp+2Ch] [bp-12E0h]
  char *ptr; // [sp+30h] [bp-12DCh]
  int v44; // [sp+34h] [bp-12D8h]
  char *v45; // [sp+38h] [bp-12D4h]
  int v46; // [sp+38h] [bp-12D4h]
  char *s; // [sp+3Ch] [bp-12D0h]
  int v48; // [sp+40h] [bp-12CCh]
  bool v49; // [sp+44h] [bp-12C8h]
  int v50; // [sp+48h] [bp-12C4h]
  int v51; // [sp+4Ch] [bp-12C0h]
  int v52; // [sp+50h] [bp-12BCh]
  int v53; // [sp+50h] [bp-12BCh]
  int v54; // [sp+54h] [bp-12B8h]
  int v56; // [sp+64h] [bp-12A8h] BYREF
  int v57; // [sp+68h] [bp-12A4h] BYREF
  char v58[32]; // [sp+88h] [bp-1284h] BYREF
  int v59; // [sp+A8h] [bp-1264h] BYREF
  char v60[32]; // [sp+C8h] [bp-1244h] BYREF
  int v61; // [sp+E8h] [bp-1224h] BYREF
  char v62; // [sp+108h] [bp-1204h] BYREF
  _DWORD v63[64]; // [sp+208h] [bp-1104h] BYREF
  _DWORD v64[1025]; // [sp+308h] [bp-1004h] BYREF

  v56 = 0;
  all_created_runtime = get_all_created_runtime(&v56);
  if ( v56 > 0 )
  {
    v3 = (int *)all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 392);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( (int *)(all_created_runtime + 4 * v56) != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  v6 = (int)calloc(v56 * v2, 0xCu);
  ptr = (char *)v6;
  if ( v6 )
  {
    v7 = v56;
    if ( v56 > 0 )
    {
      v8 = v6;
      v9 = 0;
      v10 = all_created_runtime - 4;
      v52 = all_created_runtime - 4;
      do
      {
        v11 = *(_DWORD *)(v10 + 4);
        v10 += 4;
        ++v9;
        v8 += 12 * v2;
        (*(void (**)(void))(v11 + 228))();
        v6 = usleep(0x7A120u);
        v7 = v56;
      }
      while ( v56 > v9 );
    }
    else
    {
      v52 = all_created_runtime - 4;
    }
    v49 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v7 == 1 && v2 <= 5 )
        goto LABEL_56;
      v44 = 0;
      v42 = 0;
    }
    else
    {
      v12 = 24 * v2;
      v13 = 0;
      v6 = (int)"chain";
      v54 = v2;
      v14 = 12 * v2;
      v42 = 0;
      v50 = v12;
      v44 = 0;
      v45 = ptr;
      do
      {
        if ( v7 > 0 )
        {
          v15 = v45;
          v16 = 0;
          do
          {
            v17 = *((_DWORD *)v15 + 1);
            if ( v17 != -64 )
            {
              v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * v16) + 384) + v13 + 12);
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  v63[v44] = v17;
                  V_LOCK(v6);
                  ++v44;
                  V_INT((int)v58, "chain");
                  v37 = logfmt_raw((int)v64, 0x1000u);
                  V_UNLOCK(v37);
                  v6 = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                         187,
                         "check_bringup_temperature_base",
                         30,
                         255,
                         40,
                         v64);
                }
              }
              else
              {
                v19 = &v64[v42++];
                *(v19 - 128) = v17;
                V_LOCK(v6);
                V_INT((int)&v57, "chain");
                v20 = logfmt_raw((int)v64, 0x1000u);
                V_UNLOCK(v20);
                v6 = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                       187,
                       "check_bringup_temperature_base",
                       30,
                       252,
                       40,
                       v64);
              }
            }
            v7 = v56;
            ++v16;
            v15 += v14;
          }
          while ( v56 > v16 );
        }
        v13 += 24;
        v45 += 12;
      }
      while ( v50 != v13 );
      v2 = v54;
      if ( v7 == 1 && v49 )
        goto LABEL_56;
    }
    if ( v7 > 0 )
    {
      v22 = ptr;
      v23 = v2;
      v24 = v52;
      v51 = 12 * v2;
      s = 0;
      v46 = 0;
      v53 = 0;
      v48 = 255;
      while ( 1 )
      {
        v25 = *(_DWORD *)(v24 + 4);
        v24 += 4;
        v26 = *(_DWORD *)(v25 + 384);
        if ( v23 > 0 )
          break;
        v27 = &v22[v51];
LABEL_43:
        v22 = v27;
        if ( v56 <= ++v53 )
        {
          free(ptr);
          v33 = v46 <= 0;
          if ( v46 > 0 )
            v33 = (int)s <= 0;
          result = v33;
          if ( !v33 )
          {
            *(_DWORD *)(a1 + 96) = v48;
            return result;
          }
LABEL_57:
          V_LOCK(result);
          v40 = logfmt_raw((int)v64, 0x1000u);
          V_UNLOCK(v40);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "check_bringup_temperature_base",
            30,
            304,
            100,
            v64);
          while ( 1 )
            ;
        }
      }
      v28 = v26 + 20;
      v27 = &v22[v51];
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = *((_DWORD *)v22 + 1);
          if ( v29 != -64 )
            break;
          V_LOCK(v6);
          V_INT((int)&v59, "chain");
          v36 = logfmt_raw((int)v64, 0x1000u);
          V_UNLOCK(v36);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                 187,
                 "check_bringup_temperature_base",
                 30,
                 277,
                 100,
                 v64);
LABEL_36:
          v22 += 12;
          v28 += 24;
          if ( v27 == v22 )
            goto LABEL_43;
        }
        v30 = *(_DWORD *)(v28 - 8);
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            HIDWORD(v35) = v44;
            LODWORD(v35) = v63;
            v6 = check_value_valid_with_stdd(v35, v29);
            if ( v6 )
            {
              ++v46;
            }
            else
            {
              V_LOCK(0);
              V_INT((int)&v61, "chain");
              v39 = logfmt_raw((int)v64, 0x1000u);
              V_UNLOCK(v39);
              v6 = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                     187,
                     "check_bringup_temperature_base",
                     30,
                     292,
                     100,
                     v64);
            }
          }
          goto LABEL_36;
        }
        HIDWORD(v31) = v42;
        LODWORD(v31) = &v62;
        v6 = check_value_valid_with_stdd(v31, v29);
        if ( !v6 )
        {
          V_LOCK(0);
          V_INT((int)v60, "chain");
          v38 = logfmt_raw((int)v64, 0x1000u);
          V_UNLOCK(v38);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                 187,
                 "check_bringup_temperature_base",
                 30,
                 284,
                 100,
                 v64);
          goto LABEL_36;
        }
        v22 += 12;
        v32 = *((_DWORD *)v22 - 2);
        v28 += 24;
        ++s;
        if ( v48 < v32 )
          v32 = v48;
        v48 = v32;
        if ( v27 == v22 )
          goto LABEL_43;
      }
    }
LABEL_56:
    free(ptr);
    goto LABEL_57;
  }
  printf("invalid pointer(%s)!\n", "sensor_status");
  return 3;
}
