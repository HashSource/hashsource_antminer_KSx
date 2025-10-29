int __fastcall sub_12397C(int a1, int a2, unsigned int a3, void *a4)
{
  int v4; // r4
  int flash; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _BYTE v10[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 == 51 )
  {
    v8 = pic1704_write_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    v4 = v8;
    if ( v8 == 1 )
      return v4;
    V_LOCK(v8);
    v9 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
      185,
      "pic_operation_to_hal",
      20,
      551,
      100,
      v10);
  }
  else
  {
    if ( a2 != 52 )
      return -1;
    flash = pic1704_read_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    v4 = flash;
    if ( flash == 1 )
      return v4;
    V_LOCK(flash);
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/platform_device_hal.c",
      185,
      "pic_operation_to_hal",
      20,
      559,
      100,
      v10);
  }
  return v4;
}
