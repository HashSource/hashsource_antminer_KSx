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
  int started; // r9
  _DWORD *v13; // r5
  int (**v14)(void); // t1
  int v15; // r0
  int v16; // r7
  int v17; // r0
  int v18; // r4
  int v19; // r4
  _DWORD *v20; // r0
  _DWORD *v21; // r6
  int v22; // r0
  int v23; // r0
  unsigned int v24; // r0
  _DWORD *v25; // r5
  int i; // r4
  int v27; // t1
  int v28; // r5
  _DWORD *v29; // r7
  _DWORD *v30; // r9
  int v31; // r4
  int v32; // r3
  int v33; // t1
  int v34; // t1
  _DWORD *v35; // r6
  int j; // r4
  int v37; // t1
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  _DWORD *v44; // [sp+14h] [bp-1010h]
  int v45; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v46[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v45 = 0;
  all_created_runtime = get_all_created_runtime(&v45);
  v4 = all_created_runtime;
  if ( v45 > 0 )
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
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v45 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_35;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "start_mining_kas",
    16,
    145,
    60,
    v46);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 72));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v42 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      195,
      "start_mining_kas",
      16,
      153,
      60,
      v46);
  }
  v10 = power_init(0, v45);
  if ( v10 )
  {
    V_LOCK(v10);
    v39 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v39);
    v40 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            195,
            "start_mining_kas",
            16,
            156,
            100,
            v46);
    V_LOCK(v40);
    v41 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      195,
      "start_mining_kas",
      16,
      157,
      100,
      v46);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      195,
      "start_mining_kas",
      16,
      160,
      40,
      v46);
    started = start_heartbeat_thread();
    if ( !started )
    {
      puts("send fake work to open cores");
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v45 > 0 )
      {
        v13 = v4 - 1;
        v44 = v4;
        do
        {
          v14 = (int (**)(void))v13[1];
          ++v13;
          v15 = (*v14)();
          if ( !v15 )
          {
            v16 = 3;
            do
            {
              v17 = dev_ctrl(v15);
              v18 = 10;
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 28))(
                *(_DWORD *)(*v13 + 240),
                *(_DWORD *)(*v13 + 980),
                *(_DWORD *)(*v13 + 1000));
              do
              {
                usleep((__useconds_t)&elf_hash_chain[4398]);
                send_fake_work_kas(*v13);
                --v18;
              }
              while ( v18 );
              v19 = (*(int (**)(void))(*v13 + 204))();
              v15 = (*(int (**)(void))(*v13 + 216))();
              if ( !v19 )
                break;
              --v16;
            }
            while ( v16 );
          }
          ++started;
        }
        while ( v45 > started );
        v4 = v44;
      }
      check_and_destroy_abnormal_runtime();
      v20 = get_all_created_runtime(&v45);
      v21 = v20;
      if ( v45 <= 0 )
      {
        V_LOCK(v20);
        v43 = logfmt_raw((int)v46, 0x1000u);
        v28 = 12;
        V_UNLOCK(v43);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          195,
          "start_mining_kas",
          16,
          199,
          100,
          v46);
      }
      else
      {
        v22 = (*(int (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK(v22);
        v23 = logfmt_raw((int)v46, 0x1000u);
        V_UNLOCK(v23);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          195,
          "start_mining_kas",
          16,
          205,
          60,
          v46);
        check_if_bringup_temp_too_low(a1);
        v24 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
        fan_pwm_set(v24);
        if ( v45 > 0 )
        {
          v25 = v21 - 1;
          for ( i = 0; i < v45; ++i )
          {
            v27 = v25[1];
            ++v25;
            redirect_nonce_output(*v21, v27);
            (*(void (**)(void))(*v25 + 224))();
          }
        }
        v28 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v45 > 0 )
        {
          v29 = v4 - 1;
          v30 = v21 - 1;
          v31 = 0;
          do
          {
            v33 = v29[1];
            ++v29;
            v32 = v33;
            ++v31;
            v34 = v30[1];
            ++v30;
            (*(void (__fastcall **)(int))(v32 + 56))(v34);
          }
          while ( v45 > v31 );
        }
        if ( !v28 )
        {
          v28 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v28 && v45 > 0 )
          {
            v35 = v21 - 1;
            for ( j = 0; j < v45; ++j )
            {
              v37 = v35[1];
              ++v35;
              (*(void (**)(void))(v37 + 120))();
              (*(void (**)(void))(*v35 + 16))();
            }
          }
        }
      }
      return v28;
    }
    return start_heartbeat_thread();
  }
}
