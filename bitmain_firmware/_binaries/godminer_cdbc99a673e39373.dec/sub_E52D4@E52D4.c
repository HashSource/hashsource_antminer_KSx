int __fastcall sub_E52D4(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int result; // r0
  int v8; // r3
  int v9; // r0
  _BYTE v10[4]; // [sp+14h] [bp-1008h] BYREF
  _BYTE v11[4100]; // [sp+18h] [bp-1004h] BYREF

  *a3 = 0;
  result = tsensor_read(*(_DWORD *)(a1 + 232), a4, 0, v10, 2);
  if ( result == 2 )
  {
    v8 = v10[0];
    *a3 = 1;
    *a2 = v8 + *(unsigned __int8 *)(a1 + 952);
  }
  else
  {
    *a2 = -64;
    V_LOCK(result);
    v9 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_KDA_2110",
      57,
      1147,
      80,
      v11);
    return -1;
  }
  return result;
}
