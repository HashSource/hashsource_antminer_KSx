int __fastcall softreset_all_chip_kas(pthread_mutex_t *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void (__fastcall *lock)(_DWORD, _DWORD); // r3
  _BYTE v8[32]; // [sp+28h] [bp-20h] BYREF
  int v9; // [sp+48h] [bp+0h] BYREF
  _QWORD v10[511]; // [sp+4Ch] [bp+4h]

  V_LOCK(a1);
  V_INT((int)v8, "chain");
  v2 = 10;
  v3 = logfmt_raw((int)&v9, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
         192,
         &unk_290534,
         22,
         629,
         40,
         &v9);
  V_LOCK(v4);
  v5 = logfmt_raw((int)&v9, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_software_reset_KAS_2380",
    35,
    123,
    20,
    &v9);
  v9 = 3;
  v10[0] = 0;
  lock = (void (__fastcall *)(_DWORD, _DWORD))a1[11].__lock;
  *(_QWORD *)((char *)v10 + 4) = 4456449;
  lock(a1, &v9);
  do
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    send_fake_work_kas(a1);
    --v2;
  }
  while ( v2 );
  sub_E5138((int)a1, 10, 0);
  sub_E5240((int)a1, 127);
  return 0;
}
