int __fastcall close_one_chip_cores_kas(int *a1, char a2)
{
  int v4; // r0
  void (__fastcall *v5)(int *, _DWORD *); // r4
  char v6; // r3
  _BYTE v8[32]; // [sp+28h] [bp-1024h] BYREF
  _DWORD v9[2]; // [sp+48h] [bp-1004h] BYREF
  __int64 v10; // [sp+50h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)v8, "chain", a1[62]);
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "close_one_chip_cores_kas",
    24,
    724,
    40,
    v9);
  v5 = (void (__fastcall *)(int *, _DWORD *))a1[66];
  v6 = a1[89] * a2;
  v9[1] = 0;
  v10 = 1835008;
  v9[0] = -1069408496;
  BYTE1(v10) = v6;
  v5(a1, v9);
  return 0;
}
