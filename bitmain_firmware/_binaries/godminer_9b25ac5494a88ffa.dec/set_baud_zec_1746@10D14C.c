int __fastcall set_baud_zec_1746(int a1, char *a2)
{
  int v3; // r8
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD v9[2]; // [sp+28h] [bp-1030h] BYREF
  __int64 v10; // [sp+30h] [bp-1028h]
  int v11; // [sp+38h] [bp-1020h] BYREF
  _BYTE v12[4096]; // [sp+58h] [bp-1000h] BYREF

  if ( a2 != (char *)&loc_16E360 )
  {
    if ( (int)a2 <= 1500000 )
    {
      if ( a2 == ".ChildStdin$u20$as$u20$std..io..Write$GT$14write_vectored17h9d993f7a70b80f5cE" )
      {
        v3 = 26212;
        goto LABEL_9;
      }
      if ( (int)a2 <= (int)".ChildStdin$u20$as$u20$std..io..Write$GT$14write_vectored17h9d993f7a70b80f5cE" )
      {
        if ( a2 == (char *)38400 )
        {
          v3 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
      {
        v3 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v3 = 31332;
      goto LABEL_9;
    }
    if ( a2 == byte_2FAF08 )
      goto LABEL_22;
    if ( (int)a2 > (int)byte_2FAF08 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_16;
LABEL_22:
      v3 = 24676;
      goto LABEL_9;
    }
    if ( a2 != (char *)&loc_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v3 = 24932;
LABEL_9:
  V_LOCK(a1);
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_zec_1746/backend_zec_1746.c",
         192,
         "set_baud_zec_1746",
         17,
         776,
         60,
         v12);
  v9[0] = v3;
  v9[1] = 0;
  v10 = 1835009;
  V_LOCK(v5);
  V_INT((int)&v11, "chain");
  v6 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_misc_ctrl_ZEC_1746",
    30,
    229,
    40,
    v12);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 260))(a1, v9);
  usleep(0x2710u);
  if ( v7 )
    return 36;
  else
    return 0;
}
