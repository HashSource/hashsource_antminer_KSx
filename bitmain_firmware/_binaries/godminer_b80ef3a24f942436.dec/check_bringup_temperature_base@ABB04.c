int __fastcall check_bringup_temperature_base(int a1)
{
  int *all_created_runtime; // r9
  int v2; // r7
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r0
  int v7; // r3
  int v8; // r10
  int v9; // r6
  char *v10; // r8
  int v11; // r4
  int v12; // t1
  char *v13; // r8
  int *v14; // r6
  int v15; // r4
  int v16; // r2
  int v17; // r7
  _DWORD *v18; // r1
  int v19; // r0
  char *v21; // r9
  int *v22; // r11
  int v23; // t1
  int v24; // r6
  int v25; // r6
  int v26; // r4
  int v27; // r2
  int v28; // r3
  double v29; // r0
  int v30; // r3
  bool v31; // cc
  int result; // r0
  double v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v40; // [sp+2Ch] [bp-12E0h]
  int *ptr; // [sp+30h] [bp-12DCh]
  int v42; // [sp+34h] [bp-12D8h]
  int *v43; // [sp+38h] [bp-12D4h]
  char *s; // [sp+3Ch] [bp-12D0h]
  int v45; // [sp+40h] [bp-12CCh]
  int *v46; // [sp+44h] [bp-12C8h]
  int v47; // [sp+44h] [bp-12C8h]
  char *v48; // [sp+48h] [bp-12C4h]
  bool v49; // [sp+4Ch] [bp-12C0h]
  int v50; // [sp+50h] [bp-12BCh]
  int v51; // [sp+54h] [bp-12B8h]
  int v53; // [sp+64h] [bp-12A8h] BYREF
  int v54; // [sp+68h] [bp-12A4h] BYREF
  char v55[32]; // [sp+88h] [bp-1284h] BYREF
  int v56; // [sp+A8h] [bp-1264h] BYREF
  char v57[32]; // [sp+C8h] [bp-1244h] BYREF
  int v58; // [sp+E8h] [bp-1224h] BYREF
  char v59; // [sp+108h] [bp-1204h] BYREF
  _DWORD v60[64]; // [sp+208h] [bp-1104h] BYREF
  _DWORD v61[1025]; // [sp+308h] [bp-1004h] BYREF

  v53 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v53);
  if ( v53 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 396);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( &all_created_runtime[v53] != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  v6 = (int)calloc(v53 * v2, 8u);
  ptr = (int *)v6;
  if ( v6 )
  {
    v7 = v53;
    if ( v53 > 0 )
    {
      v9 = v6;
      v8 = 8 * v2;
      v10 = (char *)(all_created_runtime - 1);
      v11 = 0;
      v46 = all_created_runtime - 1;
      do
      {
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        ++v11;
        v9 += v8;
        (*(void (**)(void))(v12 + 212))();
        v6 = usleep((__useconds_t)&loc_7A120);
        v7 = v53;
      }
      while ( v53 > v11 );
    }
    else
    {
      v8 = 8 * v2;
      v46 = all_created_runtime - 1;
    }
    v49 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v7 == 1 && v2 <= 5 )
        goto LABEL_56;
      v42 = 0;
      v40 = 0;
    }
    else
    {
      v13 = 0;
      v40 = 0;
      v42 = 0;
      v48 = (char *)(24 * v2);
      v43 = ptr;
      v51 = v2;
      do
      {
        if ( v7 > 0 )
        {
          v14 = v43;
          v15 = 0;
          do
          {
            v16 = *v14;
            if ( *v14 != -64 )
            {
              v17 = *(_DWORD *)&v13[*(_DWORD *)(all_created_runtime[v15] + 388) + 12];
              if ( v17 )
              {
                if ( v17 == 1 )
                {
                  v60[v42] = v16;
                  V_LOCK(v6);
                  ++v42;
                  V_INT((int)v55, "chain", *(int *)(all_created_runtime[v15] + 248));
                  v35 = logfmt_raw((int)v61, 0x1000u);
                  V_UNLOCK(v35);
                  v6 = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroo"
                         "t/tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                         182,
                         "check_bringup_temperature_base",
                         30,
                         224,
                         40,
                         v61);
                }
              }
              else
              {
                v18 = &v61[v40++];
                *(v18 - 128) = v16;
                V_LOCK(v6);
                V_INT((int)&v54, "chain", *(int *)(all_created_runtime[v15] + 248));
                v19 = logfmt_raw((int)v61, 0x1000u);
                V_UNLOCK(v19);
                v6 = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                       182,
                       "check_bringup_temperature_base",
                       30,
                       221,
                       40,
                       v61);
              }
            }
            v7 = v53;
            ++v15;
            v14 = (int *)((char *)v14 + v8);
          }
          while ( v53 > v15 );
        }
        v13 += 24;
        v43 += 2;
      }
      while ( v48 != v13 );
      v2 = v51;
      if ( v7 == 1 && v49 )
        goto LABEL_56;
    }
    if ( v7 > 0 )
    {
      v21 = (char *)ptr;
      v45 = 0;
      v22 = v46;
      s = 0;
      v50 = 0;
      v47 = 255;
      while ( 1 )
      {
        v23 = v22[1];
        ++v22;
        v24 = *(_DWORD *)(v23 + 388);
        if ( v2 > 0 )
          break;
LABEL_42:
        v31 = v53 <= ++v50;
        v21 += v8;
        if ( v31 )
        {
          free(ptr);
          v31 = (int)s <= 0;
          if ( (int)s > 0 )
            v31 = v45 <= 0;
          result = v31;
          if ( !v31 )
          {
            *(_DWORD *)(a1 + 92) = v47;
            return result;
          }
LABEL_57:
          V_LOCK(result);
          v38 = logfmt_raw((int)v61, 0x1000u);
          V_UNLOCK(v38);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "check_bringup_temperature_base",
            30,
            273,
            100,
            v61);
          while ( 1 )
            ;
        }
      }
      v25 = v24 + 20;
      v26 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = *(_DWORD *)&v21[8 * v26];
          if ( v27 != -64 )
            break;
          V_LOCK(v6);
          V_INT((int)&v56, "chain", *(int *)(*v22 + 248));
          v34 = logfmt_raw((int)v61, 0x1000u);
          V_UNLOCK(v34);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                 182,
                 "check_bringup_temperature_base",
                 30,
                 246,
                 100,
                 v61);
