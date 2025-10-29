int __fastcall set_baud_ckb_0(int a1, int a2)
{
  int v4; // r4
  int v5; // r4
  _QWORD v7[2]; // [sp+30h] [bp-1030h] BYREF
  _DWORD v8[7]; // [sp+40h] [bp-1020h] BYREF
  int v9; // [sp+5Ch] [bp-1004h]
  char v10[4096]; // [sp+60h] [bp-1000h] BYREF

  v7[0] = 0;
  v7[1] = 6291457;
  if ( (_UNKNOWN *)a2 == &loc_16E360 )
    goto LABEL_24;
  if ( a2 <= (int)&loc_16E360 )
  {
    if ( (char *)a2 == "portTable18address_by_ordinal17h3e2d497c205148aaE" )
    {
      v4 = 1568;
      goto LABEL_10;
    }
    if ( a2 > (int)"portTable18address_by_ordinal17h3e2d497c205148aaE" )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 544;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v4 = 20512;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v4 = 32;
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
    v4 = 288;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v4 = 289;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v4 = 6688;
    goto LABEL_10;
  }
  v4 = 33;
LABEL_9:
  (*(void (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  LODWORD(v7[0]) = v4;
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "set fuart cfg value %08x/%d",
    v4,
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_fuart_cfg_CKB_2042",
    30,
    486,
    40,
    v10);
  v5 = (*(int (__fastcall **)(int, _QWORD *))(a1 + 248))(a1, v7);
  usleep(0x2710u);
  return v5;
}
