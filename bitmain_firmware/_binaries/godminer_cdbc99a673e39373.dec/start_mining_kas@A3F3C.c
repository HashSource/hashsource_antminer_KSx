int __fastcall start_mining_kas(int a1)
{
  int v1; // r5
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r8
  _DWORD *v5; // r7
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r10
  _DWORD *v15; // r9
  int i; // r5
  int v17; // t1
  int v18; // r0
  _DWORD *v19; // r5
  int (**v20)(void); // t1
  int v21; // r11
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r9
  int v25; // r0
  int v26; // r0
  int v27; // r10
  int v28; // r0
  int v29; // r11
  int v30; // r3
  int v31; // r5
  int v32; // t1
  int v33; // r0
  _DWORD *v34; // r7
  int j; // r5
  int v36; // t1
  int v37; // r5
  _DWORD *v38; // r8
  _DWORD *v39; // r10
  int v40; // r7
  int v41; // r3
  int v42; // t1
  int v43; // t1
  _DWORD *v44; // r9
  int k; // r7
  int v46; // t1
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r5
  int v54; // r0
  int v55; // r0
  int v56; // t1
  int v57; // r0
  int v58; // r0
  int v59; // [sp+14h] [bp-1010h]
  int v60; // [sp+18h] [bp-100Ch] BYREF
  int v61; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v62[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v60 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v60);
  v4 = all_created_runtime;
  if ( v60 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_44:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v60 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_44;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v62, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    195,
    "start_mining_kas",
    16,
    171,
    60,
    v62);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 72));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v51 = logfmt_raw((int)v62, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      195,
      "start_mining_kas",
      16,
      179,
      60,
      v62);
  }
  v10 = power_init(0, v60);
  if ( v10 )
  {
    V_LOCK(v10);
    v48 = logfmt_raw((int)v62, 0x1000u);
    V_UNLOCK(v48);
    v49 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            195,
            "start_mining_kas",
            16,
            182,
            100,
            v62);
    V_LOCK(v49);
    v50 = logfmt_raw((int)v62, 0x1000u);
    V_UNLOCK(v50);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      195,
      "start_mining_kas",
      16,
      183,
      100,
      v62);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v62, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            195,
            "start_mining_kas",
            16,
            186,
            40,
            v62);
    started = start_heartbeat_thread(v12);
    if ( !started )
    {
      puts("send fake work to open cores");
      v14 = 10;
      do
      {
        usleep((__useconds_t)&elf_hash_chain[4398]);
        if ( v60 > 0 )
        {
          v15 = v4 - 1;
          for ( i = 0; i < v60; ++i )
          {
            v17 = v15[1];
            ++v15;
            send_fake_work_kas(v17);
          }
        }
        --v14;
      }
      while ( v14 );
      v18 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v60 > 0 )
      {
        v19 = v4 - 1;
        do
        {
          v20 = (int (**)(void))v19[1];
          ++v19;
          v18 = (*v20)();
          if ( !v18 )
          {
            v21 = 3;
            do
            {
              v22 = dev_ctrl(v18);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v22 + 24))(
                *(_DWORD *)(*v19 + 228),
                *(_DWORD *)(*v19 + 944),
                *(_DWORD *)(*v19 + 968));
              v59 = (*(int (**)(void))(*v19 + 204))();
              v18 = (*(int (**)(void))(*v19 + 216))();
              if ( !v59 )
                break;
              --v21;
            }
            while ( v21 );
          }
          ++v14;
        }
        while ( v60 > v14 );
      }
      check_and_destroy_abnormal_runtime(v18);
      v23 = get_all_created_runtime(&v60);
      v24 = (_DWORD *)v23;
      if ( v60 <= 0 )
      {
        V_LOCK(v23);
        v57 = logfmt_raw((int)v62, 0x1000u);
        v37 = 12;
        V_UNLOCK(v57);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          195,
          "start_mining_kas",
          16,
          227,
          100,
          v62);
      }
      else
      {
        v25 = (*(int (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK(v25);
        v26 = logfmt_raw((int)v62, 0x1000u);
        V_UNLOCK(v26);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          195,
          "start_mining_kas",
          16,
          233,
          60,
          v62);
        v27 = get_all_created_runtime(&v61);
        if ( v61 > 0 )
        {
          v28 = *(_DWORD *)(a1 + 92);
          if ( *(_DWORD *)(*(_DWORD *)v27 + 384) > v28 )
          {
            V_LOCK(v28);
            v58 = logfmt_raw((int)v62, 0x1000u);
            V_UNLOCK(v58);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
              195,
              "check_if_bringup_temp_too_low",
              29,
              143,
              100,
              v62);
          }
          else
          {
            v29 = v27;
            v30 = v27;
            v31 = 0;
            do
            {
              if ( ++v31 == v61 )
                goto LABEL_32;
              v32 = *(_DWORD *)(v30 + 4);
              v30 += 4;
            }
            while ( *(_DWORD *)(v32 + 384) <= v28 );
            V_LOCK(v28);
            v52 = logfmt_raw((int)v62, 0x1000u);
            v53 = v27 + 4 * v31;
            V_UNLOCK(v52);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
              195,
              "check_if_bringup_temp_too_low",
              29,
              143,
              100,
              v62);
            do
            {
              v54 = (*(int (**)(void))(*(_DWORD *)v29 + 20))();
              v55 = dev_ctrl(v54);
              v56 = *(_DWORD *)v29;
              v29 += 4;
              (*(void (__fastcall **)(_DWORD))(v55 + 28))(*(_DWORD *)(v56 + 228));
            }
            while ( v53 != v29 );
          }
          power_off();
          while ( 1 )
            sleep(1u);
        }
        v28 = *(_DWORD *)(a1 + 92);
LABEL_32:
        v33 = (*(int (__fastcall **)(int))(a1 + 24))(v28);
        fan_pwm_set(v33);
        if ( v60 > 0 )
        {
          v34 = v24 - 1;
          for ( j = 0; j < v60; ++j )
          {
            v36 = v34[1];
            ++v34;
            redirect_nonce_output(*v24, v36);
            (*(void (**)(void))(*v34 + 224))();
          }
        }
        v37 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v60 > 0 )
        {
          v38 = v4 - 1;
          v39 = v24 - 1;
          v40 = 0;
          do
          {
            v42 = v38[1];
            ++v38;
            v41 = v42;
            ++v40;
            v43 = v39[1];
            ++v39;
            (*(void (__fastcall **)(int))(v41 + 56))(v43);
          }
          while ( v60 > v40 );
        }
        if ( !v37 )
        {
          v37 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v37 && v60 > 0 )
          {
            v44 = v24 - 1;
            for ( k = 0; k < v60; ++k )
            {
              v46 = v44[1];
              ++v44;
              (*(void (**)(void))(v46 + 120))();
              (*(void (**)(void))(*v44 + 16))();
            }
          }
        }
      }
      return v37;
    }
    return start_heartbeat_thread(started);
  }
}
