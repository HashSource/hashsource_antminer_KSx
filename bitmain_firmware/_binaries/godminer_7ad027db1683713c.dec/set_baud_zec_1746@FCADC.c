int __fastcall set_baud_zec_1746(int a1, int a2)
{
  int v4; // r8
  int v5; // r4
  _DWORD v7[2]; // [sp+28h] [bp-1030h] BYREF
  __int64 v8; // [sp+30h] [bp-1028h]
  _DWORD v9[7]; // [sp+38h] [bp-1020h] BYREF
  int v10; // [sp+54h] [bp-1004h]
  char v11[4096]; // [sp+58h] [bp-1000h] BYREF

  if ( a2 != 1500000 )
  {
    if ( a2 <= 1500000 )
    {
      if ( (char *)a2 == "portTable18address_by_ordinal17h3e2d497c205148aaE" )
      {
        v4 = 26212;
        goto LABEL_9;
      }
      if ( a2 <= (int)"portTable18address_by_ordinal17h3e2d497c205148aaE" )
      {
        if ( a2 == 38400 )
        {
          v4 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v4 = 31332;
      goto LABEL_9;
    }
    if ( a2 == 3125000 )
      goto LABEL_22;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_16;
LABEL_22:
      v4 = 24676;
      goto LABEL_9;
    }
    if ( a2 != 1562500 )
    {
      if ( (_UNKNOWN *)a2 != &unk_2DC6C0 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v4 = 24932;
LABEL_9:
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "set_misc value %08x/%d", v4, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "set_baud_zec_1746",
    17,
    776,
    60,
    v11);
  v7[0] = v4;
  v7[1] = 0;
  v8 = 1835009;
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "set misc ctrl %08x", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_misc_ctrl_ZEC_1746",
    30,
    218,
    40,
    v11);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v7);
  usleep(0x2710u);
  if ( v5 )
    return 36;
  else
    return 0;
}
