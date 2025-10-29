int __fastcall set_chip_reg(int a1, char a2, char a3, __int16 a4, int a5)
{
  int v6; // r0
  _DWORD v8[2]; // [sp+10h] [bp-1014h] BYREF
  char v9; // [sp+18h] [bp-100Ch]
  char v10; // [sp+19h] [bp-100Bh]
  __int16 v11; // [sp+1Ah] [bp-100Ah]
  int v12; // [sp+1Ch] [bp-1008h]
  _BYTE v13[4064]; // [sp+20h] [bp-1004h] BYREF

  v8[1] = 0;
  v8[0] = a5;
  v12 = 0;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  V_LOCK(a1);
  v6 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v6);
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
