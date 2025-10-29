void *machine_runtime_ctrl_rvn_2020()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD v3[30]; // [sp+0h] [bp-78h] BYREF

  memset(&v3[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v3[26] = 1145569280;
    v3[28] = 1065353216;
    v3[0] = sub_A8364;
    v3[22] = 20;
    v3[1] = sub_A8364;
    v3[2] = get_working_voltage_base;
    v3[3] = start_voltage_monitor_base;
    v3[7] = set_voltage_base;
    v3[8] = start_freq_compensate_thread_base;
    v3[9] = calc_freq_compensate_by_temp_base;
    v3[10] = set_baud_base;
    v3[11] = set_frequency_with_voltage_base;
    v3[12] = start_mining_base;
    v3[13] = stop_mining_base;
    v3[14] = reset_mining_base;
    v3[15] = check_asic_num_base;
    v3[16] = check_bringup_temperature_base;
    v3[29] = "/sn/sn";
    v3[19] = 35;
    v3[20] = 9600;
    v3[21] = 9600;
    v3[24] = 1480;
    memcpy(v0, v3, 0x78u);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
