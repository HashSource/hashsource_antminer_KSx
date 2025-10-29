int __fastcall softreset_all_chip_kas(pthread_mutex_t *a1)
{
  int v2; // r5
  void (__fastcall *owner)(pthread_mutex_t *, int *); // r3
  unsigned int v4; // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  int v10; // [sp+48h] [bp-1004h] BYREF
  int v11; // [sp+4Ch] [bp-1000h]
  __int64 v12; // [sp+50h] [bp-FFCh]
  int v13; // [sp+58h] [bp-FF4h]
  int v14; // [sp+5Ch] [bp-FF0h]
  int v15; // [sp+60h] [bp-FECh]
  int v16; // [sp+64h] [bp-FE8h]
  int v17; // [sp+68h] [bp-FE4h]
  int v18; // [sp+6Ch] [bp-FE0h]
  int v19; // [sp+70h] [bp-FDCh]
  int v20; // [sp+74h] [bp-FD8h]
  int v21; // [sp+78h] [bp-FD4h]
  __int16 v22; // [sp+7Ch] [bp-FD0h]

  V_LOCK();
  V_INT((int)v8, "chain", (int)a1[9].__nusers);
  v2 = 10;
  logfmt_raw((char *)&v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "softreset_all_chip_kas",
    22,
    623,
    40,
    &v10);
  V_LOCK();
  logfmt_raw((char *)&v10, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_software_reset_KAS_2380",
    35,
    125,
    20,
    &v10);
  owner = (void (__fastcall *)(pthread_mutex_t *, int *))a1[10].__owner;
  v10 = 3;
  v11 = 0;
  v12 = 4456449;
  owner(a1, &v10);
  do
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v10 = 53520981;
    v11 = -1996423168;
    v12 = 0x877586EC5D834B9BLL;
    v13 = 739994112;
    v14 = 2023104256;
    v15 = 504402544;
    v16 = 232286627;
    v17 = 1496646687;
    v18 = 295890251;
    v19 = 1890778236;
    v20 = 60442;
    v21 = 0;
    v22 = 13171;
    v4 = pthread_mutex_lock(a1 + 38);
    do
    {
      v5 = dev_ctrl(v4);
      v4 = ((int (__fastcall *)(int))v5[17])(a1[9].__kind);
    }
    while ( v4 <= 0x35 );
    v6 = dev_ctrl(v4);
    ((void (__fastcall *)(int, int *, int))v6[13])(a1[9].__kind, &v10, 54);
    pthread_mutex_unlock(a1 + 38);
    --v2;
  }
  while ( v2 );
  sub_DD2A0((int)a1, 10, 0);
  sub_DD3A8((int)a1, 127);
  return 0;
}
