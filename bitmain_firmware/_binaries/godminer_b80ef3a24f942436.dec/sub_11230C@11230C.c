int __fastcall sub_11230C(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v13; // r0
  int v14; // [sp+34h] [bp-1030h]
  char v15[4]; // [sp+3Ch] [bp-1028h] BYREF
  int v16; // [sp+40h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+60h] [bp-1004h] BYREF

  V_LOCK(a1);
  v8 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_ZEC_1746",
    56,
    1320,
    20,
    v17);
  *a3 = 0;
  v9 = tsensor_read(*(_DWORD *)(a1 + 248), a4, 0, v15, 2);
  v14 = v9;
  if ( v9 == 2 )
  {
    v10 = v15[0];
    *a3 = 1;
    *a2 = v10;
    V_LOCK(2);
    V_INT((int)&v16, "chain", *(int *)(a1 + 248));
    v11 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_ZEC_1746",
      56,
      1332,
      20,
      v17);
  }
  else
  {
    *a2 = -64;
    V_LOCK(v9);
    v13 = logfmt_raw((int)v17, 0x1000u);
    v14 = -1;
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_ZEC_1746",
      56,
      1327,
      80,
      v17);
  }
  return v14;
}
