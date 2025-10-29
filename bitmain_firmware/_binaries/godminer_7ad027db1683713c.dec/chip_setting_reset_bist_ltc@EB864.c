int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r8
  int v8; // r10
  int v9; // r3
  int v10; // r5
  int v11; // r11
  char v13; // r2
  int v14; // r3
  int v15; // r2
  char v16; // r3
  int v17; // r3
  __int64 v20; // [sp+20h] [bp-1014h] BYREF
  __int64 v21; // [sp+28h] [bp-100Ch]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a2;
  v8 = a5;
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_reset_bist_ltc",
    27,
    242,
    40,
    var1004);
  if ( !a4 )
  {
    LOBYTE(v9) = *(_BYTE *)(a1 + 316);
    v20 = 0;
    v21 = 0;
    if ( !a2 )
      v7 = a5;
    LOBYTE(v21) = a2;
    if ( a2 )
    {
      BYTE5(v21) = v9;
      v7 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 316);
  v8 = v9 - 1;
  v20 = 0;
  v21 = (unsigned __int8)v7;
  if ( !v7 )
  {
LABEL_13:
    v13 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a3);
    BYTE5(v21) = v9;
    BYTE1(v21) = v13;
    if ( v8 >= v7 )
      goto LABEL_4;
    usleep(0x2710u);
    v14 = *(_DWORD *)(a1 + 464);
    v15 = *(_DWORD *)(a1 + 316);
    v20 = 0;
    v21 = 0;
    LOBYTE(v14) = *(_BYTE *)(v14 + a3);
    BYTE5(v21) = v15;
    BYTE1(v21) = v14;
LABEL_15:
    v11 = 0;
    usleep(0x2710u);
    return v11;
  }
  v7 = 0;
  BYTE5(v21) = v9;
  BYTE1(v21) = 0;
  if ( v8 < 0 )
  {
    usleep(0x2710u);
    v17 = *(_DWORD *)(a1 + 316);
    v20 = 0;
    v21 = 1;
    BYTE5(v21) = v17;
    goto LABEL_15;
  }
LABEL_4:
  v10 = v7;
  do
  {
    LODWORD(v20) = 1024;
    WORD1(v21) = 0;
    BYTE4(v21) = v10;
    HIWORD(v21) = 0;
    v11 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v20);
    if ( v11 )
    {
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", WORD1(v21), v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        192,
        "chip_setting_reset_bist_ltc",
        27,
        267,
        100,
        var1004);
      return v11;
    }
    ++v10;
    usleep(0x3E8u);
  }
  while ( v10 <= v8 );
  usleep(0x2710u);
  v20 = 0;
  v21 = (unsigned __int8)a2;
  if ( a2 )
  {
    BYTE5(v21) = *(_DWORD *)(a1 + 316);
    goto LABEL_20;
  }
  v16 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a3);
  BYTE5(v21) = *(_DWORD *)(a1 + 316);
  BYTE1(v21) = v16;
  if ( v7 > v8 )
    goto LABEL_15;
LABEL_20:
  while ( 1 )
  {
    LODWORD(v20) = 37888;
    WORD1(v21) = 0;
    BYTE4(v21) = v7;
    HIWORD(v21) = 0;
    v11 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v20);
    if ( v11 )
      break;
    ++v7;
    usleep(0x3E8u);
    if ( v7 > v8 )
      goto LABEL_15;
  }
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", WORD1(v21), v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_reset_bist_ltc",
    27,
    290,
    100,
    var1004);
  return v11;
}
