void *machine_runtime_ctrl_kas_2380()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD src[31]; // [sp+4h] [bp-7Ch] BYREF

  memset(&src[4], 0, 0x64u);
  v0 = calloc(1u, 0x7Cu);
  v1 = v0;
  if ( v0 )
  {
    src[27] = 1147617280;
    src[29] = 1065353216;
    src[0] = sub_A8048;
    src[1] = sub_A822C;
    src[2] = get_working_voltage_base;
    src[3] = start_voltage_monitor_base;
    src[6] = 692092;
    src[7] = set_voltage_base;
    src[8] = start_freq_compensate_thread_base;
    src[9] = 688448;
    src[10] = set_baud_base;
    src[11] = set_frequency_with_voltage_kas;
    src[12] = start_mining_kas;
    src[14] = stop_mining_base;
    src[15] = reset_mining_base;
    src[16] = check_asic_num_base;
    src[17] = check_bringup_temperature_base;
    src[21] = &stru_1C200;
    src[22] = 1500000;
    src[26] = "u20$core..fmt..Debug$GT$3fmt17h0889c43153a0c703E";
    src[30] = "/config/sn";
    src[20] = 35;
    src[23] = 20;
    src[25] = 1700;
    memcpy(v0, src, 0x7Cu);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
