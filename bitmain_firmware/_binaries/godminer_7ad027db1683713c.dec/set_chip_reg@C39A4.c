int __fastcall set_chip_reg(int a1, char a2, char a3, int a4, int a5)
{
  _DWORD v8[2]; // [sp+10h] [bp-1014h] BYREF
  char v9; // [sp+18h] [bp-100Ch]
  char v10; // [sp+19h] [bp-100Bh]
  __int16 v11; // [sp+1Ah] [bp-100Ah]
  int v12; // [sp+1Ch] [bp-1008h]
  char v13[4064]; // [sp+20h] [bp-1004h] BYREF

  v8[1] = 0;
  v8[0] = a5;
  v12 = 0;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set_chip_reg set reg %x data %x", a4, a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "set_chip_reg",
    12,
    314,
    40,
    v13);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v8);
}
