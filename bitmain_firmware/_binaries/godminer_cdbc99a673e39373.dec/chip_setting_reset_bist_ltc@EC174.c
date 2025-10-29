int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r8
  int v8; // r10
  int v9; // r0
  int v10; // r3
  int v11; // r5
  int v12; // r11
  int v13; // r0
  char v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r0
  char v19; // r3
  int v20; // r3
  __int64 v23; // [sp+20h] [bp-1014h] BYREF
  __int64 v24; // [sp+28h] [bp-100Ch]
  _BYTE var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a2;
  v8 = a5;
  V_LOCK(a1);
  v9 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v9);
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
    LOBYTE(v10) = *(_BYTE *)(a1 + 316);
    v23 = 0;
    v24 = 0;
    if ( !a2 )
      v7 = a5;
    LOBYTE(v24) = a2;
    if ( a2 )
    {
      BYTE5(v24) = v10;
      v7 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(a1 + 316);
  v8 = v10 - 1;
  v23 = 0;
  v24 = (unsigned __int8)v7;
  if ( !v7 )
  {
LABEL_13:
    v15 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a3);
    BYTE5(v24) = v10;
    BYTE1(v24) = v15;
    if ( v8 >= v7 )
      goto LABEL_4;
    usleep(0x2710u);
    v16 = *(_DWORD *)(a1 + 464);
    v17 = *(_DWORD *)(a1 + 316);
    v23 = 0;
    v24 = 0;
    LOBYTE(v16) = *(_BYTE *)(v16 + a3);
    BYTE5(v24) = v17;
    BYTE1(v24) = v16;
LABEL_15:
    v12 = 0;
    usleep(0x2710u);
    return v12;
  }
  v7 = 0;
  BYTE5(v24) = v10;
  BYTE1(v24) = 0;
  if ( v8 < 0 )
  {
    usleep(0x2710u);
    v20 = *(_DWORD *)(a1 + 316);
    v23 = 0;
    v24 = 1;
    BYTE5(v24) = v20;
    goto LABEL_15;
  }
LABEL_4:
  v11 = v7;
  do
  {
    LODWORD(v23) = 1024;
    WORD1(v24) = 0;
    BYTE4(v24) = v11;
    HIWORD(v24) = 0;
    v12 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v23);
    if ( v12 )
    {
      V_LOCK(1000);
      v13 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v13);
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
      return v12;
    }
    ++v11;
    usleep(0x3E8u);
  }
  while ( v11 <= v8 );
  usleep(0x2710u);
  v23 = 0;
  v24 = (unsigned __int8)a2;
  if ( a2 )
  {
    BYTE5(v24) = *(_DWORD *)(a1 + 316);
    goto LABEL_20;
  }
  v19 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a3);
  BYTE5(v24) = *(_DWORD *)(a1 + 316);
  BYTE1(v24) = v19;
  if ( v7 > v8 )
    goto LABEL_15;
LABEL_20:
  while ( 1 )
  {
    LODWORD(v23) = 37888;
    WORD1(v24) = 0;
    BYTE4(v24) = v7;
    HIWORD(v24) = 0;
    v12 = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v23);
    if ( v12 )
      break;
    ++v7;
    usleep(0x3E8u);
    if ( v7 > v8 )
      goto LABEL_15;
  }
  V_LOCK(1000);
  v18 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v18);
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
  return v12;
}
