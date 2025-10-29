int __fastcall set_reset_rvn(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r2
  void (__fastcall *v4)(int, int *); // r3
  void (__fastcall *v5)(int, int *); // r3
  int v7; // [sp+10h] [bp-1004h] BYREF
  _BYTE v8[12]; // [sp+14h] [bp-1000h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_reset_rvn",
    13,
    196,
    40,
    &v7);
  *(_QWORD *)v8 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v8[4] = 16515073;
  v7 = -1414856447;
  v3(a1, &v7);
  usleep(0x2710u);
  *(_QWORD *)v8 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v8[4] = 4456449;
  v7 = 29;
  v4(a1, &v7);
  usleep(0x2710u);
  *(_QWORD *)v8 = 0;
  v7 = 31;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 264);
  *(_QWORD *)&v8[4] = 4456449;
  v5(a1, &v7);
  usleep(0x2710u);
  *(_DWORD *)v8 = 0;
  *(_QWORD *)&v8[4] = 16515073;
  v7 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v7);
  usleep(0x2710u);
  return 0;
}
