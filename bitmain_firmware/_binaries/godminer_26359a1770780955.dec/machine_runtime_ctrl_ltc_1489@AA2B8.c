void *__fastcall machine_runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r0
  void *v3; // r8
  void *v4; // r0
  int v5; // r0
  _DWORD v7[31]; // [sp+14h] [bp-107Ch] BYREF
  _BYTE v8[4096]; // [sp+90h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    200,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v8);
  memset(&v7[4], 0, 0x68u);
  v2 = calloc(1u, 0x7Cu);
  v3 = v2;
  if ( v2 )
  {
    v7[0] = 696648;
    v7[1] = sub_AA14C;
    v7[2] = get_working_voltage_base;
    v7[3] = start_voltage_monitor_base;
    v7[7] = set_voltage_base;
    v7[8] = start_freq_compensate_thread_base;
    v7[9] = calc_freq_compensate_by_temp_base;
    v7[10] = set_baud_base;
    v7[11] = set_frequency_with_voltage_base;
    v7[12] = start_mining_base;
    v7[14] = stop_mining_base;
    v7[15] = reset_mining_base;
    v7[16] = check_asic_num_base;
    v7[17] = check_bringup_temperature_base;
    v7[21] = &stru_1C200;
    v7[22] = 3000000;
    v7[30] = "/config/sn";
    v7[25] = 1680;
    v4 = memcpy(v2, v7, 0x7Cu);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      200,
      "machine_runtime_ctrl_ltc_1489",
      29,
      71,
      40,
      v8);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v3;
}
