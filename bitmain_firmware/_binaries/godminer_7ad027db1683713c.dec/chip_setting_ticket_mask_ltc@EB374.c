int __fastcall chip_setting_ticket_mask_ltc(_DWORD *a1, unsigned int a2)
{
  int v4; // r3
  void (__fastcall *v5)(_DWORD *, _DWORD *); // r3
  int v6; // r3
  int (__fastcall *v7)(_DWORD *, _DWORD *); // r3
  int v8; // r0
  int v9; // r3
  int v10; // r9
  int v12; // r4
  int v13; // [sp+Ch] [bp-1014h]
  _DWORD v14[2]; // [sp+10h] [bp-1010h] BYREF
  char v15; // [sp+18h] [bp-1008h]
  char v16; // [sp+19h] [bp-1007h]
  __int16 v17; // [sp+1Ah] [bp-1006h]
  char v18; // [sp+1Ch] [bp-1004h]
  char v19; // [sp+1Dh] [bp-1003h]
  char v20; // [sp+1Eh] [bp-1002h]
  char v21[4096]; // [sp+20h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "ticket_mask %s reg %02x tm %08x", "chip_setting_ticket_mask_ltc", 2, a2, v13, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v21);
  v4 = a1[79];
  v14[0] = (unsigned __int16)a2;
  v17 = 2;
  v19 = v4;
  v15 = 1;
  v5 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[63];
  v20 = 1;
  v16 = 0;
  v18 = 0;
  v5(a1, v14);
  usleep(0x3E8u);
  v6 = a1[79];
  v15 = 1;
  v20 = 1;
  v19 = v6;
  v7 = (int (__fastcall *)(_DWORD *, _DWORD *))a1[63];
  v16 = 0;
  v18 = 0;
  v17 = 4;
  v14[0] = HIWORD(a2);
  v8 = v7(a1, v14);
  if ( (a2 & 1) != 0 )
    v9 = 0;
  v10 = v8;
  if ( (a2 & 1) != 0 )
  {
    while ( 1 )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
      ++v9;
    }
    v12 = v9 + 17;
  }
  else
  {
    v12 = 16;
  }
  a1[102] = v12;
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "cal mask %d", v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_ticket_mask_ltc",
    28,
    177,
    60,
    v21);
  return v10;
}
