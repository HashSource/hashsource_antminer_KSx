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
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r0
  _DWORD *v15; // r6
  int i; // r9
  int (**v17)(void); // t1
  int v18; // r4
  int v19; // r0
  int v20; // r4
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r9
  int v28; // r0
  int v29; // r0
  _DWORD *v30; // r7
  int v31; // r6
  int v32; // t1
  int v33; // r3
  int v34; // r0
  int v35; // r0
  _DWORD *v36; // r9
  int v37; // r6
  int v38; // t1
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
LABEL_25:
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
        goto LABEL_25;
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
         808,
         60,
         &v44);
  if ( *(_DWORD *)(a1 + 76) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_2E8360 = 1;
    V_LOCK(v9);
    v22 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "start_mining_base",
      17,
      814,
      60,
      &v44);
  }
  v10 = power_init((unsigned __int8)byte_2E8360, v43);
  if ( v10 )
  {
    V_LOCK(v10);
    v23 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v23);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "start_mining_base",
            17,
            817,
            100,
            &v44);
    V_LOCK(v24);
    v25 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "start_mining_base",
      17,
      818,
      100,
      &v44);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)&v44, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "start_mining_base",
            17,
            821,
            40,
            &v44);
    started = start_heartbeat_thread(v12);
    if ( !started )
    {
      if ( opt_algo == 9 )
      {
        v40 = *(int (__fastcall **)(int, int))(a1 + 28);
        v41 = platfrom_get_check_asic_voltage();
        v20 = v40(a1, v41);
        if ( v20 )
          return v20;
      }
      v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
      if ( v43 > 0 )
      {
        v15 = v4 - 1;
        for ( i = 0; i < v43; ++i )
        {
          v17 = (int (**)(void))v15[1];
          ++v15;
          v14 = (*v17)();
          if ( !v14 )
          {
            v18 = 3;
            do
            {
              v19 = dev_ctrl(0);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v19 + 24))(
                *(_DWORD *)(*v15 + 240),
                *(_DWORD *)(*v15 + 960),
                *(_DWORD *)(*v15 + 984));
              (*(void (**)(void))(*v15 + 228))();
              v14 = (*(int (**)(void))(*v15 + 216))();
              if ( v14 )
                break;
              --v18;
            }
            while ( v18 );
          }
        }
        if ( v14 )
          return v14;
      }
      check_and_destroy_abnormal_runtime(v14);
      v26 = get_all_created_runtime(&v43);
      v27 = (_DWORD *)v26;
      if ( v43 <= 0 )
      {
        V_LOCK(v26);
        v42 = logfmt_raw((int)&v44, 0x1000u);
        v20 = 12;
        V_UNLOCK(v42);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "start_mining_base",
          17,
          853,
          100,
          &v44);
        return v20;
      }
      v20 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 88));
      if ( v20 )
        return v20;
      v28 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
      if ( *(_DWORD *)(a1 + 76) != 9 )
      {
        V_LOCK(v28);
        v39 = logfmt_raw((int)&v44, 0x1000u);
        V_UNLOCK(v39);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "start_mining_base",
          17,
          867,
          60,
          &v44);
      }
      v29 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 96));
      fan_pwm_set(v29);
      if ( v43 <= 0 )
      {
        if ( *(_DWORD *)(a1 + 76) != 9 )
          return v20;
      }
      else
      {
        v30 = v27 - 1;
        v31 = 0;
        do
        {
          v32 = v30[1];
          ++v30;
          ++v31;
          redirect_nonce_output(*v27, v32);
          (*(void (**)(void))(*v30 + 236))();
          v33 = v43;
        }
        while ( v43 > v31 );
        if ( *(_DWORD *)(a1 + 76) != 9 )
        {
LABEL_36:
          if ( v33 > 0 )
          {
            v36 = v27 - 1;
            v37 = 0;
            do
            {
              v38 = v36[1];
              ++v36;
              ++v37;
              (*(void (**)(void))(v38 + 4))();
              (*(void (**)(void))(*v36 + 120))();
              (*(void (**)(void))(*v36 + 16))();
            }
            while ( v43 > v37 );
          }
          return v20;
        }
      }
      v34 = (*(int (__fastcall **)(int))(a1 + 68))(a1);
      V_LOCK(v34);
      v35 = logfmt_raw((int)&v44, 0x1000u);
      V_UNLOCK(v35);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "start_mining_base",
        17,
        883,
        60,
        &v44);
      v33 = v43;
      goto LABEL_36;
    }
    return start_heartbeat_thread(started);
  }
}
