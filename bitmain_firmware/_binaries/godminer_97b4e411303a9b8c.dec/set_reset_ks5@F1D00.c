int __fastcall set_reset_ks5(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r2
  int v5; // [sp+10h] [bp-1000h] BYREF
  _BYTE v6[12]; // [sp+14h] [bp-FFCh]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_reset_ks5",
    13,
    356,
    40,
    &v5);
  v5 = 1;
  *(_QWORD *)v6 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v6[4] = 4456449;
  v3(a1, &v5);
  usleep(0x2710u);
  return 0;
}
