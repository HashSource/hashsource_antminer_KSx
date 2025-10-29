int __fastcall softreset_all_chip_kas(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void (__fastcall *v6)(_DWORD, _DWORD); // r3
  _BYTE v8[32]; // [sp+28h] [bp-20h] BYREF
  int v9; // [sp+48h] [bp+0h] BYREF
  _QWORD v10[511]; // [sp+4Ch] [bp+4h]

  V_LOCK(a1);
  V_INT((int)v8, "chain", *(int *)(a1 + 248));
  v2 = 10;
  v3 = logfmt_raw((int)&v9, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
         187,
         &unk_29C6E0,
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
    123,
    20,
    &v9);
  v9 = 3;
  v10[0] = 0;
  v6 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 264);
  *(_QWORD *)((char *)v10 + 4) = 4456449;
  v6(a1, &v9);
  do
  {
    usleep((__useconds_t)&elf_hash_chain[4398]);
    send_fake_work_kas(a1);
    --v2;
  }
  while ( v2 );
  sub_E9D38(a1, 10, 0);
  sub_E9E40(a1, 127);
  return 0;
}
