int __fastcall chip_setting_misc_ltc(int a1, char *a2)
{
  int v3; // r3
  int v4; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  __int64 v7; // [sp+18h] [bp-100Ch]
  _BYTE v8[4100]; // [sp+20h] [bp-1004h] BYREF

  v6[1] = 0;
  v7 = 1572865;
  if ( a2 == (char *)&loc_16E360 )
    goto LABEL_21;
  if ( (int)a2 > 1500000 )
  {
    if ( a2 == byte_2FAF08 )
      goto LABEL_19;
    if ( (int)a2 > (int)byte_2FAF08 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != (char *)&loc_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_13;
LABEL_19:
      v3 = 117465329;
      goto LABEL_8;
    }
LABEL_21:
    v3 = 117465585;
    goto LABEL_8;
  }
  if ( a2 == "Iterator$GT$9size_hint17hba2716e2307e4211E" )
  {
    v3 = 117466865;
    goto LABEL_8;
  }
  if ( (int)a2 > (int)"Iterator$GT$9size_hint17hba2716e2307e4211E" )
  {
    if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
    {
      v3 = 117465841;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != (char *)38400 )
  {
LABEL_13:
    v3 = 117471985;
    goto LABEL_8;
  }
  v3 = 117469425;
LABEL_8:
  v6[0] = v3;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    197,
    "chip_setting_misc_ltc",
    21,
    98,
    60,
    v8);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
}
