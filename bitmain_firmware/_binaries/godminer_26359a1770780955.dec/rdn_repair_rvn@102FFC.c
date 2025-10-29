int __fastcall rdn_repair_rvn(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // t1
  _BYTE v9[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v4 = a2 - 4;
  v5 = logfmt_raw((int)v9, 0x1000u);
  v6 = a2 + 204;
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "rdn_repair_rvn",
    14,
    3312,
    40,
    v9);
  sub_F95FC(a1, 222, 270532609);
  usleep(0x2710u);
  do
  {
    v7 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    sub_F95FC(a1, 223, v7);
  }
  while ( v4 != v6 );
  usleep(0x2710u);
  sub_F95FC(a1, 222, 0);
  return 0;
}
