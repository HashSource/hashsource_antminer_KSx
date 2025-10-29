int __fastcall set_baud_eth(int a1, char *a2)
{
  int v4; // r8
  int v5; // r4
  _DWORD v7[2]; // [sp+28h] [bp-1050h] BYREF
  __int64 v8; // [sp+30h] [bp-1048h]
  _DWORD v9[7]; // [sp+38h] [bp-1040h] BYREF
  int v10; // [sp+54h] [bp-1024h]
  _DWORD v11[7]; // [sp+58h] [bp-1020h] BYREF
  int v12; // [sp+74h] [bp-1004h]
  char v13[4096]; // [sp+78h] [bp-1000h] BYREF

  if ( a2 == (_BYTE *)&loc_FE500 + 2 )
    goto LABEL_17;
  if ( (int)a2 > 1041666 )
  {
    if ( a2 == (char *)&loc_17D784 )
      goto LABEL_18;
    if ( (int)a2 > 1562500 )
    {
      if ( a2 == (char *)&unk_2DC6C0 || a2 == (char *)3125000 )
      {
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == (char *)&loc_16E360 )
    {
LABEL_18:
      v4 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v4 = -65510;
    goto LABEL_8;
  }
  if ( a2 == "portTable18address_by_ordinal17h3e2d497c205148aaE" )
  {
    v4 = -65530;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_E1000 )
  {
LABEL_17:
    v4 = -65534;
    goto LABEL_8;
  }
  if ( a2 != (char *)38400 )
    goto LABEL_10;
  v4 = -65456;
LABEL_8:
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(v13, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "set baudrate to %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "set_baud_eth",
    12,
    1189,
    60,
    v13);
  v7[0] = v4;
  v7[1] = 0;
  v8 = 3145729;
  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_misc_ctrl_ETH",
    25,
    218,
    40,
    v13);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v7);
  usleep(0x2710u);
  return v5;
}
