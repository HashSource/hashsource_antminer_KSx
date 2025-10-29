int __fastcall softreset_all_chip_one_by_one_kas(pthread_mutex_t *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  void (__fastcall *owner)(pthread_mutex_t *, _DWORD *); // r2
  char v7; // r3
  int v8; // r4
  int v10; // [sp+28h] [bp-1024h] BYREF
  _DWORD v11[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v12; // [sp+50h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)&v10, "chain");
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
         187,
         "softreset_all_chip_one_by_one_kas",
         33,
         658,
         40,
         v11);
  if ( a1[13].__lock > 0 )
  {
    v4 = 0;
    do
    {
      V_LOCK(v3);
      v5 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_software_reset_one_asic_KAS_2380",
        44,
        138,
        20,
        v11);
      owner = (void (__fastcall *)(pthread_mutex_t *, _DWORD *))a1[10].__owner;
      v7 = a1[16].__spins * v4;
      v11[1] = 0;
      v11[0] = 3;
      ++v4;
      v12 = 4456448;
      BYTE1(v12) = v7;
      owner(a1, v11);
      send_fake_work_kas(a1);
      v3 = usleep(0x3E8u);
    }
    while ( a1[13].__lock > v4 );
  }
  v8 = 10;
  do
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    send_fake_work_kas(a1);
    --v8;
  }
  while ( v8 );
  sub_DDA18((int)a1, 10, 0);
  sub_DDB20((int)a1, 127);
  return 0;
}
