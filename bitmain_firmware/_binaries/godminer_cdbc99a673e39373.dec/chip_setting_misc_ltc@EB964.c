int __fastcall chip_setting_misc_ltc(int a1, int a2)
{
  int v3; // r3
  int v4; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  __int64 v7; // [sp+18h] [bp-100Ch]
  _BYTE v8[4100]; // [sp+20h] [bp-1004h] BYREF

  v6[1] = 0;
  v7 = 1572865;
  if ( a2 == 1500000 )
    goto LABEL_21;
  if ( a2 > 1500000 )
  {
    if ( a2 == 3125000 )
      goto LABEL_19;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != 1562500 )
    {
      if ( (_UNKNOWN *)a2 != &unk_2DC6C0 )
        goto LABEL_13;
LABEL_19:
      v3 = 117465329;
      goto LABEL_8;
    }
LABEL_21:
    v3 = 117465585;
    goto LABEL_8;
  }
  if ( (char *)a2 == "r_alloc" )
  {
    v3 = 117466865;
    goto LABEL_8;
  }
  if ( a2 > (int)"r_alloc" )
  {
    if ( a2 == 921600 || a2 == 1041666 )
    {
      v3 = 117465841;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != 38400 )
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    192,
    "chip_setting_misc_ltc",
    21,
    98,
    60,
    v8);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v6);
}
