int __fastcall start_mining_ks5(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int started; // r0
  int v15; // r10
  unsigned int v16; // r0
  _DWORD *v17; // r4
  int (**v18)(void); // t1
  int v19; // r6
  int v20; // r0
  int v21; // r11
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r8
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _DWORD *v28; // r6
  int i; // r4
  int v30; // t1
  int v31; // r10
  _DWORD *v32; // r8
  int j; // r6
  int v34; // t1
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // [sp+14h] [bp-1008h] BYREF
  _BYTE v43[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  v42 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v42);
  v4 = all_created_runtime;
  if ( v42 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_32:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v42 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    200,
    "start_mining_ks5",
    16,
    159,
    60,
    v43);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 76));
  v10 = v9;
  if ( v9 )
  {
    if ( opt_custom_power_mode == 1 )
    {
      V_LOCK(v9);
      v39 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v39);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        167,
        60,
        v43);
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = power_init(v10, v42);
  if ( v11 )
  {
    V_LOCK(v11);
    v36 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v36);
    v37 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "start_mining_ks5",
            16,
            170,
            100,
            v43);
    V_LOCK(v37);
    v38 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "start_mining_ks5",
      16,
      171,
      100,
      v43);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v12);
    v13 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "start_mining_ks5",
            16,
            174,
            40,
            v43);
    started = start_heartbeat_thread(v13);
    v15 = started;
    if ( started )
      return start_heartbeat_thread(started);
    v16 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
    if ( v42 > 0 )
    {
      v17 = v4 - 1;
      do
      {
        v18 = (int (**)(void))v17[1];
        ++v17;
        v16 = (*v18)();
        if ( !v16 )
        {
          v19 = 3;
          do
          {
            v20 = dev_ctrl(v16);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v20 + 24))(
              *(_DWORD *)(*v17 + 244),
              *(_DWORD *)(*v17 + 968),
              *(_DWORD *)(*v17 + 992));
            v21 = (*(int (**)(void))(*v17 + 220))();
            v16 = (*(int (**)(void))(*v17 + 232))();
            if ( !v21 )
              break;
            v22 = dev_ctrl(v16);
            (*(void (__fastcall **)(_DWORD))(v22 + 32))(*(_DWORD *)(*v17 + 244));
            v16 = sleep(1u);
            --v19;
          }
          while ( v19 );
        }
        ++v15;
      }
      while ( v42 > v15 );
    }
    check_and_destroy_abnormal_runtime(v16);
    v23 = get_all_created_runtime(&v42);
    v24 = (_DWORD *)v23;
    if ( v42 <= 0 )
    {
      V_LOCK(v23);
      v41 = logfmt_raw((int)v43, 0x1000u);
      v31 = 12;
      V_UNLOCK(v41);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        205,
        100,
        v43);
    }
    else
    {
      v25 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
      V_LOCK(v25);
      v26 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        211,
        60,
        v43);
      check_if_bringup_temp_valid(a1);
      (*(void (__fastcall **)(int))(a1 + 68))(a1);
      printf("bringup_temp %d", *(_DWORD *)(a1 + 96));
      if ( *(int *)(a1 + 96) < 0 )
      {
        v40 = is_power_init();
        set_voltage_by_steps(1520, v40, 20);
      }
      v27 = (*(int (**)(void))(a1 + 24))();
      fan_pwm_set(v27);
      if ( v42 > 0 )
      {
        v28 = v24 - 1;
        for ( i = 0; i < v42; ++i )
        {
          v30 = v28[1];
          ++v28;
          redirect_nonce_output(*v24, v30);
          (*(void (**)(void))(*v28 + 240))();
        }
      }
      v31 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v31 )
      {
        fan_pwm_set_max();
      }
      else
      {
        v31 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
        if ( !v31 && v42 > 0 )
        {
          v32 = v24 - 1;
          for ( j = 0; j < v42; ++j )
          {
            v34 = v32[1];
            ++v32;
            (*(void (**)(void))(v34 + 120))();
            (*(void (**)(void))(*v32 + 16))();
          }
        }
      }
    }
    return v31;
  }
}
