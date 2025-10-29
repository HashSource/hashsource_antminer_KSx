int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int *all_created_runtime; // r9
  int v4; // r11
  int *v5; // r3
  int v6; // t1
  int v7; // r2
  int v8; // r3
  char *v9; // r5
  char *v10; // r8
  int v11; // r4
  int v12; // t1
  int v13; // r8
  _DWORD *v14; // r5
  int v15; // r4
  int v16; // r2
  int v17; // r7
  char *v18; // r1
  char *v19; // r7
  int *v20; // r3
  int v21; // r8
  int v22; // r9
  int v23; // r3
  _DWORD *v24; // r5
  int v25; // r4
  int v26; // r2
  int v27; // r3
  double v28; // r0
  int v29; // r3
  bool v30; // cc
  double v32; // r0
  int v33; // [sp+28h] [bp-12DCh]
  char *v34; // [sp+2Ch] [bp-12D8h]
  int *v35; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  int v37; // [sp+38h] [bp-12CCh]
  int v38; // [sp+44h] [bp-12C0h]
  char *ptr; // [sp+4Ch] [bp-12B8h]
  int v42; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v43[7]; // [sp+60h] [bp-12A4h] BYREF
  int v44; // [sp+7Ch] [bp-1288h]
  _DWORD v45[7]; // [sp+80h] [bp-1284h] BYREF
  int v46; // [sp+9Ch] [bp-1268h]
  _DWORD v47[7]; // [sp+A0h] [bp-1264h] BYREF
  int v48; // [sp+BCh] [bp-1248h]
  _DWORD v49[7]; // [sp+C0h] [bp-1244h] BYREF
  int v50; // [sp+DCh] [bp-1228h]
  _DWORD v51[7]; // [sp+E0h] [bp-1224h] BYREF
  int v52; // [sp+FCh] [bp-1208h]
  char v53; // [sp+100h] [bp-1204h] BYREF
  _DWORD v54[64]; // [sp+200h] [bp-1104h] BYREF
  char v55[4100]; // [sp+300h] [bp-1004h] BYREF

  v42 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v42);
  if ( v42 > 0 )
  {
    v5 = all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 372);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( &all_created_runtime[v42] != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  ptr = (char *)calloc(v42 * v4, 8u);
  if ( !ptr )
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
  v8 = v42;
  if ( v42 > 0 )
  {
    v9 = ptr;
    v10 = (char *)(all_created_runtime - 1);
    v11 = 0;
    v38 = 8 * v4;
    do
    {
      v12 = *((_DWORD *)v10 + 1);
      v10 += 4;
      ++v11;
      v9 += 8 * v4;
      (*(void (**)(void))(v12 + 212))();
      usleep((__useconds_t)&loc_7A120);
      v8 = v42;
    }
    while ( v42 > v11 );
    if ( v4 <= 0 )
    {
      v33 = 0;
      v37 = 0;
      goto LABEL_25;
    }
LABEL_14:
    v13 = 0;
    v33 = 0;
    v37 = 0;
    v34 = ptr;
    do
    {
      if ( v8 > 0 )
      {
        v14 = v34;
        v15 = 0;
        do
        {
          v16 = *v14;
          if ( *v14 != -64 )
          {
            v17 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v15] + 364) + v13 + 12);
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v54[v37] = v16;
                V_LOCK();
                ++v37;
                V_INT((int)v45, "chain", *(int *)(all_created_runtime[v15] + 232));
                logfmt_raw(
                  v55,
                  0x1000u,
                  0,
                  v46,
                  v45[0],
                  v45[1],
                  v45[2],
                  v45[3],
                  v45[4],
                  v45[5],
                  v45[6],
                  v46,
                  "pcb temp out: %d",
                  *v14);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  182,
                  "check_temperature_base",
                  22,
                  698,
                  20,
                  v55);
              }
            }
            else
            {
              v18 = &v55[4 * v33++];
              *((_DWORD *)v18 - 128) = v16;
              V_LOCK();
              V_INT((int)v43, "chain", *(int *)(all_created_runtime[v15] + 232));
              logfmt_raw(
                v55,
                0x1000u,
                0,
                v44,
                v43[0],
                v43[1],
                v43[2],
                v43[3],
                v43[4],
                v43[5],
                v43[6],
                v44,
                "pcb temp in: %d",
                *v14);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                182,
                "check_temperature_base",
                22,
                695,
                20,
                v55);
            }
          }
          v8 = v42;
          ++v15;
          v14 = (_DWORD *)((char *)v14 + v38);
        }
        while ( v42 > v15 );
      }
      v13 += 24;
      v34 += 8;
    }
    while ( 24 * v4 != v13 );
LABEL_25:
    if ( v8 > 0 )
    {
      v19 = ptr;
      v20 = all_created_runtime - 1;
      v21 = -64;
      v22 = 255;
      v35 = v20;
      s = 0;
      while ( 1 )
      {
        v23 = v35[1];
        ++v35;
        if ( v4 > 0 )
          break;
LABEL_40:
        v30 = v42 <= (int)++s;
        v19 += v38;
        if ( v30 )
          goto LABEL_42;
      }
      v24 = (_DWORD *)(*(_DWORD *)(v23 + 364) + 20);
      v25 = 0;
      while ( 1 )
      {
        v26 = *(_DWORD *)&v19[8 * v25];
        if ( v26 == -64 )
          break;
        v27 = *(v24 - 2);
        if ( v27 )
        {
          if ( v27 == 1 )
          {
            HIDWORD(v32) = v37;
            LODWORD(v32) = v54;
            if ( !check_value_valid_with_stdd(v32, v26) )
            {
              V_LOCK();
              V_INT((int)v51, "chain", *(int *)(*v35 + 232));
              logfmt_raw(
                v55,
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
                *v24);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                182,
                "check_temperature_base",
                22,
                725,
                100,
                v55);
            }
            goto LABEL_35;
          }
LABEL_30:
          ++v25;
          v24 += 6;
          if ( v4 == v25 )
            goto LABEL_40;
        }
        else
        {
          HIDWORD(v28) = v33;
          LODWORD(v28) = &v53;
          if ( !check_value_valid_with_stdd(v28, v26) )
          {
            V_LOCK();
            V_INT((int)v49, "chain", *(int *)(*v35 + 232));
            logfmt_raw(
              v55,
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
              "sensor_addr %02x, J0:6",
              *v24);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              182,
              "check_temperature_base",
              22,
              716,
              100,
              v55);
          }
LABEL_35:
          v29 = *(_DWORD *)&v19[8 * v25++];
          v24 += 6;
          if ( v22 >= v29 )
            v22 = v29;
          if ( v21 < v29 )
            v21 = v29;
          if ( v4 == v25 )
            goto LABEL_40;
        }
      }
      V_LOCK();
      V_INT((int)v47, "chain", *(int *)(*v35 + 232));
      logfmt_raw(
        v55,
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
        "sensor_addr %02x, J0:6",
        *v24);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "check_temperature_base",
        22,
        709,
        100,
        v55);
      goto LABEL_30;
    }
    goto LABEL_48;
  }
  if ( v4 > 0 )
  {
    v38 = 8 * v4;
    goto LABEL_14;
  }
LABEL_48:
  v22 = 255;
  v21 = -64;
LABEL_42:
  free(ptr);
  *a2 = v22;
  *a3 = v21;
  return 0;
}
