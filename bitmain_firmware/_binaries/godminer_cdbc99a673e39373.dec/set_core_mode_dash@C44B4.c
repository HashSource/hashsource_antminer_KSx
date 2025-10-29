int __fastcall set_core_mode_dash(int a1, int a2)
{
  int v4; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1010h] BYREF
  char v7; // [sp+18h] [bp-1008h]
  char v8; // [sp+19h] [bp-1007h]
  __int16 v9; // [sp+1Ah] [bp-1006h]
  char v10; // [sp+1Ch] [bp-1004h]
  char v11; // [sp+1Dh] [bp-1003h]
  __int16 v12; // [sp+1Eh] [bp-1002h]
  _BYTE v13[4096]; // [sp+20h] [bp-1000h] BYREF

  v6[1] = 0;
  v12 = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "set_core_mode_dash",
    18,
    377,
    20,
    v13);
  v7 = 1;
  v9 = 1;
  v8 = 0;
  v6[0] = a2;
  v10 = -1;
  v11 = 12;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 252))(a1, v6);
}
