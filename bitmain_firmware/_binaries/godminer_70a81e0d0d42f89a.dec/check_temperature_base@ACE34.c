int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int all_created_runtime; // r8
  int *v4; // r3
  int v5; // r2
  int v6; // t1
  int v7; // r12
  int v8; // r3
  char *v9; // r0
  int v10; // r4
  int v11; // r7
  char *v12; // r5
  int v13; // t1
  int v14; // r0
  int v15; // r0
  int v16; // r9
  char *v17; // r5
  int i; // r4
  int v19; // r7
  int v20; // r0
  int v21; // r0
  int v22; // r8
  int v23; // r9
  int v24; // r10
  int v25; // t1
  int v26; // r3
  int v27; // r4
  char *v28; // r5
  int v29; // r11
  int v30; // r3
  bool v31; // cc
  int v33; // r0
  int v34; // r0
  int v35; // [sp+28h] [bp-109Ch]
  char *v36; // [sp+28h] [bp-109Ch]
  char *v37; // [sp+28h] [bp-109Ch]
  char *s; // [sp+2Ch] [bp-1098h]
  int v39; // [sp+34h] [bp-1090h]
  char *ptr; // [sp+3Ch] [bp-1088h]
  int v41; // [sp+4Ch] [bp-1078h]
  int v44; // [sp+5Ch] [bp-1068h] BYREF
  int v45; // [sp+60h] [bp-1064h] BYREF
  char v46[32]; // [sp+80h] [bp-1044h] BYREF
  int v47; // [sp+A0h] [bp-1024h] BYREF
  _BYTE v48[4100]; // [sp+C0h] [bp-1004h] BYREF

  v44 = 0;
  all_created_runtime = get_all_created_runtime(&v44);
  if ( v44 <= 0 )
  {
    v39 = 2;
  }
  else
  {
    v4 = (int *)all_created_runtime;
    v5 = 256;
    do
    {
      v6 = *v4++;
      v7 = *(_DWORD *)(v6 + 392);
      if ( v5 >= v7 )
        v5 = v7;
    }
    while ( (int *)(all_created_runtime + 4 * v44) != v4 );
    if ( v5 == 256 )
      v8 = 2;
    else
      v8 = v5;
    v39 = v8;
  }
  v9 = (char *)calloc(v44 * v39, 0xCu);
  ptr = v9;
  if ( v9 )
  {
    if ( v44 > 0 )
    {
      v10 = 0;
      v11 = all_created_runtime - 4;
      v35 = 0;
      v12 = v9;
      do
      {
        v13 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        ++v10;
        v12 += 12 * v39;
        v14 = (*(int (**)(void))(v13 + 228))();
        if ( v14 )
        {
          V_LOCK(v14);
          v15 = logfmt_raw((int)v48, 0x1000u);
          v35 = 4;
          V_UNLOCK(v15);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "check_temperature_base",
            22,
            795,
            100,
            v48);
        }
        v9 = (char *)usleep(0x7A120u);
      }
      while ( v44 > v10 );
      v41 = v35;
    }
    else
    {
      v41 = 0;
    }
    if ( v39 > 0 )
    {
      v16 = 0;
      v36 = ptr;
      do
      {
        if ( v44 > 0 )
        {
          v17 = v36;
          for ( i = 0; i < v44; ++i )
          {
            if ( *((_DWORD *)v17 + 1) != -64 )
            {
              v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * i) + 384) + v16 + 12);
              if ( v19 )
              {
                if ( v19 == 1 )
                {
                  V_LOCK(v9);
                  V_INT((int)v46, "chain");
                  v34 = logfmt_raw((int)v48, 0x1000u);
                  V_UNLOCK(v34);
                  v9 = (char *)zlog(
                                 g_zc,
                                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/"
                                 "buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                                 187,
                                 "check_temperature_base",
                                 22,
                                 814,
                                 20,
                                 v48);
                }
              }
              else
              {
                V_LOCK(v9);
                V_INT((int)&v45, "chain");
                v20 = logfmt_raw((int)v48, 0x1000u);
                V_UNLOCK(v20);
                v9 = (char *)zlog(
                               g_zc,
                               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/bu"
                               "ildroot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                               187,
                               "check_temperature_base",
                               22,
                               811,
                               20,
                               v48);
              }
            }
            v17 += 12 * v39;
          }
        }
        v16 += 24;
        v36 += 12;
      }
      while ( 24 * v39 != v16 );
    }
    v21 = set_miner_6060info_uneffective_temp_err(0);
    if ( v44 > 0 )
    {
      v22 = all_created_runtime - 4;
      v23 = -64;
      v24 = 255;
      v37 = ptr;
      s = 0;
      while ( 1 )
      {
        v25 = *(_DWORD *)(v22 + 4);
        v22 += 4;
        v26 = *(_DWORD *)(v25 + 384);
        if ( v39 > 0 )
          break;
LABEL_42:
        v21 = 12 * v39;
        v31 = v44 <= (int)++s;
        v37 += 12 * v39;
        if ( v31 )
          goto LABEL_44;
      }
      v27 = v26 + 20;
      v28 = v37;
      v29 = v26 + 24 * v39 + 20;
      while ( 1 )
      {
        v30 = *((_DWORD *)v28 + 1);
        if ( v30 == -64 )
          break;
        if ( *(_DWORD *)(v27 - 8) > 1u )
        {
LABEL_34:
          v27 += 24;
          v28 += 12;
          if ( v29 == v27 )
            goto LABEL_42;
        }
        else
        {
          v27 += 24;
          v28 += 12;
          if ( v24 >= v30 )
            v24 = v30;
          if ( v23 < v30 )
            v23 = v30;
          if ( v29 == v27 )
            goto LABEL_42;
        }
      }
      V_LOCK(v21);
      V_INT((int)&v47, "chain");
      v33 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "check_temperature_base",
        22,
        825,
        100,
        v48);
      v21 = set_miner_6060info_uneffective_temp_err(1);
      goto LABEL_34;
    }
    v23 = -64;
    v24 = 255;
LABEL_44:
    free(ptr);
    *a2 = v24;
    *a3 = v23;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
  return v41;
}
