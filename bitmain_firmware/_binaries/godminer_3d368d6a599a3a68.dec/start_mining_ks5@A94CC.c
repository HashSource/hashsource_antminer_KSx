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
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r10
  unsigned int v15; // r0
  _DWORD *v16; // r4
  int (**v17)(void); // t1
  int v18; // r6
  int v19; // r0
  int v20; // r11
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r8
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r6
  int i; // r4
  int v29; // t1
  int v30; // r10
  _DWORD *v31; // r8
  int j; // r6
  int v33; // t1
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // [sp+14h] [bp-1008h] BYREF
  _BYTE v42[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  v41 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v41);
  v4 = all_created_runtime;
  if ( v41 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_31:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v41 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_31;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v42, 0x1000u);
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
    v42);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 76));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v38 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "start_mining_ks5",
      16,
      167,
      60,
      v42);
  }
  v10 = power_init(0, v41);
  if ( v10 )
  {
    V_LOCK(v10);
    v35 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v35);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "start_mining_ks5",
            16,
            170,
            100,
            v42);
    V_LOCK(v36);
    v37 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "start_mining_ks5",
      16,
      171,
      100,
      v42);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            200,
            "start_mining_ks5",
            16,
            174,
            40,
            v42);
    started = start_heartbeat_thread(v12);
    v14 = started;
    if ( started )
      return start_heartbeat_thread(started);
    v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
    if ( v41 > 0 )
    {
      v16 = v4 - 1;
      do
      {
        v17 = (int (**)(void))v16[1];
        ++v16;
        v15 = (*v17)();
        if ( !v15 )
        {
          v18 = 3;
          do
          {
            v19 = dev_ctrl(v15);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v19 + 24))(
              *(_DWORD *)(*v16 + 244),
              *(_DWORD *)(*v16 + 968),
              *(_DWORD *)(*v16 + 992));
            v20 = (*(int (**)(void))(*v16 + 220))();
            v15 = (*(int (**)(void))(*v16 + 232))();
            if ( !v20 )
              break;
            v21 = dev_ctrl(v15);
            (*(void (__fastcall **)(_DWORD))(v21 + 32))(*(_DWORD *)(*v16 + 244));
            v15 = sleep(1u);
            --v18;
          }
          while ( v18 );
        }
        ++v14;
      }
      while ( v41 > v14 );
    }
    check_and_destroy_abnormal_runtime(v15);
    v22 = get_all_created_runtime(&v41);
    v23 = (_DWORD *)v22;
    if ( v41 <= 0 )
    {
      V_LOCK(v22);
      v40 = logfmt_raw((int)v42, 0x1000u);
      v30 = 12;
      V_UNLOCK(v40);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        205,
        100,
        v42);
    }
    else
    {
      v24 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
      V_LOCK(v24);
      v25 = logfmt_raw((int)v42, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        200,
        "start_mining_ks5",
        16,
        211,
        60,
        v42);
      check_if_bringup_temp_valid(a1);
      (*(void (__fastcall **)(int))(a1 + 68))(a1);
      printf("bringup_temp %d", *(_DWORD *)(a1 + 96));
      if ( *(int *)(a1 + 96) < 0 )
      {
        v39 = is_power_init();
        set_voltage_by_steps(1520, v39, 20);
      }
      v26 = (*(int (**)(void))(a1 + 24))();
      fan_pwm_set(v26);
      if ( v41 > 0 )
      {
        v27 = v23 - 1;
        for ( i = 0; i < v41; ++i )
        {
          v29 = v27[1];
          ++v27;
          redirect_nonce_output(*v23, v29);
          (*(void (**)(void))(*v27 + 240))();
        }
      }
      v30 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v30 )
      {
        fan_pwm_set_max();
      }
      else
      {
        v30 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
        if ( !v30 && v41 > 0 )
        {
          v31 = v23 - 1;
          for ( j = 0; j < v41; ++j )
          {
            v33 = v31[1];
            ++v31;
            (*(void (**)(void))(v33 + 120))();
            (*(void (**)(void))(*v31 + 16))();
          }
        }
      }
    }
    return v30;
  }
}
