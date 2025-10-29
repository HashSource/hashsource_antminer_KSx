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
  _DWORD *v13; // r6
  int v14; // r4
  int (**v15)(void); // t1
  int v16; // r5
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r4
  int v25; // r0
  unsigned int v26; // r0
  _DWORD *v27; // r7
  int v28; // r6
  int v29; // t1
  int v30; // r3
  int v31; // r0
  int v32; // r0
  _DWORD *v33; // r4
  int v34; // r6
  int v35; // t1
  int v36; // r0
  int (__fastcall *v37)(int, int); // r4
  int v38; // r0
  int v39; // r0
  int v40; // [sp+14h] [bp-4h] BYREF
  int v41; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v40 = 0;
  all_created_runtime = get_all_created_runtime(&v40);
  v4 = all_created_runtime;
  if ( v40 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_21:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v40 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_21;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)&v41, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
         182,
         "start_mining_base",
         17,
         763,
         60,
         &v41);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_2F3B58 = 1;
    V_LOCK(v9);
    v19 = logfmt_raw((int)&v41, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_mining_base",
      17,
      769,
      60,
      &v41);
  }
  v10 = power_init((unsigned __int8)byte_2F3B58, v40);
  if ( v10 )
  {
    V_LOCK(v10);
    v20 = logfmt_raw((int)&v41, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            182,
            "start_mining_base",
            17,
            772,
            100,
            &v41);
    V_LOCK(v21);
    v22 = logfmt_raw((int)&v41, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_mining_base",
      17,
      773,
      100,
      &v41);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)&v41, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "start_mining_base",
      17,
      776,
      40,
      &v41);
    if ( !start_heartbeat_thread() )
    {
      if ( opt_algo == 9 )
      {
        v37 = *(int (__fastcall **)(int, int))(a1 + 28);
        v38 = platfrom_get_check_asic_voltage();
        v16 = v37(a1, v38);
        if ( v16 )
          return v16;
      }
      v12 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v40 > 0 )
      {
        v13 = v4 - 1;
        v14 = 0;
        do
        {
          v15 = (int (**)(void))v13[1];
          ++v13;
          ++v14;
          v12 = (*v15)();
          v16 = v12;
          if ( !v12 )
          {
            v17 = dev_ctrl(0);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 28))(
              *(_DWORD *)(*v13 + 240),
              *(_DWORD *)(*v13 + 980),
              *(_DWORD *)(*v13 + 1000));
            v12 = (*(int (**)(void))(*v13 + 216))();
          }
        }
        while ( v40 > v14 );
        if ( v16 )
          return v16;
      }
      check_and_destroy_abnormal_runtime(v12);
      v23 = get_all_created_runtime(&v40);
      v24 = v23;
      if ( v40 <= 0 )
      {
        V_LOCK(v23);
        v39 = logfmt_raw((int)&v41, 0x1000u);
        v16 = 12;
        V_UNLOCK(v39);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
          182,
          "start_mining_base",
          17,
          807,
          100,
          &v41);
      }
      else
      {
        v16 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v16 )
        {
          v25 = (*(int (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK(v25);
            v36 = logfmt_raw((int)&v41, 0x1000u);
            V_UNLOCK(v36);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              182,
              "start_mining_base",
              17,
              823,
              60,
              &v41);
          }
          v26 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
          fan_pwm_set(v26);
          if ( v40 > 0 )
          {
            v27 = v24 - 1;
            v28 = 0;
            do
            {
              v29 = v27[1];
              ++v27;
              ++v28;
              redirect_nonce_output(*v24, v29);
              (*(void (**)(void))(*v27 + 224))();
              v30 = v40;
            }
            while ( v40 > v28 );
            if ( *(_DWORD *)(a1 + 72) != 9 )
            {
LABEL_32:
              if ( v30 > 0 )
              {
                v33 = v24 - 1;
                v34 = 0;
                do
                {
                  v35 = v33[1];
                  ++v33;
                  ++v34;
                  (*(void (**)(void))(v35 + 4))();
                  (*(void (**)(void))(*v33 + 120))();
                  (*(void (**)(void))(*v33 + 16))();
                }
                while ( v40 > v34 );
              }
              return v16;
            }
LABEL_31:
            v31 = (*(int (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK(v31);
            v32 = logfmt_raw((int)&v41, 0x1000u);
            V_UNLOCK(v32);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              182,
              "start_mining_base",
              17,
              839,
              60,
              &v41);
            v30 = v40;
            goto LABEL_32;
          }
          if ( *(_DWORD *)(a1 + 72) == 9 )
            goto LABEL_31;
        }
      }
      return v16;
    }
    return start_heartbeat_thread();
  }
}
