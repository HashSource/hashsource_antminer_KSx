int __fastcall close_one_chip_cores_kas(int *a1, int a2)
{
  void (__fastcall *v4)(int *, _DWORD *); // r4
  char v5; // r3
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  _DWORD v9[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v10; // [sp+50h] [bp-FFCh]

  V_LOCK();
  V_INT((int)v7, "chain", a1[58]);
  logfmt_raw(
    (char *)v9,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "close chip %d's cores",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "close_one_chip_cores_kas",
    24,
    676,
    40,
    v9);
  v4 = (void (__fastcall *)(int *, _DWORD *))a1[62];
  v5 = a1[83] * a2;
  v9[1] = 0;
  v10 = 1835008;
  v9[0] = -1069408496;
  BYTE1(v10) = v5;
  v4(a1, v9);
  return 0;
}
