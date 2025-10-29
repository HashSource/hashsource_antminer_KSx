int __fastcall set_core_reg(int a1, char a2, int a3, int a4)
{
  int v9; // [sp+Ch] [bp-1014h]
  int v10; // [sp+10h] [bp-1010h] BYREF
  char v11; // [sp+18h] [bp-1008h]
  char v12; // [sp+19h] [bp-1007h]
  __int16 v13; // [sp+1Ah] [bp-1006h]
  char v14; // [sp+1Ch] [bp-1004h]
  char v15; // [sp+1Dh] [bp-1003h]
  char v16[4096]; // [sp+20h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "%s: regaddr %02x data %d", "set_core_reg", a3, a4, v9, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "set_core_reg",
    0xCu,
    344,
    20,
    v16);
  v14 = a2;
  v13 = a3;
  v10 = a4;
  v12 = 0;
  v15 = 0xCu;
  v11 = 1;
  return (*(int (__fastcall **)(int, int *))(a1 + 252))(a1, &v10);
}
