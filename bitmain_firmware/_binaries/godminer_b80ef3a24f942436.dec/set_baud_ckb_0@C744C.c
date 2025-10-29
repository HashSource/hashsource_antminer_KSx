int __fastcall set_baud_ckb_0(int a1, char *a2)
{
  int v2; // r7
  int v3; // r4
  int v4; // r0
  int v5; // r4
  _QWORD v7[2]; // [sp+30h] [bp-1030h] BYREF
  int v8; // [sp+40h] [bp-1020h] BYREF
  _BYTE v9[4096]; // [sp+60h] [bp-1000h] BYREF

  v2 = a1;
  v7[0] = 0;
  v7[1] = 6291457;
  if ( a2 == (char *)&loc_16E360 )
    goto LABEL_24;
  if ( (int)a2 <= (int)&loc_16E360 )
  {
    if ( a2 == "GT$$GT$10into_inner17h8d4dcc209f7b30b6E" )
    {
      v3 = 1584;
      goto LABEL_10;
    }
    if ( (int)a2 > (int)"GT$$GT$10into_inner17h8d4dcc209f7b30b6E" )
    {
      if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
      {
        v3 = 560;
        goto LABEL_10;
      }
    }
    else if ( a2 == (char *)38400 )
    {
      v3 = 20528;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == byte_2FAF08 )
  {
LABEL_23:
    v3 = 48;
    goto LABEL_10;
  }
  if ( (int)a2 <= (int)byte_2FAF08 )
  {
    if ( a2 != (char *)&loc_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v3 = 304;
    goto LABEL_10;
  }
  if ( a2 == (char *)6250000 )
  {
    v3 = 305;
    goto LABEL_9;
  }
  if ( a2 != (char *)12500000 )
  {
LABEL_16:
    v3 = 6704;
    goto LABEL_10;
  }
  v3 = 49;
LABEL_9:
  a1 = (*(int (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  LODWORD(v7[0]) = v3;
  V_LOCK(a1);
  V_INT((int)&v8, "chain", *(int *)(v2 + 248));
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_fuart_cfg_CKB_2042",
    30,
    527,
    40,
    v9);
  v5 = (*(int (__fastcall **)(int, _QWORD *))(v2 + 264))(v2, v7);
  usleep(0x2710u);
  return v5;
}
