int __fastcall sub_ED5F4(char *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v4; // r7
  int result; // r0
  char v10; // [sp+17h] [bp-1005h] BYREF
  char v11[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = a4;
  *a3 = 0;
  *a2 = -64;
  if ( pic1704_write_iic(*a1, a4) )
  {
    usleep(0x2710u);
    result = pic1704_read_iic(*a1, v4, &v10);
    if ( result )
    {
      *a3 = 1;
      *a2 = v10 + 15;
      return result;
    }
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "fail to read pic temp for chain %d iic_addr %d", *(_DWORD *)a1, a4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_remote_on_pic_RVN",
      46,
      1094,
      20,
      v11);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "pic temp write iic error! chain %d iic_addr %d", *(_DWORD *)a1, a4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_remote_on_pic_RVN",
      46,
      1083,
      20,
      v11);
  }
  return 0;
}
