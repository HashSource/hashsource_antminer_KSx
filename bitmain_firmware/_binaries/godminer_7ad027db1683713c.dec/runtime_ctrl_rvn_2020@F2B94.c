void *runtime_ctrl_rvn_2020()
{
  void *v0; // r0
  void *v1; // r4
  double v3[123]; // [sp+0h] [bp-3DCh] BYREF

  memset(v3, 0, sizeof(v3));
  LODWORD(v3[35]) = 5133906;
  v3[36] = 0.0;
  HIDWORD(v3[43]) = 500;
  LODWORD(v3[44]) = 500;
  LODWORD(v3[37]) = 7239282;
  v0 = calloc(1u, 0x3D8u);
  LODWORD(v3[0]) = backend_init_base;
  HIDWORD(v3[0]) = reset_base;
  LODWORD(v3[1]) = change_kiss99_param_rvn_0;
  HIDWORD(v3[1]) = set_dag_node_num_rvn;
  LODWORD(v3[2]) = dhash_mining_start_rvn;
  HIDWORD(v3[2]) = stop_mining_rvn;
  LODWORD(v3[3]) = recover_mining_rvn;
  HIDWORD(v3[3]) = backend_exit_base;
  LODWORD(v3[4]) = push_work_base;
  HIDWORD(v3[4]) = async_push_work_base;
  LODWORD(v3[5]) = pop_ans_base;
  HIDWORD(v3[5]) = try_pop_ans_base;
  LODWORD(v3[7]) = softreset_all_chip_rvn;
  LODWORD(v3[8]) = work_2_packet_rvn;
  HIDWORD(v3[8]) = packet_2_nonce_rvn;
  LODWORD(v3[9]) = check_nonce_rvn;
  HIDWORD(v3[9]) = global_idx_init_rvn;
  LODWORD(v3[10]) = global_idx_free_rvn;
  v1 = v0;
  HIDWORD(v3[10]) = set_baud_rvn;
  LODWORD(v3[15]) = sub_EBEE0;
  LODWORD(v3[16]) = get_chip_status_rvn;
  HIDWORD(v3[16]) = get_theory_hashrate_rvn;
  LODWORD(v3[17]) = get_sale_hashrate_rvn;
  HIDWORD(v3[17]) = get_qualify_hashrate_rvn;
  LODWORD(v3[18]) = get_qualify_nonce_num_rvn;
  HIDWORD(v3[18]) = set_sensor_extern_mode_rvn;
  LODWORD(v3[19]) = read_sensor_temp_local_rvn;
  HIDWORD(v3[19]) = read_sensor_temp_remote_rvn;
  LODWORD(v3[20]) = parameter_update_rvn;
  HIDWORD(v3[20]) = overclock_update_rvn;
  LODWORD(v3[21]) = get_pcba_test_level_rvn;
  HIDWORD(v3[21]) = get_packet_remain_len_rvn_0;
  HIDWORD(v3[23]) = set_frequency_rvn;
  v3[117] = 8.85443866e20;
  HIDWORD(v3[25]) = sub_ECF18;
  *(_QWORD *)&v3[38] = 0x100002020LL;
  HIDWORD(v3[26]) = read_temperature_rvn;
  LODWORD(v3[27]) = top_init_rvn;
  LODWORD(v3[28]) = dhash_start_rvn;
  LODWORD(v3[30]) = set_chipaddr_base;
  HIDWORD(v3[30]) = set_inactive_base;
  LODWORD(v3[31]) = set_chip_reg_base;
  HIDWORD(v3[31]) = set_core_reg_rvn;
  LODWORD(v3[32]) = set_core_reg_base2;
  HIDWORD(v3[32]) = set_core_enable_base2;
  LODWORD(v3[33]) = sync_get_status_base2;
  HIDWORD(v3[33]) = sync_get_chip_reg_base2;
  LODWORD(v3[34]) = sync_get_dag_node_base;
  HIDWORD(v3[34]) = sync_get_core_reg_base2;
  HIDWORD(v3[45]) = &sensor_rvn_bm2020;
  HIDWORD(v3[58]) = 1;
  *(_QWORD *)&v3[39] = 0x800000008LL;
  HIDWORD(v3[46]) = 8;
  *(_QWORD *)&v3[47] = 0x500000005FLL;
  *(_QWORD *)&v3[48] = 0x3FFFFFFECLL;
  LODWORD(v3[51]) = 9;
  HIDWORD(v3[100]) = 89;
  *(_QWORD *)&v3[101] = 0x800000082LL;
  *(_QWORD *)&v3[102] = 0x2B0000002ELL;
  LODWORD(v3[121]) = 1;
  LODWORD(v3[120]) = &loc_F4240;
  HIDWORD(v3[120]) = 0;
  memcpy(v0, v3, 0x3D8u);
  return v1;
}
