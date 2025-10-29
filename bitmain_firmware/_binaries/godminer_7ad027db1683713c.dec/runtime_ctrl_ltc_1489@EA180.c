void *runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r11
  _QWORD v3[123]; // [sp+10h] [bp-13DCh] BYREF
  char v4[4100]; // [sp+3E8h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "runtime_ctrl_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v4);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[35]) = 14156;
  HIDWORD(v3[43]) = 210;
  LODWORD(v3[44]) = 500;
  LODWORD(v3[37]) = 6517868;
  v3[36] = 0;
  HIDWORD(v3[45]) = sensor_info_ltc_1489;
  v3[46] = qword_2D0D28;
  v3[47] = qword_2D0D30;
  v3[48] = qword_2D0D38;
  v0 = calloc(1u, 0x3D8u);
  LODWORD(v3[0]) = backend_init_base;
  HIDWORD(v3[0]) = reset_base;
  LODWORD(v3[2]) = dhash_mining_start_base;
  HIDWORD(v3[2]) = dhash_mining_stop_base;
  LODWORD(v3[3]) = dhash_mining_reset_base;
  HIDWORD(v3[3]) = backend_exit_base;
  LODWORD(v3[4]) = push_work_base;
  HIDWORD(v3[4]) = async_push_work_base;
  LODWORD(v3[5]) = pop_ans_base;
  HIDWORD(v3[5]) = try_pop_ans_base;
  LODWORD(v3[7]) = softreset_all_chip_ltc;
  HIDWORD(v3[7]) = setup_all_chip_ltc;
  LODWORD(v3[8]) = work_2_packet_ltc;
  HIDWORD(v3[8]) = packet_2_nonce_ltc;
  LODWORD(v3[9]) = check_nonce_ltc;
  HIDWORD(v3[9]) = global_idx_init_ltc;
  LODWORD(v3[10]) = global_idx_free_ltc;
  HIDWORD(v3[10]) = set_baud_ltc;
  LODWORD(v3[11]) = sub_E8698;
  v1 = v0;
  HIDWORD(v3[11]) = sub_E8580;
  LODWORD(v3[12]) = sub_E6898;
  HIDWORD(v3[12]) = sub_E6328;
  LODWORD(v3[13]) = sub_E6330;
  HIDWORD(v3[13]) = sub_E82B4;
  LODWORD(v3[14]) = sub_E7674;
  HIDWORD(v3[14]) = sub_E7ED8;
  LODWORD(v3[15]) = sub_E7EB0;
  LODWORD(v3[16]) = get_chip_status_ltc;
  HIDWORD(v3[16]) = get_theory_hashrate_ltc;
  LODWORD(v3[17]) = get_sale_hashrate_ltc;
  HIDWORD(v3[17]) = get_qualify_hashrate_ltc;
  LODWORD(v3[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(v3[18]) = set_sensor_extern_mode_ltc;
  LODWORD(v3[19]) = read_sensor_temp_local_ltc;
  HIDWORD(v3[19]) = read_sensor_temp_remote_ltc;
  LODWORD(v3[20]) = parameter_update_ltc;
  HIDWORD(v3[20]) = overclock_update_ltc;
  LODWORD(v3[21]) = get_pcba_test_level_ltc;
  HIDWORD(v3[21]) = get_packet_remain_len_ltc;
  LODWORD(v3[23]) = adjust_working_freq_ltc;
  HIDWORD(v3[23]) = sub_E7AE4;
  HIDWORD(v3[25]) = sub_E8C10;
  HIDWORD(v3[26]) = sub_E68B0;
  LODWORD(v3[27]) = top_init_ltc;
  LODWORD(v3[28]) = dhash_start_ltc;
  LODWORD(v3[30]) = set_chipaddr_base;
  HIDWORD(v3[30]) = set_inactive_base;
  LODWORD(v3[31]) = set_chip_reg_ltc;
  HIDWORD(v3[32]) = set_core_enable_ltc;
  LODWORD(v3[33]) = sync_get_status_ltc;
  HIDWORD(v3[33]) = sync_get_chip_reg_ltc;
  HIDWORD(v3[34]) = sync_get_core_reg_ltc;
  v3[38] = 0x100001489LL;
  v3[39] = 0x7500000078LL;
  LODWORD(v3[51]) = 27;
  v3[40] = 0x8000003A8LL;
  HIDWORD(v3[31]) = set_core_reg_ltc;
  HIDWORD(v3[100]) = 216;
  LODWORD(v3[32]) = set_core_reg_ltc;
  HIDWORD(v3[41]) = 2;
  HIDWORD(v3[50]) = 2;
  HIDWORD(v3[62]) = 2;
  v3[101] = 0x400000070LL;
  LODWORD(v3[103]) = 8;
  v3[120] = 949793;
  LODWORD(v3[121]) = 1;
  v3[102] = 0x900000056LL;
  LODWORD(v3[118]) = 1500;
  v3[117] = 0x44D1600042480000LL;
  memcpy(v0, v3, 0x3D8u);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "runtime_ctrl_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "runtime_ctrl_ltc_1489",
    21,
    1060,
    40,
    v4);
  return v1;
}
