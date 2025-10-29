int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r9
  _DWORD *v15; // r5
  int (**v16)(void); // t1
  int v17; // r0
  int v18; // r7
  int v19; // r0
  int v20; // r4
  int v21; // r4
  int v22; // r0
  _DWORD *v23; // r6
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r5
  int i; // r4
  int v29; // t1
  int v30; // r5
  _DWORD *v31; // r7
  _DWORD *v32; // r9
  int v33; // r4
  int v34; // r3
  int v35; // t1
  int v36; // t1
  _DWORD *v37; // r6
  int j; // r4
  int v39; // t1
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  _DWORD *v46; // [sp+14h] [bp-1010h]
  int v47; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v48[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v47 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v47);
  v4 = all_created_runtime;
  if ( v47 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_35:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v47 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_35;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    200,
    "start_mining_kas",
    16,
    145,
    60,
    v48);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 76));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v44 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      200,
      "start_mining_kas",
      16,
      153,
      60,
      v48);
  }
  v10 = power_init(0, v47);
  if ( v10 )
  {
    V_LOCK(v10);
    v41 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v41);
    v42 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            200,
            "start_mining_kas",
            16,
            156,
            100,
            v48);
    V_LOCK(v42);
    v43 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v43);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      200,
      "start_mining_kas",
      16,
      157,
      100,
      v48);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            200,
            "start_mining_kas",
            16,
            160,
            40,
            v48);
    started = start_heartbeat_thread(v12);
    v14 = started;
    if ( !started )
    {
      puts("send fake work to open cores");
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
      if ( v47 > 0 )
      {
        v15 = v4 - 1;
        v46 = v4;
        do
        {
          v16 = (int (**)(void))v15[1];
          ++v15;
          v17 = (*v16)();
          if ( !v17 )
          {
            v18 = 3;
            do
            {
              v19 = dev_ctrl(v17);
              v20 = 10;
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v19 + 24))(
                *(_DWORD *)(*v15 + 240),
                *(_DWORD *)(*v15 + 960),
                *(_DWORD *)(*v15 + 984));
              do
              {
                usleep((__useconds_t)&elf_hash_chain[4398]);
                send_fake_work_kas(*v15);
                --v20;
              }
              while ( v20 );
              v21 = (*(int (**)(void))(*v15 + 216))();
              v17 = (*(int (**)(void))(*v15 + 228))();
              if ( !v21 )
                break;
              --v18;
            }
            while ( v18 );
          }
          ++v14;
        }
        while ( v47 > v14 );
        v4 = v46;
      }
      check_and_destroy_abnormal_runtime();
      v22 = get_all_created_runtime(&v47);
      v23 = (_DWORD *)v22;
      if ( v47 <= 0 )
      {
        V_LOCK(v22);
        v45 = logfmt_raw((int)v48, 0x1000u);
        v30 = 12;
        V_UNLOCK(v45);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          200,
          "start_mining_kas",
          16,
          199,
          100,
          v48);
      }
      else
      {
        v24 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
        V_LOCK(v24);
        v25 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v25);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          200,
          "start_mining_kas",
          16,
          205,
          60,
          v48);
        check_if_bringup_temp_valid(a1);
        v26 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 96));
        fan_pwm_set(v26);
        if ( v47 > 0 )
        {
          v27 = v23 - 1;
          for ( i = 0; i < v47; ++i )
          {
            v29 = v27[1];
            ++v27;
            redirect_nonce_output(*v23, v29);
            (*(void (**)(void))(*v27 + 236))();
          }
        }
        v30 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v47 > 0 )
        {
          v31 = v4 - 1;
          v32 = v23 - 1;
          v33 = 0;
          do
          {
            v35 = v31[1];
            ++v31;
            v34 = v35;
            ++v33;
            v36 = v32[1];
            ++v32;
            (*(void (__fastcall **)(int))(v34 + 56))(v36);
          }
          while ( v47 > v33 );
        }
        if ( !v30 )
        {
          v30 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
          if ( !v30 && v47 > 0 )
          {
            v37 = v23 - 1;
            for ( j = 0; j < v47; ++j )
            {
              v39 = v37[1];
              ++v37;
              (*(void (**)(void))(v39 + 120))();
              (*(void (**)(void))(*v37 + 16))();
            }
          }
        }
      }
      return v30;
    }
    return start_heartbeat_thread(started);
  }
}
