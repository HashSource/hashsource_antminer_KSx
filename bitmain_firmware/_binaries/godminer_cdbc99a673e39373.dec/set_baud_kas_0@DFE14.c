int __fastcall set_baud_kas_0(int a1, int a2)
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
  if ( (_UNKNOWN *)a2 == &loc_16E360 )
    goto LABEL_24;
  if ( a2 <= (int)&loc_16E360 )
  {
    if ( (char *)a2 == "r_alloc" )
    {
      v3 = 1536;
      goto LABEL_10;
    }
    if ( a2 > (int)"r_alloc" )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v3 = 512;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v3 = 20480;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v3 = 0;
    goto LABEL_10;
  }
  if ( a2 <= 3125000 )
  {
    if ( a2 != 1562500 )
    {
      if ( (_UNKNOWN *)a2 != &unk_2DC6C0 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v3 = 256;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v3 = 257;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v3 = 6656;
    goto LABEL_10;
  }
  v3 = 1;
LABEL_9:
  a1 = (*(int (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  LODWORD(v7[0]) = v3;
  V_LOCK(a1);
  V_INT((int)&v8, "chain");
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_fuart_cfg_KAS_2380",
    30,
    499,
    40,
    v9);
  v5 = (*(int (__fastcall **)(int, _QWORD *))(v2 + 248))(v2, v7);
  usleep(0x2710u);
  return v5;
}
