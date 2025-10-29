int __fastcall set_core_reg(int a1, char a2, __int16 a3, int a4)
{
  int v8; // r0
  _DWORD v10[2]; // [sp+10h] [bp-1010h] BYREF
  char v11; // [sp+18h] [bp-1008h]
  char v12; // [sp+19h] [bp-1007h]
  __int16 v13; // [sp+1Ah] [bp-1006h]
  char v14; // [sp+1Ch] [bp-1004h]
  char v15; // [sp+1Dh] [bp-1003h]
  __int16 v16; // [sp+1Eh] [bp-1002h]
  _BYTE v17[4096]; // [sp+20h] [bp-1000h] BYREF

  v10[1] = 0;
  v16 = 0;
  V_LOCK(a1);
  v8 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
    194,
    "set_core_reg",
    0xCu,
    344,
    20,
    v17);
  v14 = a2;
  v13 = a3;
  v10[0] = a4;
  v12 = 0;
  v15 = 0xCu;
  v11 = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v10);
}
