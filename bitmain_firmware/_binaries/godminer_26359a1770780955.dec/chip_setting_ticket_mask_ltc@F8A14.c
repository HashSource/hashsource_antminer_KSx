int __fastcall chip_setting_ticket_mask_ltc(_DWORD *a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r3
  void (__fastcall *v6)(_DWORD *, __int64 *); // r3
  int v7; // r3
  int (__fastcall *v8)(_DWORD *, __int64 *); // r3
  int v9; // r0
  int v10; // r3
  int v11; // r9
  int v12; // r0
  int v14; // r4
  __int64 v15; // [sp+10h] [bp-1010h] BYREF
  __int64 v16; // [sp+18h] [bp-1008h]
  _BYTE v17[4096]; // [sp+20h] [bp-1000h] BYREF

  v15 = 0;
  v16 = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v17);
  v5 = a1[84];
  v15 = (unsigned __int16)a2;
  WORD1(v16) = 2;
  BYTE5(v16) = v5;
  LOBYTE(v16) = 1;
  v6 = (void (__fastcall *)(_DWORD *, __int64 *))a1[67];
  BYTE6(v16) = 1;
  v6(a1, &v15);
  usleep(0x3E8u);
  v7 = a1[84];
  LODWORD(v16) = 262145;
  BYTE6(v16) = 1;
  BYTE5(v16) = v7;
  v8 = (int (__fastcall *)(_DWORD *, __int64 *))a1[67];
  BYTE4(v16) = 0;
  LODWORD(v15) = HIWORD(a2);
  v9 = v8(a1, &v15);
  if ( (a2 & 1) != 0 )
    v10 = 0;
  v11 = v9;
  if ( (a2 & 1) != 0 )
  {
    while ( 1 )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
      ++v10;
    }
    v14 = v10 + 17;
  }
  else
  {
    v14 = 16;
  }
  a1[108] = v14;
  V_LOCK(v9);
  v12 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_ticket_mask_ltc",
    28,
    177,
    60,
    v17);
  return v11;
}
