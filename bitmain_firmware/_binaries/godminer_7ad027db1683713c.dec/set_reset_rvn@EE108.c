int __fastcall set_reset_rvn(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v6; // [sp+10h] [bp-1004h] BYREF
  _BYTE v7[12]; // [sp+14h] [bp-1000h]

  V_LOCK();
  logfmt_raw((char *)&v6, 0x1000u, 0, "%s...", "set_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_reset_rvn",
    13,
    190,
    40,
    &v6);
  *(_QWORD *)v7 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v7[4] = 16515073;
  v6 = -1414856447;
  v2(a1, &v6);
  usleep(0x2710u);
  *(_QWORD *)v7 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v7[4] = 4456449;
  v6 = 29;
  v3(a1, &v6);
  usleep(0x2710u);
  *(_QWORD *)v7 = 0;
  v6 = 31;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 248);
  *(_QWORD *)&v7[4] = 4456449;
  v4(a1, &v6);
  usleep(0x2710u);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)&v7[4] = 16515073;
  v6 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v6);
  usleep(0x2710u);
  return 0;
}
