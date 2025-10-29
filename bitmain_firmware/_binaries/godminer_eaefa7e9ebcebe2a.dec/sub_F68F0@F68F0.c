int __fastcall sub_F68F0(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int v4; // r7
  int result; // r0
  int v9; // r0
  int v10; // r0
  char v11; // [sp+17h] [bp-1005h] BYREF
  _BYTE v12[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = a4;
  *a3 = 0;
  *a2 = -64;
  if ( pic1704_write_iic(*(unsigned __int8 *)(a1 + 248), a4) )
  {
    usleep(0x2710u);
    result = pic1704_read_iic(*(unsigned __int8 *)(a1 + 248), v4, &v11);
    if ( result )
    {
      *a3 = 1;
      *a2 = v11;
      return result;
    }
    V_LOCK(0);
    v10 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/./backend/chip_setting.c",
      173,
      "ChipSetting_read_sensor_temp_local_on_pic_LTC_1489",
      50,
      1109,
      20,
      v12);
  }
  else
  {
    V_LOCK(0);
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/./backend/chip_setting.c",
      173,
      "ChipSetting_read_sensor_temp_local_on_pic_LTC_1489",
      50,
      1098,
      20,
      v12);
  }
  return 0;
}
