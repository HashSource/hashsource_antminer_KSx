int __fastcall set_baud_base(int a1, int a2)
{
  int all_created_runtime; // r0
  int v4; // r8
  int v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int chain_domain_num; // r0
  char v17; // r11
  int v18; // r10
  int v19; // r7
  char v20; // r5
  int v21; // r6
  int v22; // r4
  int v23; // r0
  char asic_addr_interval; // r0
  int v25; // t1
  int v26; // [sp+14h] [bp-1008h] BYREF
  _BYTE v27[4100]; // [sp+18h] [bp-1004h] BYREF

  v26 = 0;
  all_created_runtime = get_all_created_runtime(&v26);
  v4 = all_created_runtime;
  if ( a2 > 3000000 )
  {
    v10 = V_LOCK(all_created_runtime);
    platform_get_chain_domain_num(v10);
    v11 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "set_baud_base",
            13,
            186,
            20,
            v27);
    v13 = V_LOCK(v12);
    platform_get_domain_asic_num(v13);
    v14 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
            187,
            "set_baud_base",
            13,
            187,
            20,
            v27);
    chain_domain_num = platform_get_chain_domain_num(v15);
    if ( chain_domain_num > 2 )
    {
      v17 = chain_domain_num + 16;
      v18 = chain_domain_num + 15;
      v19 = 18;
      do
      {
        chain_domain_num = platform_get_domain_asic_num(chain_domain_num);
        v20 = chain_domain_num * (v17 - v19) - 1;
        if ( v26 > 0 )
        {
          v21 = v4 - 4;
          v22 = 0;
          do
          {
            v23 = v22++;
            asic_addr_interval = platform_get_asic_addr_interval(v23);
            v25 = *(_DWORD *)(v21 + 4);
            v21 += 4;
            chain_domain_num = (*(int (__fastcall **)(int, _DWORD, int))(v25 + 100))(
                                 v25,
                                 (unsigned __int8)(asic_addr_interval * v20),
                                 v19);
          }
          while ( v26 > v22 );
        }
        v19 += 3;
      }
      while ( v18 - v19 >= 0 );
    }
    all_created_runtime = usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  if ( v26 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v26; ++i )
    {
      v7 = *(_DWORD *)(v5 + 4);
      v5 += 4;
      (*(void (**)(void))(v7 + 84))();
      all_created_runtime = usleep(0x2710u);
    }
  }
  v8 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v8 + 16))(a2);
  usleep(0x2710u);
  return 0;
}
