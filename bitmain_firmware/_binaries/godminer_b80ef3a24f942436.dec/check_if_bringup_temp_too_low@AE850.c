int __fastcall check_if_bringup_temp_too_low(int a1)
{
  char *all_created_runtime; // r0
  char *v3; // r6
  int v4; // r1
  char *v5; // r7
  char *v6; // r3
  int v7; // r5
  int v8; // t1
  int v9; // r0
  int v11; // r0
  char *v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // t1
  int v16; // r0
  int v17; // [sp+14h] [bp-1008h] BYREF
  _BYTE v18[4100]; // [sp+18h] [bp-1004h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v17);
  if ( v17 > 0 )
  {
    v3 = all_created_runtime;
    v4 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(*(_DWORD *)all_created_runtime + 408) > v4 )
    {
      V_LOCK(all_created_runtime);
      v16 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "check_if_bringup_temp_too_low",
        29,
        1201,
        100,
        v18);
    }
    else
    {
      v5 = all_created_runtime;
      v6 = all_created_runtime;
      v7 = 0;
      do
      {
        if ( ++v7 == v17 )
          return 0;
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
        v9 = *(_DWORD *)(v8 + 408);
      }
      while ( v9 <= v4 );
      V_LOCK(v9);
      v11 = logfmt_raw((int)v18, 0x1000u);
      v12 = &v3[4 * v7];
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
        182,
        "check_if_bringup_temp_too_low",
        29,
        1201,
        100,
        v18);
      do
      {
        v13 = (*(int (**)(void))(*(_DWORD *)v5 + 20))();
        v14 = dev_ctrl(v13);
        v15 = *(_DWORD *)v5;
        v5 += 4;
        (*(void (__fastcall **)(_DWORD))(v14 + 32))(*(_DWORD *)(v15 + 240));
      }
      while ( v12 != v5 );
    }
    power_off();
    while ( 1 )
      sleep(1u);
  }
  return 0;
}
