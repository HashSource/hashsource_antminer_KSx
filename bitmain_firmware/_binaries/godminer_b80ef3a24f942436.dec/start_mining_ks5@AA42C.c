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
  int started; // r10
  int v13; // r0
  _DWORD *v14; // r4
  int (**v15)(void); // t1
  int v16; // r9
  int v17; // r0
  int v18; // r11
  _DWORD *v19; // r0
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r0
  unsigned int v23; // r0
  _DWORD *v24; // r9
  int i; // r4
  int v26; // t1
  int v27; // r9
  _DWORD *v28; // r6
  _DWORD *v29; // r10
  int v30; // r4
  int v31; // r3
  int v32; // t1
  int v33; // t1
  _DWORD *v34; // r8
  int j; // r4
  int v36; // t1
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v44[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v43 = 0;
  all_created_runtime = get_all_created_runtime(&v43);
  v4 = all_created_runtime;
  if ( v43 > 0 )
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
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v43 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    195,
    "start_mining_ks5",
    16,
    145,
    60,
    v44);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 72));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v41 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      195,
      "start_mining_ks5",
      16,
      153,
      60,
      v44);
  }
  v10 = power_init(0, v43);
  if ( v10 )
  {
    V_LOCK(v10);
    v38 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v38);
    v39 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
            195,
            "start_mining_ks5",
            16,
            156,
            100,
            v44);
    V_LOCK(v39);
    v40 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      195,
      "start_mining_ks5",
      16,
      157,
      100,
      v44);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      195,
      "start_mining_ks5",
      16,
      160,
      40,
      v44);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    v13 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v43 > 0 )
    {
      v14 = v4 - 1;
      do
      {
        v15 = (int (**)(void))v14[1];
        ++v14;
        v13 = (*v15)();
        if ( !v13 )
        {
          v16 = 3;
          do
          {
            v17 = dev_ctrl(v13);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 28))(
              *(_DWORD *)(*v14 + 240),
              *(_DWORD *)(*v14 + 980),
              *(_DWORD *)(*v14 + 1000));
            v18 = (*(int (**)(void))(*v14 + 204))();
            v13 = (*(int (**)(void))(*v14 + 216))();
            if ( !v18 )
              break;
            --v16;
          }
          while ( v16 );
        }
        ++started;
      }
      while ( v43 > started );
    }
    check_and_destroy_abnormal_runtime(v13);
    v19 = get_all_created_runtime(&v43);
    v20 = v19;
    if ( v43 <= 0 )
    {
      V_LOCK(v19);
      v42 = logfmt_raw((int)v44, 0x1000u);
      v27 = 12;
      V_UNLOCK(v42);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        195,
        "start_mining_ks5",
        16,
        188,
        100,
        v44);
    }
    else
    {
      v21 = (*(int (__fastcall **)(int))(a1 + 64))(a1);
      V_LOCK(v21);
      v22 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        195,
        "start_mining_ks5",
        16,
        194,
        60,
        v44);
      check_if_bringup_temp_too_low(a1);
      v23 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
      fan_pwm_set(v23);
      if ( v43 > 0 )
      {
        v24 = v20 - 1;
        for ( i = 0; i < v43; ++i )
        {
          v26 = v24[1];
          ++v24;
          redirect_nonce_output(*v20, v26);
          (*(void (**)(void))(*v24 + 224))();
        }
      }
      v27 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v43 > 0 )
      {
        v28 = v4 - 1;
        v29 = v20 - 1;
        v30 = 0;
        do
        {
          v32 = v28[1];
          ++v28;
          v31 = v32;
          ++v30;
          v33 = v29[1];
          ++v29;
          (*(void (__fastcall **)(int))(v31 + 56))(v33);
        }
        while ( v43 > v30 );
      }
      if ( !v27 )
      {
        v27 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v27 && v43 > 0 )
        {
          v34 = v20 - 1;
          for ( j = 0; j < v43; ++j )
          {
            v36 = v34[1];
            ++v34;
            (*(void (**)(void))(v36 + 120))();
            (*(void (**)(void))(*v34 + 16))();
          }
        }
      }
    }
    return v27;
  }
}
