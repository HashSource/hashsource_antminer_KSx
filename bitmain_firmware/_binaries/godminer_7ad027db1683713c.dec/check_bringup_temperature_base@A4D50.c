int __fastcall check_bringup_temperature_base(int a1)
{
  int *all_created_runtime; // r9
  int v2; // r7
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r3
  int v7; // r10
  char *v8; // r6
  char *v9; // r8
  int v10; // r4
  int v11; // t1
  char *v12; // r8
  _DWORD *v13; // r6
  int v14; // r4
  int v15; // r2
  int v16; // r7
  char *v17; // r1
  char *v19; // r9
  int *v20; // r11
  int v21; // t1
  int v22; // r6
  _DWORD *v23; // r6
  int v24; // r4
  int v25; // r2
  int v26; // r3
  double v27; // r0
  int v28; // r3
  bool v29; // cc
  int result; // r0
  double v31; // r0
  int v33; // [sp+2Ch] [bp-12E0h]
  char *ptr; // [sp+30h] [bp-12DCh]
  int v35; // [sp+34h] [bp-12D8h]
  char *v36; // [sp+38h] [bp-12D4h]
  char *s; // [sp+3Ch] [bp-12D0h]
  int v38; // [sp+40h] [bp-12CCh]
  int *v39; // [sp+44h] [bp-12C8h]
  int v40; // [sp+44h] [bp-12C8h]
  char *v41; // [sp+48h] [bp-12C4h]
  bool v42; // [sp+4Ch] [bp-12C0h]
  int v43; // [sp+50h] [bp-12BCh]
  int v44; // [sp+54h] [bp-12B8h]
  int v46; // [sp+64h] [bp-12A8h] BYREF
  _DWORD v47[7]; // [sp+68h] [bp-12A4h] BYREF
  int v48; // [sp+84h] [bp-1288h]
  _DWORD v49[7]; // [sp+88h] [bp-1284h] BYREF
  int v50; // [sp+A4h] [bp-1268h]
  _DWORD v51[7]; // [sp+A8h] [bp-1264h] BYREF
  int v52; // [sp+C4h] [bp-1248h]
  _DWORD v53[7]; // [sp+C8h] [bp-1244h] BYREF
  int v54; // [sp+E4h] [bp-1228h]
  _DWORD v55[7]; // [sp+E8h] [bp-1224h] BYREF
  int v56; // [sp+104h] [bp-1208h]
  char v57; // [sp+108h] [bp-1204h] BYREF
  _DWORD v58[64]; // [sp+208h] [bp-1104h] BYREF
  char v59[4100]; // [sp+308h] [bp-1004h] BYREF

  v46 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v46);
  if ( v46 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 372);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( &all_created_runtime[v46] != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = (char *)calloc(v46 * v2, 8u);
  if ( ptr )
  {
    v6 = v46;
    if ( v46 > 0 )
    {
      v8 = ptr;
      v7 = 8 * v2;
      v9 = (char *)(all_created_runtime - 1);
      v10 = 0;
      v39 = all_created_runtime - 1;
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        ++v10;
        v8 += v7;
        (*(void (**)(void))(v11 + 212))();
        usleep((__useconds_t)&loc_7A120);
        v6 = v46;
      }
      while ( v46 > v10 );
    }
    else
    {
      v7 = 8 * v2;
      v39 = all_created_runtime - 1;
    }
    v42 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v6 == 1 && v2 <= 5 )
        goto LABEL_56;
      v35 = 0;
      v33 = 0;
    }
    else
    {
      v12 = 0;
      v33 = 0;
      v35 = 0;
      v41 = (char *)(24 * v2);
      v36 = ptr;
      v44 = v2;
      do
      {
        if ( v6 > 0 )
        {
          v13 = v36;
          v14 = 0;
          do
          {
            v15 = *v13;
            if ( *v13 != -64 )
            {
              v16 = *(_DWORD *)&v12[*(_DWORD *)(all_created_runtime[v14] + 364) + 12];
              if ( v16 )
              {
                if ( v16 == 1 )
                {
                  v58[v35] = v15;
                  V_LOCK();
                  ++v35;
                  V_INT((int)v49, "chain", *(int *)(all_created_runtime[v14] + 232));
                  logfmt_raw(
                    v59,
                    0x1000u,
                    0,
                    v50,
                    v49[0],
                    v49[1],
                    v49[2],
                    v49[3],
                    v49[4],
                    v49[5],
                    v49[6],
                    v50,
                    "pcb temp out: %d",
                    *v13);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                    182,
                    "check_bringup_temperature_base",
                    30,
                    218,
                    40,
                    v59);
                }
              }
              else
              {
                v17 = &v59[4 * v33++];
                *((_DWORD *)v17 - 128) = v15;
                V_LOCK();
                V_INT((int)v47, "chain", *(int *)(all_created_runtime[v14] + 232));
                logfmt_raw(
                  v59,
                  0x1000u,
                  0,
                  v48,
                  v47[0],
                  v47[1],
                  v47[2],
                  v47[3],
                  v47[4],
                  v47[5],
                  v47[6],
                  v48,
                  "pcb temp in: %d",
                  *v13);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  182,
                  "check_bringup_temperature_base",
                  30,
                  215,
                  40,
                  v59);
              }
            }
            v6 = v46;
            ++v14;
            v13 = (_DWORD *)((char *)v13 + v7);
          }
          while ( v46 > v14 );
        }
        v12 += 24;
        v36 += 8;
      }
      while ( v41 != v12 );
      v2 = v44;
      if ( v6 == 1 && v42 )
        goto LABEL_56;
    }
    if ( v6 > 0 )
    {
      v19 = ptr;
      v38 = 0;
      v20 = v39;
      s = 0;
      v43 = 0;
      v40 = 255;
      while ( 1 )
      {
        v21 = v20[1];
        ++v20;
        v22 = *(_DWORD *)(v21 + 364);
        if ( v2 > 0 )
          break;
LABEL_42:
        v29 = v46 <= ++v43;
        v19 += v7;
        if ( v29 )
        {
          free(ptr);
          v29 = (int)s <= 0;
          if ( (int)s > 0 )
            v29 = v38 <= 0;
          result = v29;
          if ( !v29 )
          {
            *(_DWORD *)(a1 + 92) = v40;
            return result;
          }
LABEL_57:
          V_LOCK();
          logfmt_raw(v59, 0x1000u, 0, "J0:6, temp sensor error, pls check it, and reboot system");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "check_bringup_temperature_base",
            30,
            267,
            100,
            v59);
          while ( 1 )
            ;
        }
      }
      v23 = (_DWORD *)(v22 + 20);
      v24 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = *(_DWORD *)&v19[8 * v24];
          if ( v25 != -64 )
            break;
          V_LOCK();
          V_INT((int)v51, "chain", *(int *)(*v20 + 232));
          logfmt_raw(
            v59,
            0x1000u,
            0,
            v52,
            v51[0],
            v51[1],
            v51[2],
            v51[3],
            v51[4],
            v51[5],
            v51[6],
            v52,
            "sensor_addr %02x, J0:6",
            *v23);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "check_bringup_temperature_base",
            30,
            240,
            100,
            v59);
