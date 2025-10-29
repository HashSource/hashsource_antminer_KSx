int __fastcall chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  bool v4; // zf
  int v6; // r3
  int v7; // r1
  int v8; // r4
  char v9; // r3
  unsigned int v10; // r2
  float v11; // s17
  unsigned int v12; // r7
  unsigned int v13; // r0
  int v14; // r4
  __int64 v16; // [sp+10h] [bp-1014h] BYREF
  __int64 v17; // [sp+18h] [bp-100Ch]
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  v4 = a2 == 0;
  v16 = 0;
  v17 = 0;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_DWORD *)(a1 + 464);
  LOBYTE(v17) = a2;
  v7 = 7;
  if ( v4 )
    LOBYTE(v6) = *(_BYTE *)(v6 + a3);
  BYTE1(v17) = v6;
  WORD1(v17) = 8;
  while ( 2 )
  {
    v8 = (unsigned __int8)v7;
    do
    {
      v9 = v8 - 1;
      v10 = (unsigned int)(float)((float)v8 * (float)((float)v7 * v3));
      if ( v10 - 800 <= 0x640 )
      {
        v12 = v8 | 0xA0000100 | (16 * v7) | ((v10 / 0x19) << 16);
        v13 = sub_25A970(25 * (v10 / 0x19), v7);
        v11 = (float)(int)sub_25A970(v13, v8);
        goto LABEL_13;
      }
      v8 = (unsigned __int8)(v8 - 1);
    }
    while ( v9 );
    if ( --v7 )
      continue;
    break;
  }
  v11 = 0.0;
  v12 = 0;
LABEL_13:
  LODWORD(v16) = v12;
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v11, v3, v16, v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v18);
  v14 = (*(int (__fastcall **)(int, __int64 *))(a1 + 248))(a1, &v16);
  usleep(0x2710u);
  return v14;
}
