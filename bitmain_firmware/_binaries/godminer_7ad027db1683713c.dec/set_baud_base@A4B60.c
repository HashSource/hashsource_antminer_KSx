int __fastcall set_baud_base(int a1, int a2)
{
  char *all_created_runtime; // r0
  char *v4; // r8
  char *v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int chain_domain_num; // r0
  int domain_asic_num; // r0
  int v12; // r0
  char v13; // r11
  int v14; // r10
  int v15; // r7
  char v16; // r5
  char *v17; // r6
  int v18; // r4
  int v19; // r0
  char asic_addr_interval; // r0
  int v21; // t1
  int v22; // [sp+14h] [bp-1008h] BYREF
  char v23[4100]; // [sp+18h] [bp-1004h] BYREF

  v22 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v22);
  v4 = all_created_runtime;
  if ( a2 > (int)&unk_2DC6C0 )
  {
    V_LOCK();
    chain_domain_num = platform_get_chain_domain_num();
    logfmt_raw(v23, 0x1000u, 0, "chain_domain_num:%d", chain_domain_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "set_baud_base",
      13,
      149,
      20,
      v23);
    V_LOCK();
    domain_asic_num = platform_get_domain_asic_num();
    logfmt_raw(v23, 0x1000u, 0, "domain_asic_num :%d", domain_asic_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
      182,
      "set_baud_base",
      13,
      150,
      20,
      v23);
    v12 = platform_get_chain_domain_num();
    if ( v12 > 2 )
    {
      v13 = v12 + 16;
      v14 = v12 + 15;
      v15 = 18;
      do
      {
        v16 = platform_get_domain_asic_num() * (v13 - v15) - 1;
        if ( v22 > 0 )
        {
          v17 = v4 - 4;
          v18 = 0;
          do
          {
            v19 = v18++;
            asic_addr_interval = platform_get_asic_addr_interval(v19);
            v21 = *((_DWORD *)v17 + 1);
            v17 += 4;
            (*(void (__fastcall **)(int, _DWORD, int))(v21 + 100))(
              v21,
              (unsigned __int8)(asic_addr_interval * v16),
              v15);
          }
          while ( v22 > v18 );
        }
        v15 += 3;
      }
      while ( v14 - v15 >= 0 );
    }
    all_created_runtime = (char *)usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  if ( v22 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v22; ++i )
    {
      v7 = *((_DWORD *)v5 + 1);
      v5 += 4;
      (*(void (**)(void))(v7 + 84))();
      all_created_runtime = (char *)usleep(0x2710u);
    }
  }
  v8 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v8 + 16))(a2);
  usleep(0x2710u);
  return 0;
}