LABEL_35:
          ++v24;
          v23 += 6;
          if ( v2 == v24 )
            goto LABEL_42;
        }
        v26 = *(v23 - 2);
        if ( v26 )
        {
          if ( v26 == 1 )
          {
            HIDWORD(v31) = v35;
            LODWORD(v31) = v58;
            if ( check_value_valid_with_stdd(v31, v25) )
            {
              ++s;
            }
            else
            {
              V_LOCK();
              V_INT((int)v55, "chain", *(int *)(*v20 + 232));
              logfmt_raw(
                v59,
                0x1000u,
                0,
                v56,
                v55[0],
                v55[1],
                v55[2],
                v55[3],
                v55[4],
                v55[5],
                v55[6],
                v56,
                "sensor_addr %02x, J0:6",
                *v23);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                182,
                "check_bringup_temperature_base",
                30,
                255,
                100,
                v59);
            }
          }
          goto LABEL_35;
        }
        HIDWORD(v27) = v33;
        LODWORD(v27) = &v57;
        if ( !check_value_valid_with_stdd(v27, v25) )
        {
          V_LOCK();
          V_INT((int)v53, "chain", *(int *)(*v20 + 232));
          logfmt_raw(
            v59,
            0x1000u,
            0,
            v54,
            v53[0],
            v53[1],
            v53[2],
            v53[3],
            v53[4],
            v53[5],
            v53[6],
            v54,
            "sensor_addr %02x, J0:6",
            *v23);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "check_bringup_temperature_base",
            30,
            247,
            100,
            v59);
          goto LABEL_35;
        }
        v23 += 6;
        v28 = *(_DWORD *)&v19[8 * v24++];
        ++v38;
        if ( v40 < v28 )
          v28 = v40;
        v40 = v28;
        if ( v2 == v24 )
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
