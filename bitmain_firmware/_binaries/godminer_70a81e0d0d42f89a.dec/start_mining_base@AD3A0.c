int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int started; // r0
  int v15; // r0
  _DWORD *v16; // r6
  int i; // r9
  int (**v18)(void); // t1
  int v19; // r4
  int v20; // r0
  int v21; // r4
  int v23; // r0
  _DWORD *v24; // r7
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r6
  int j; // r4
  int v29; // t1
  int v30; // r0
  int v31; // r0
  _DWORD *v32; // r7
  int v33; // r6
  int v34; // t1
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int (__fastcall *v40)(int, int); // r4
  int v41; // r0
  int v42; // r0
  int v43; // [sp+14h] [bp-4h] BYREF
  int v44; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v43 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v43);
  v4 = all_created_runtime;
  if ( v43 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_27:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v43 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_27;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)&v44, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
         187,
         "start_mining_base",
         17,
         864,
         60,
         &v44);
  v10 = *(_DWORD *)(a1 + 76);
  if ( (v10 <= 5 || v10 == 12) && opt_custom_power_mode == 1 )
  {
    byte_2EB680 = 1;
    V_LOCK(v9);
    v38 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "start_mining_base",
      17,
      870,
      60,
      &v44);
  }
  v11 = power_init((unsigned __int8)byte_2EB680, v43);
  if ( v11 )
  {
    V_LOCK(v11);
    v35 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v35);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "start_mining_base",
            17,
            873,
            100,
            &v44);
    V_LOCK(v36);
    v37 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "start_mining_base",
      17,
      874,
      100,
      &v44);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v12);
    v13 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "start_mining_base",
            17,
            877,
            40,
            &v44);
    started = start_heartbeat_thread(v13);
    if ( started )
    {
      return start_heartbeat_thread(started);
    }
    else
    {
      if ( opt_algo != 9
        || (v40 = *(int (__fastcall **)(int, int))(a1 + 28),
            v41 = platfrom_get_check_asic_voltage(),
            (v21 = v40(a1, v41)) == 0) )
      {
        v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( v43 <= 0 )
          goto LABEL_28;
        v16 = v4 - 1;
        for ( i = 0; i < v43; ++i )
        {
          v18 = (int (**)(void))v16[1];
          ++v16;
          v15 = (*v18)();
          if ( !v15 )
          {
            v19 = 3;
            do
            {
              v20 = dev_ctrl(0);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v20 + 24))(
                *(_DWORD *)(*v16 + 244),
                *(_DWORD *)(*v16 + 968),
                *(_DWORD *)(*v16 + 992));
              (*(void (**)(void))(*v16 + 232))();
              v15 = (*(int (**)(void))(*v16 + 220))();
              if ( v15 )
                break;
              --v19;
            }
            while ( v19 );
          }
        }
        if ( v15 )
        {
          return v15;
        }
        else
        {
LABEL_28:
          check_and_destroy_abnormal_runtime(v15);
          v23 = get_all_created_runtime(&v43);
          v24 = (_DWORD *)v23;
          if ( v43 <= 0 )
          {
            V_LOCK(v23);
            v42 = logfmt_raw((int)&v44, 0x1000u);
            v21 = 12;
            V_UNLOCK(v42);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
              187,
              "start_mining_base",
              17,
              909,
              100,
              &v44);
          }
          else
          {
            v21 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
            if ( !v21 )
            {
              v25 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
              if ( *(_DWORD *)(a1 + 76) != 9 )
              {
                V_LOCK(v25);
                v39 = logfmt_raw((int)&v44, 0x1000u);
                V_UNLOCK(v39);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                  187,
                  "start_mining_base",
                  17,
                  923,
                  60,
                  &v44);
              }
              v26 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 96));
              fan_pwm_set(v26);
              if ( v43 > 0 )
              {
                v27 = v24 - 1;
                for ( j = 0; j < v43; ++j )
                {
                  v29 = v27[1];
                  ++v27;
                  redirect_nonce_output(*v24, v29);
                  (*(void (**)(void))(*v27 + 240))();
                }
              }
              if ( *(_DWORD *)(a1 + 76) == 9 )
              {
                v30 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
                V_LOCK(v30);
                v31 = logfmt_raw((int)&v44, 0x1000u);
                V_UNLOCK(v31);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                  187,
                  "start_mining_base",
                  17,
                  939,
                  60,
                  &v44);
              }
              v21 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
              if ( v21 )
              {
                fan_pwm_set_max();
              }
              else if ( v43 > 0 )
              {
                v32 = v24 - 1;
                v33 = 0;
                do
                {
                  v34 = v32[1];
                  ++v32;
                  ++v33;
                  (*(void (**)(void))(v34 + 4))();
                  (*(void (**)(void))(*v32 + 120))();
                  (*(void (**)(void))(*v32 + 16))();
                }
                while ( v43 > v33 );
              }
            }
          }
        }
      }
      return v21;
    }
  }
}
