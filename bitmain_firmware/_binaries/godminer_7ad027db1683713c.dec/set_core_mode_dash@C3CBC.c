int __fastcall set_core_mode_dash(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-1014h]
  int v6; // [sp+10h] [bp-1010h] BYREF
  char v7; // [sp+18h] [bp-1008h]
  char v8; // [sp+19h] [bp-1007h]
  __int16 v9; // [sp+1Ah] [bp-1006h]
  char v10; // [sp+1Ch] [bp-1004h]
  char v11; // [sp+1Dh] [bp-1003h]
  char v12[4096]; // [sp+20h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "%s core reg %02x data %d", "set_core_mode_dash", 1, a2, v5, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "set_core_mode_dash",
    18,
    377,
    20,
    v12);
  v7 = 1;
  v9 = 1;
  v8 = 0;
  v6 = a2;
  v10 = -1;
  v11 = 12;
  return (*(int (__fastcall **)(int, int *))(a1 + 252))(a1, &v6);
}