LABEL_35:
          ++v26;
          v25 += 24;
          if ( v2 == v26 )
            goto LABEL_42;
        }
        v28 = *(_DWORD *)(v25 - 8);
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            HIDWORD(v33) = v42;
            LODWORD(v33) = v60;
            v6 = check_value_valid_with_stdd(v33, v27);
            if ( v6 )
            {
              ++s;
            }
            else
            {
              V_LOCK(0);
              V_INT((int)&v58, "chain", *(int *)(*v22 + 248));
              v37 = logfmt_raw((int)v61, 0x1000u);
              V_UNLOCK(v37);
              v6 = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                     182,
                     "check_bringup_temperature_base",
                     30,
                     261,
                     100,
                     v61);
            }
          }
          goto LABEL_35;
        }
        HIDWORD(v29) = v40;
        LODWORD(v29) = &v59;
        v6 = check_value_valid_with_stdd(v29, v27);
        if ( !v6 )
        {
          V_LOCK(0);
          V_INT((int)v57, "chain", *(int *)(*v22 + 248));
          v36 = logfmt_raw((int)v61, 0x1000u);
          V_UNLOCK(v36);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                 182,
                 "check_bringup_temperature_base",
                 30,
                 253,
                 100,
                 v61);
          goto LABEL_35;
        }
        v25 += 24;
        v30 = *(_DWORD *)&v21[8 * v26++];
        ++v45;
        if ( v47 < v30 )
          v30 = v47;
        v47 = v30;
        if ( v2 == v26 )
          goto LABEL_42;
      }
    }
LABEL_56:
    free(ptr);
    goto LABEL_57;
  }
  printf("invalid pointer(%s)!\n", "sensor_status");
  return 3;
}
