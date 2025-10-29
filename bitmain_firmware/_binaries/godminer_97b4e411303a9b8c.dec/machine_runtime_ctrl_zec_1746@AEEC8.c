void *machine_runtime_ctrl_zec_1746()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD src[31]; // [sp+4h] [bp-7Ch] BYREF

  memset(&src[4], 0, 0x64u);
  v0 = calloc(1u, 0x7Cu);
  v1 = v0;
  if ( v0 )
  {
    src[27] = 1147207680;
    src[29] = 1065353216;
    src[0] = sub_AE67C;
    src[1] = sub_AEE70;
    src[2] = get_working_voltage_base;
    src[3] = start_voltage_monitor_base;
    src[6] = calc_startup_fan_pwm_base;
    src[7] = sub_AEDD0;
    src[8] = start_freq_compensate_thread_base;
    src[9] = calc_freq_compensate_by_temp_base;
    src[10] = set_baud_base;
    src[11] = set_frequency_with_voltage_zec;
    src[12] = start_mining_base;
    src[14] = stop_mining_base;
    src[15] = reset_mining_base;
    src[16] = check_asic_num_base;
    src[17] = check_bringup_temperature_base;
    src[21] = &stru_1C1F4.st_info;
    src[22] = 3000000;
    src[26] = "ore..iter..traits..iterator..Iterator$GT$4last17hc978315af0f81255E";
    src[30] = "/config/sn";
    src[20] = 255;
    src[23] = 22;
    src[25] = 1400;
    memcpy(v0, src, 0x7Cu);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
