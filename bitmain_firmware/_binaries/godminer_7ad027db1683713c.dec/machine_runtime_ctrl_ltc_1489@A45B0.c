void *machine_runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r8
  _DWORD v3[30]; // [sp+10h] [bp-1078h] BYREF
  char v4[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "machine_runtime_ctrl_ltc_1489() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    195,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v4);
  memset(&v3[4], 0, 0x64u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = 672832;
    v3[1] = sub_A4444;
    v3[2] = get_working_voltage_base;
    v3[3] = start_voltage_monitor_base;
    v3[7] = set_voltage_base;
    v3[10] = set_baud_base;
    v3[11] = set_frequency_with_voltage_base;
    v3[12] = start_mining_base;
    v3[13] = stop_mining_base;
    v3[14] = reset_mining_base;
    v3[15] = check_asic_num_base;
    v3[16] = check_bringup_temperature_base;
    v3[20] = &stru_1C200;
    v3[21] = &unk_2DC6C0;
    v3[29] = "/config/sn";
    v3[24] = 1680;
    memcpy(v0, v3, 0x78u);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "machine_runtime_ctrl_ltc_1489() out");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      195,
      "machine_runtime_ctrl_ltc_1489",
      29,
      69,
      40,
      v4);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
