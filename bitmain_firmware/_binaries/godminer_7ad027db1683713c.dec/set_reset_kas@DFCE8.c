int __fastcall set_reset_kas(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  int v4; // [sp+10h] [bp-1000h] BYREF
  _BYTE v5[12]; // [sp+14h] [bp-FFCh]

  V_LOCK();
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_reset_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "set_reset_kas",
    13,
    124,
    40,
    &v4);
  v4 = 1;
  *(_QWORD *)v5 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v5[4] = 4456449;
  v2(a1, &v4);
  usleep(0x2710u);
  return 0;
}
