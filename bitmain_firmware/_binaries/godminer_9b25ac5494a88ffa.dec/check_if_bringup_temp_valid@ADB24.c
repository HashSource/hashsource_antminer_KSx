int __fastcall check_if_bringup_temp_valid(int a1)
{
  int all_created_runtime; // r0
  int v3; // r6
  int v4; // r3
  bool v5; // cc
  int v6; // r2
  int v7; // r4
  int v8; // r7
  int v9; // r2
  int v10; // t1
  int v11; // r0
  int v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r0
  int v16; // t1
  int v18; // r0
  int v19; // [sp+14h] [bp-1008h] BYREF
  _BYTE v20[4100]; // [sp+18h] [bp-1004h] BYREF

  all_created_runtime = get_all_created_runtime(&v19);
  if ( v19 > 0 )
  {
    v3 = all_created_runtime;
    v4 = *(_DWORD *)(a1 + 96);
    v5 = v4 <= 49;
    if ( v4 <= 49 )
      v5 = *(_DWORD *)(*(_DWORD *)all_created_runtime + 400) <= v4;
    v6 = !v5;
    if ( v5 )
    {
      v7 = v6;
      v8 = all_created_runtime;
      v9 = all_created_runtime;
      do
      {
        if ( ++v7 == v19 )
          return 0;
        v10 = *(_DWORD *)(v9 + 4);
        v9 += 4;
        v11 = *(_DWORD *)(v10 + 400);
      }
      while ( v11 <= v4 );
      V_LOCK(v11);
      v12 = logfmt_raw((int)v20, 0x1000u);
      v13 = v3 + 4 * v7;
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "check_if_bringup_temp_valid",
        27,
        1293,
        100,
        v20);
      do
      {
        v14 = (*(int (**)(void))(*(_DWORD *)v8 + 20))();
        v15 = dev_ctrl(v14);
        v16 = *(_DWORD *)v8;
        v8 += 4;
        (*(void (__fastcall **)(_DWORD))(v15 + 28))(*(_DWORD *)(v16 + 240));
      }
      while ( v13 != v8 );
    }
    else
    {
      V_LOCK(all_created_runtime);
      v18 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "check_if_bringup_temp_valid",
        27,
        1293,
        100,
        v20);
    }
    power_off();
    while ( 1 )
      sleep(1u);
  }
  return 0;
}
