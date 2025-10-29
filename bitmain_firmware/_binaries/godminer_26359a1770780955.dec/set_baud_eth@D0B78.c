int __fastcall set_baud_eth(int a1, char *a2)
{
  int v3; // r8
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD v9[2]; // [sp+28h] [bp-1050h] BYREF
  __int64 v10; // [sp+30h] [bp-1048h]
  _BYTE v11[32]; // [sp+38h] [bp-1040h] BYREF
  int v12; // [sp+58h] [bp-1020h] BYREF
  _BYTE v13[4096]; // [sp+78h] [bp-1000h] BYREF

  if ( a2 == (_BYTE *)&loc_FE500 + 2 )
    goto LABEL_17;
  if ( (int)a2 > 1041666 )
  {
    if ( a2 == (char *)&loc_17D784 )
      goto LABEL_18;
    if ( (int)a2 > 1562500 )
    {
      if ( a2 == (char *)3000000 || a2 == byte_2FAF08 )
      {
        v3 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == (char *)&loc_16E360 )
    {
LABEL_18:
      v3 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v3 = -65510;
    goto LABEL_8;
  }
  if ( a2 == "layInt$GT$6to_u3217he79312027111cf6fE" )
  {
    v3 = -65530;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_E1000 )
  {
LABEL_17:
    v3 = -65534;
    goto LABEL_8;
  }
  if ( a2 != (char *)38400 )
    goto LABEL_10;
  v3 = -65456;
LABEL_8:
  V_LOCK(a1);
  V_INT((int)v11, "chain");
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
         192,
         "set_baud_eth",
         12,
         1211,
         60,
         v13);
  v9[0] = v3;
  v9[1] = 0;
  v10 = 3145729;
  V_LOCK(v5);
  V_INT((int)&v12, "chain");
  v6 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_misc_ctrl_ETH",
    25,
    229,
    40,
    v13);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v9);
  usleep(0x2710u);
  return v7;
}
