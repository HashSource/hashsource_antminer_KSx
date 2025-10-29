int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  char v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v16; // r2
  __int64 v17; // [sp+18h] [bp-1010h] BYREF
  __int64 v18; // [sp+20h] [bp-1008h]
  char var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(var1000, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          192,
          "chip_setting_working_mode_ltc",
          29,
          304,
          20,
          var1000);
  if ( a4 )
  {
    v12 = *(_DWORD *)(a1 + 316);
    if ( a2 )
      v13 = 0;
    else
      v13 = *(_DWORD *)(a1 + 464);
    v17 = 0;
    v18 = (unsigned __int8)a2;
    if ( !a2 )
      LOBYTE(v13) = *(_BYTE *)(v13 + a3);
    BYTE5(v18) = v12;
    BYTE4(v18) = a5;
    BYTE1(v18) = v13;
    BYTE6(v18) = 1;
    LODWORD(v17) = a6 | 0x400;
    v14 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v17);
    if ( v14 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v18,
        BYTE1(v18),
        WORD1(v18));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        192,
        "chip_setting_working_mode_ltc",
        29,
        321,
        100,
        var1000);
      return v14;
    }
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 316);
    if ( a2 )
      v10 = 0;
    else
      v11 = *(_DWORD *)(a1 + 464);
    v17 = 0;
    v18 = (unsigned __int8)a2;
    if ( !a2 )
      v10 = *(_BYTE *)(v11 + a3);
    BYTE4(v18) = a5;
    *(_WORD *)((char *)&v18 + 5) = (unsigned __int8)v16;
    BYTE1(v18) = v10;
    WORD1(v18) = 0;
    HIBYTE(v18) = 0;
    LODWORD(v17) = a6 | 0x400;
    v14 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v17);
    if ( v14 )
    {
      V_LOCK();
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        "%s failed, chip_all %d chip_addr %02x reg:%02x, core_id:%d",
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v18,
        BYTE1(v18),
        WORD1(v18),
        a5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        192,
        "chip_setting_working_mode_ltc",
        29,
        344,
        100,
        var1000);
      return v14;
    }
  }
  usleep(0x3E8u);
  return v14;
}
