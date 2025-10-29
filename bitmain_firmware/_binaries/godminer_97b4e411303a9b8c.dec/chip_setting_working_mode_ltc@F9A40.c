int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, char a5, unsigned __int8 a6)
{
  int v10; // r0
  char v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r5
  int v17; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r0
  __int64 v22; // [sp+18h] [bp-1010h] BYREF
  __int64 v23; // [sp+20h] [bp-1008h]
  _BYTE var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK(a1);
  v10 = logfmt_raw((int)var1000, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          197,
          "chip_setting_working_mode_ltc",
          29,
          304,
          20,
          var1000);
  if ( a4 )
  {
    v13 = *(_DWORD *)(a1 + 336);
    if ( a2 )
      v14 = 0;
    else
      v14 = *(_DWORD *)(a1 + 488);
    v22 = 0;
    v23 = (unsigned __int8)a2;
    if ( !a2 )
      LOBYTE(v14) = *(_BYTE *)(v14 + a3);
    BYTE5(v23) = v13;
    BYTE4(v23) = a5;
    BYTE1(v23) = v14;
    BYTE6(v23) = 1;
    LODWORD(v22) = a6 | 0x400;
    v15 = (*(int (__fastcall **)(int, __int64 *))(a1 + 268))(a1, &v22);
    v16 = v15;
    if ( v15 )
    {
      V_LOCK(v15);
      v17 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        197,
        "chip_setting_working_mode_ltc",
        29,
        321,
        100,
        var1000);
      return v16;
    }
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 336);
    if ( a2 )
      v11 = 0;
    else
      v12 = *(_DWORD *)(a1 + 488);
    v22 = 0;
    v23 = (unsigned __int8)a2;
    if ( !a2 )
      v11 = *(_BYTE *)(v12 + a3);
    BYTE4(v23) = a5;
    *(_WORD *)((char *)&v23 + 5) = (unsigned __int8)v19;
    BYTE1(v23) = v11;
    WORD1(v23) = 0;
    HIBYTE(v23) = 0;
    LODWORD(v22) = a6 | 0x400;
    v20 = (*(int (__fastcall **)(int, __int64 *))(a1 + 268))(a1, &v22);
    v16 = v20;
    if ( v20 )
    {
      V_LOCK(v20);
      v21 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        197,
        "chip_setting_working_mode_ltc",
        29,
        344,
        100,
        var1000);
      return v16;
    }
  }
  usleep(0x3E8u);
  return v16;
}
