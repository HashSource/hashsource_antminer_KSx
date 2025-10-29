int __fastcall open_cores_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "open_cores_rvn",
    14,
    1044,
    20,
    v4);
  sub_F9B94(a1, 160, 127);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
