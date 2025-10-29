int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int *all_created_runtime; // r9
  int v4; // r11
  int *v5; // r3
  int v6; // t1
  int v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r5
  char *v11; // r8
  int v12; // r4
  int v13; // t1
  int v14; // r8
  int *v15; // r5
  int v16; // r4
  int v17; // r2
  int v18; // r7
  _DWORD *v19; // r1
  int v20; // r0
  char *v21; // r7
  int *v22; // r3
  int v23; // r8
  int v24; // r9
  int v25; // r3
  int v26; // r5
  int v27; // r4
  int v28; // r2
  int v29; // r3
  double v30; // r0
  int v31; // r3
  bool v32; // cc
  double v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // [sp+28h] [bp-12DCh]
  int *v40; // [sp+2Ch] [bp-12D8h]
  int *v41; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  int v43; // [sp+38h] [bp-12CCh]
  int v44; // [sp+44h] [bp-12C0h]
  int *ptr; // [sp+4Ch] [bp-12B8h]
  int v48; // [sp+5Ch] [bp-12A8h] BYREF
  int v49; // [sp+60h] [bp-12A4h] BYREF
  char v50[32]; // [sp+80h] [bp-1284h] BYREF
  int v51; // [sp+A0h] [bp-1264h] BYREF
  char v52[32]; // [sp+C0h] [bp-1244h] BYREF
  int v53; // [sp+E0h] [bp-1224h] BYREF
  char v54; // [sp+100h] [bp-1204h] BYREF
  _DWORD v55[64]; // [sp+200h] [bp-1104h] BYREF
  _DWORD v56[1025]; // [sp+300h] [bp-1004h] BYREF

  v48 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v48);
  if ( v48 > 0 )
  {
    v5 = all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 396);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( &all_created_runtime[v48] != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  v8 = (int)calloc(v48 * v4, 8u);
  ptr = (int *)v8;
  if ( !v8 )
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
  v9 = v48;
  if ( v48 > 0 )
  {
    v10 = v8;
    v11 = (char *)(all_created_runtime - 1);
    v12 = 0;
    v44 = 8 * v4;
    do
    {
      v13 = *((_DWORD *)v11 + 1);
      v11 += 4;
      ++v12;
      v10 += 8 * v4;
      (*(void (**)(void))(v13 + 212))();
      v8 = usleep((__useconds_t)&loc_7A120);
      v9 = v48;
    }
    while ( v48 > v12 );
    if ( v4 <= 0 )
    {
      v39 = 0;
      v43 = 0;
      goto LABEL_25;
    }
LABEL_14:
    v14 = 0;
    v39 = 0;
    v43 = 0;
    v40 = ptr;
    do
    {
      if ( v9 > 0 )
      {
        v15 = v40;
        v16 = 0;
        do
        {
          v17 = *v15;
          if ( *v15 != -64 )
          {
            v18 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v16] + 388) + v14 + 12);
            if ( v18 )
            {
              if ( v18 == 1 )
              {
                v55[v43] = v17;
                V_LOCK(v8);
                ++v43;
                V_INT((int)v50, "chain", *(int *)(all_created_runtime[v16] + 248));
                v38 = logfmt_raw((int)v56, 0x1000u);
                V_UNLOCK(v38);
                v8 = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                       182,
                       "check_temperature_base",
                       22,
                       707,
                       20,
                       v56);
              }
            }
            else
            {
              v19 = &v56[v39++];
              *(v19 - 128) = v17;
              V_LOCK(v8);
              V_INT((int)&v49, "chain", *(int *)(all_created_runtime[v16] + 248));
              v20 = logfmt_raw((int)v56, 0x1000u);
              V_UNLOCK(v20);
              v8 = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                     182,
                     "check_temperature_base",
                     22,
                     704,
                     20,
                     v56);
            }
          }
          v9 = v48;
          ++v16;
          v15 = (int *)((char *)v15 + v44);
        }
        while ( v48 > v16 );
      }
      v14 += 24;
      v40 += 2;
    }
    while ( 24 * v4 != v14 );
LABEL_25:
    if ( v9 > 0 )
    {
      v21 = (char *)ptr;
      v22 = all_created_runtime - 1;
      v23 = -64;
      v24 = 255;
      v41 = v22;
      s = 0;
      while ( 1 )
      {
        v25 = v41[1];
        ++v41;
        if ( v4 > 0 )
          break;
LABEL_40:
        v32 = v48 <= (int)++s;
        v21 += v44;
        if ( v32 )
          goto LABEL_42;
      }
      v26 = *(_DWORD *)(v25 + 388) + 20;
      v27 = 0;
      while ( 1 )
      {
        v28 = *(_DWORD *)&v21[8 * v27];
        if ( v28 == -64 )
          break;
        v29 = *(_DWORD *)(v26 - 8);
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            HIDWORD(v34) = v43;
            LODWORD(v34) = v55;
            v8 = check_value_valid_with_stdd(v34, v28);
            if ( !v8 )
            {
              V_LOCK(0);
              V_INT((int)&v53, "chain", *(int *)(*v41 + 248));
              v35 = logfmt_raw((int)v56, 0x1000u);
              V_UNLOCK(v35);
              v8 = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                     182,
                     "check_temperature_base",
                     22,
                     734,
                     100,
                     v56);
            }
            goto LABEL_35;
          }
LABEL_30:
          ++v27;
          v26 += 24;
          if ( v4 == v27 )
            goto LABEL_40;
        }
        else
        {
          HIDWORD(v30) = v39;
          LODWORD(v30) = &v54;
          v8 = check_value_valid_with_stdd(v30, v28);
          if ( !v8 )
          {
            V_LOCK(0);
            V_INT((int)v52, "chain", *(int *)(*v41 + 248));
            v37 = logfmt_raw((int)v56, 0x1000u);
            V_UNLOCK(v37);
            v8 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                   182,
                   "check_temperature_base",
                   22,
                   725,
                   100,
                   v56);
          }
LABEL_35:
          v31 = *(_DWORD *)&v21[8 * v27++];
          v26 += 24;
          if ( v24 >= v31 )
            v24 = v31;
          if ( v23 < v31 )
            v23 = v31;
          if ( v4 == v27 )
            goto LABEL_40;
        }
      }
      V_LOCK(v8);
      V_INT((int)&v51, "chain", *(int *)(*v41 + 248));
      v36 = logfmt_raw((int)v56, 0x1000u);
      V_UNLOCK(v36);
      v8 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
             182,
             "check_temperature_base",
             22,
             718,
             100,
             v56);
      goto LABEL_30;
    }
    goto LABEL_48;
  }
  if ( v4 > 0 )
  {
    v44 = 8 * v4;
    goto LABEL_14;
  }
LABEL_48:
  v24 = 255;
  v23 = -64;
LABEL_42:
  free(ptr);
  *a2 = v24;
  *a3 = v23;
  return 0;
}
