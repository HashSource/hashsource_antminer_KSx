int __fastcall softreset_all_chip_kas(pthread_mutex_t *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void (__fastcall *owner)(_DWORD, _DWORD); // r3
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
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
         187,
         &unk_27E53C,
         22,
         629,
         40,
         &v9);
  V_LOCK(v4);
  v5 = logfmt_raw((int)&v9, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_software_reset_KAS_2380",
    35,
    125,
    20,
    &v9);
  v9 = 3;
  v10[0] = 0;
  owner = (void (__fastcall *)(_DWORD, _DWORD))a1[10].__owner;
  *(_QWORD *)((char *)v10 + 4) = 4456449;
  owner(a1, &v9);
  do
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    send_fake_work_kas(a1);
    --v2;
  }
  while ( v2 );
  sub_DDA18((int)a1, 10, 0);
  sub_DDB20((int)a1, 127);
  return 0;
}
