int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  bool v4; // zf
  int v6; // r3
  int v7; // r1
  int v8; // r4
  char v9; // r3
  unsigned int v10; // r2
  int v11; // r0
  unsigned int v12; // r7
  int v13; // r0
  int v14; // r0
  int v15; // r4
  __int64 v17; // [sp+10h] [bp-1014h] BYREF
  __int64 v18; // [sp+18h] [bp-100Ch]
  _BYTE v19[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = a2 == 0;
  v17 = 0;
  v18 = 0;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_DWORD *)(a1 + 480);
  LOBYTE(v18) = a2;
  v7 = 7;
  if ( v4 )
    LOBYTE(v6) = *(_BYTE *)(v6 + a3);
  BYTE1(v18) = v6;
  WORD1(v18) = 8;
  while ( 2 )
  {
    v8 = (unsigned __int8)v7;
    do
    {
      v9 = v8 - 1;
      v10 = (unsigned int)(float)((float)v8 * (float)((float)v7 * v3));
      v11 = v10 - 800;
      if ( v10 - 800 <= 0x640 )
      {
        v12 = v8 | 0xA0000100 | (16 * v7) | ((v10 / 0x19) << 16);
        v13 = sub_26C858(25 * (v10 / 0x19), v7);
        v11 = sub_26C858(v13, v8);
        goto LABEL_13;
      }
      v8 = (unsigned __int8)(v8 - 1);
    }
    while ( v9 );
    if ( --v7 )
      continue;
    break;
  }
  v12 = 0;
LABEL_13:
  LODWORD(v17) = v12;
  V_LOCK(v11);
  v14 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v19);
  v15 = (*(int (__fastcall **)(int, __int64 *))(a1 + 260))(a1, &v17);
  usleep(0x2710u);
  return v15;
}
