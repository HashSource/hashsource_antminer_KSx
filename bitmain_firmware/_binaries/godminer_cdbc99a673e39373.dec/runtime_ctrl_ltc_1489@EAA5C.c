void *__fastcall runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r9
  void *v3; // r0
  int v4; // r0
  _QWORD v6[141]; // [sp+18h] [bp-146Ch] BYREF
  _BYTE v7[4100]; // [sp+480h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v7);
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = backend_init_base;
  HIDWORD(v6[0]) = reset_base;
  LODWORD(v6[2]) = dhash_mining_start_base;
  HIDWORD(v6[2]) = dhash_mining_stop_base;
  LODWORD(v6[3]) = dhash_mining_reset_base;
  HIDWORD(v6[3]) = backend_exit_base;
  LODWORD(v6[4]) = push_work_base;
  HIDWORD(v6[4]) = async_push_work_base;
  LODWORD(v6[5]) = pop_ans_base;
  HIDWORD(v6[5]) = try_pop_ans_base;
  LODWORD(v6[7]) = softreset_all_chip_ltc;
  HIDWORD(v6[7]) = setup_all_chip_ltc;
  LODWORD(v6[8]) = work_2_packet_ltc;
  HIDWORD(v6[8]) = packet_2_nonce_ltc;
  LODWORD(v6[9]) = check_nonce_ltc;
  HIDWORD(v6[9]) = global_idx_init_ltc;
  LODWORD(v6[10]) = global_idx_free_ltc;
  HIDWORD(v6[10]) = set_baud_ltc;
  LODWORD(v6[11]) = sub_E8FA0;
  HIDWORD(v6[11]) = sub_E8E88;
  LODWORD(v6[12]) = sub_E71A0;
  HIDWORD(v6[12]) = sub_E6C30;
  LODWORD(v6[13]) = sub_E6C38;
  HIDWORD(v6[13]) = sub_E8BBC;
  LODWORD(v6[14]) = sub_E7F7C;
  HIDWORD(v6[14]) = sub_E87E0;
  LODWORD(v6[15]) = sub_E87B8;
  LODWORD(v6[16]) = get_chip_status_ltc;
  HIDWORD(v6[16]) = get_theory_hashrate_ltc;
  LODWORD(v6[17]) = get_sale_hashrate_ltc;
  HIDWORD(v6[17]) = get_qualify_hashrate_ltc;
  LODWORD(v6[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(v6[18]) = set_sensor_extern_mode_ltc;
  v6[36] = 0;
  LODWORD(v6[19]) = read_sensor_temp_local_ltc;
  HIDWORD(v6[19]) = read_sensor_temp_remote_ltc;
  LODWORD(v6[20]) = parameter_update_ltc;
  HIDWORD(v6[20]) = overclock_update_ltc;
  LODWORD(v6[21]) = get_pcba_test_level_ltc;
  HIDWORD(v6[21]) = get_packet_remain_len_ltc;
  LODWORD(v6[23]) = adjust_working_freq_ltc;
  HIDWORD(v6[23]) = sub_E83EC;
  LODWORD(v6[24]) = set_frequency_by_temp_single_base;
  HIDWORD(v6[24]) = set_frequency_single_base;
  HIDWORD(v6[25]) = sub_E9518;
  HIDWORD(v6[26]) = sub_E71B8;
  LODWORD(v6[27]) = top_init_ltc;
  LODWORD(v6[28]) = dhash_start_ltc;
  LODWORD(v6[30]) = set_chipaddr_base;
  HIDWORD(v6[30]) = set_inactive_base;
  LODWORD(v6[31]) = set_chip_reg_ltc;
  HIDWORD(v6[32]) = set_core_enable_ltc;
  LODWORD(v6[33]) = sync_get_status_ltc;
  HIDWORD(v6[33]) = sync_get_chip_reg_ltc;
  HIDWORD(v6[34]) = sync_get_core_reg_ltc;
  LODWORD(v6[35]) = 14156;
  v6[38] = 0x100001489LL;
  LODWORD(v6[37]) = 6517868;
  v6[39] = 0x7500000078LL;
  v6[40] = 0x8000003A8LL;
  HIDWORD(v6[31]) = set_core_reg_ltc;
  LODWORD(v6[32]) = set_core_reg_ltc;
  HIDWORD(v6[41]) = 2;
  HIDWORD(v6[50]) = 2;
  HIDWORD(v6[62]) = 2;
  HIDWORD(v6[43]) = 210;
  LODWORD(v6[44]) = 500;
  LODWORD(v6[103]) = 8;
  v6[117] = 0x44D1600042480000LL;
  LODWORD(v6[51]) = 27;
  HIDWORD(v6[45]) = sensor_info_ltc_1489;
  v6[46] = qword_2D1D48;
  v6[47] = qword_2D1D50;
  LODWORD(v6[121]) = 1;
  v6[48] = qword_2D1D58;
  v6[101] = 0x400000070LL;
  v6[120] = 949793;
  v6[102] = 0x900000056LL;
  HIDWORD(v6[100]) = 216;
  LODWORD(v6[118]) = 1500;
  v2 = calloc(1u, 0x468u);
  v3 = memcpy(v2, v6, 0x468u);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    187,
    "runtime_ctrl_ltc_1489",
    21,
    1064,
    40,
    v7);
  return v2;
}
