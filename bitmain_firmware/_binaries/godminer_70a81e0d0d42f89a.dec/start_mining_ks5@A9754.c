int __fastcall start_mining_ks5(int a1)
{
  int v1; // r6
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int started; // r0
  int v15; // r9
  unsigned int v16; // r0
  _DWORD *v17; // r7
  int i; // r10
  int (**v19)(void); // t1
  int j; // r11
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r7
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  _DWORD *v31; // r8
  int v32; // r0
  int v33; // r0
  int v34; // r0
  _DWORD *v35; // r7
  int k; // r6
  int v37; // t1
  _DWORD *v38; // r8
  int m; // r6
  int v40; // t1
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // [sp+14h] [bp-1010h]
  int v45; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v46[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v45 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v45);
  v4 = all_created_runtime;
  if ( v45 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_24:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v45 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_24;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "start_mining_ks5",
    16,
    160,
    60,
    v46);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 76));
  v10 = v9;
  if ( v9 )
  {
    if ( opt_custom_power_mode == 1 )
    {
      V_LOCK(v9);
      v43 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v43);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        168,
        60,
        v46);
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = power_init(v10, v45);
  if ( !v11 )
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v12);
    v13 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "start_mining_ks5",
            16,
            175,
            40,
            v46);
    started = start_heartbeat_thread(v13);
    v15 = started;
    if ( started )
      return start_heartbeat_thread(started);
    v16 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
    if ( v45 > 0 )
    {
      v17 = v4 - 1;
      for ( i = 0; i < v45; ++i )
      {
LABEL_15:
        v19 = (int (**)(void))v17[1];
        ++v17;
        v16 = (*v19)();
        if ( !v16 )
        {
          for ( j = 3; j; --j )
          {
            v21 = dev_ctrl(v16);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v21 + 24))(
              *(_DWORD *)(*v17 + 244),
              *(_DWORD *)(*v17 + 968),
              *(_DWORD *)(*v17 + 992));
            v44 = (*(int (**)(void))(*v17 + 220))();
            v16 = (*(int (**)(void))(*v17 + 232))();
            if ( !(v44 | v16) )
              break;
            if ( v16 == 22 )
            {
              ++i;
              v15 = 1;
              if ( v45 > i )
                goto LABEL_15;
              goto LABEL_21;
            }
            v22 = dev_ctrl(v16);
            (*(void (__fastcall **)(_DWORD))(v22 + 32))(*(_DWORD *)(*v17 + 244));
            v16 = sleep(1u);
          }
        }
      }
LABEL_21:
      if ( v15 )
      {
        v23 = power_off(v16);
        V_LOCK(v23);
        v24 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          200,
          "start_mining_ks5",
          16,
          211,
          80,
          v46);
        while ( 1 )
          sleep(0x2Au);
      }
    }
    check_and_destroy_abnormal_runtime(v16);
    v30 = get_all_created_runtime(&v45);
    v31 = (_DWORD *)v30;
    if ( v45 <= 0 )
    {
      V_LOCK(v30);
      v42 = logfmt_raw((int)v46, 0x1000u);
      v25 = 12;
      V_UNLOCK(v42);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        220,
        100,
        v46);
    }
    else
    {
      v32 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
      V_LOCK(v32);
      v33 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        226,
        60,
        v46);
      check_if_bringup_temp_valid(a1);
      (*(void (__fastcall **)(int))(a1 + 68))(a1);
      printf("bringup_temp %d", *(_DWORD *)(a1 + 96));
      if ( *(int *)(a1 + 96) < 0 )
      {
        v41 = is_power_init();
        set_voltage_by_steps(1520, v41, 20);
      }
      v34 = (*(int (**)(void))(a1 + 24))();
      fan_pwm_set(v34);
      if ( v45 > 0 )
      {
        v35 = v31 - 1;
        for ( k = 0; k < v45; ++k )
        {
          v37 = v35[1];
          ++v35;
          redirect_nonce_output(*v31, v37);
          (*(void (**)(void))(*v35 + 240))();
        }
      }
      v25 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v25 )
      {
        fan_pwm_set_max();
      }
      else
      {
        v25 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
        if ( !v25 && v45 > 0 )
        {
          v38 = v31 - 1;
          for ( m = 0; m < v45; ++m )
          {
            v40 = v38[1];
            ++v38;
            (*(void (**)(void))(v40 + 120))();
            (*(void (**)(void))(*v38 + 16))();
          }
        }
      }
    }
    return v25;
  }
  V_LOCK(v11);
  v27 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v27);
  v28 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          200,
          "start_mining_ks5",
          16,
          171,
          100,
          v46);
  V_LOCK(v28);
  v29 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v29);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "start_mining_ks5",
    16,
    172,
    100,
    v46);
  return 30;
}
