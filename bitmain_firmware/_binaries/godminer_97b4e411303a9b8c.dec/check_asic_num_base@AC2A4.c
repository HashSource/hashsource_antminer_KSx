int __fastcall check_asic_num_base(int a1)
{
  int v2; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r0
  int v8; // r8
  void *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int i; // r4
  int v14; // r0
  int v15; // r0
  int v16; // r5
  _DWORD *v17; // r4
  int (**v18)(void); // t1
  int v19; // r6
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // [sp+18h] [bp-90h]
  int v28; // [sp+24h] [bp-84h] BYREF
  _DWORD v29[32]; // [sp+28h] [bp-80h] BYREF
  _BYTE v30[4100]; // [sp+A8h] [bp+0h] BYREF

  v2 = 0;
  v28 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v28);
  v27 = all_created_runtime;
  if ( v28 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v6 + 28))(v2++);
      if ( v28 <= v2 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK(all_created_runtime);
  v7 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v7);
  v8 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
    187,
    "check_asic_num_base",
    19,
    669,
    60,
    v30);
  v9 = memset(v29, 0, sizeof(v29));
  V_LOCK(v9);
  v10 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "check_asic_num_base",
          19,
          674,
          60,
          v30);
  while ( 1 )
  {
    v12 = v28;
    if ( v28 > 0 )
    {
      for ( i = 0; i < v28; ++i )
      {
        v14 = dev_ctrl(v11);
        v11 = (*(int (__fastcall **)(int))(v14 + 40))(i);
        v12 = v28;
      }
    }
    v15 = power_init((unsigned __int8)byte_2EA378, v12);
    v16 = v15;
    if ( v15 )
      break;
    v11 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
    if ( v28 > 0 )
    {
      v17 = v27 - 1;
      do
      {
        v18 = (int (**)(void))v17[1];
        ++v17;
        v11 = (*v18)();
        if ( !v11 )
        {
          v19 = 3;
          while ( 1 )
          {
            v20 = dev_ctrl(v11);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v20 + 24))(
              *(_DWORD *)(*v17 + 244),
              *(_DWORD *)(*v17 + 968),
              *(_DWORD *)(*v17 + 992));
            (*(void (**)(void))(*v17 + 232))();
            v11 = (*(int (**)(void))(*v17 + 220))();
            if ( !v11 )
              break;
            if ( !--v19 )
            {
              ++v29[2 * v16];
              break;
            }
          }
          v21 = (*(int (**)(void))(*v17 + 28))();
          V_LOCK(v21);
          v22 = logfmt_raw((int)v30, 0x1000u);
          V_UNLOCK(v22);
          v11 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                  187,
                  "check_asic_num_base",
                  19,
                  708,
                  60,
                  v30);
        }
        ++v16;
      }
      while ( v28 > v16 );
    }
    if ( ++v8 == 1001 )
      return 0;
  }
  V_LOCK(v15);
  v24 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v24);
  v25 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "check_asic_num_base",
          19,
          682,
          100,
          v30);
  V_LOCK(v25);
  v26 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
    187,
    "check_asic_num_base",
    19,
    683,
    100,
    v30);
  return 30;
}
