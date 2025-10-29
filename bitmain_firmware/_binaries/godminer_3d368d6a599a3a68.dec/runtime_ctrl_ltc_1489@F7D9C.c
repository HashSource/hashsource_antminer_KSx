void *__fastcall runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r8
  void *v3; // r0
  int v4; // r0
  _QWORD s[144]; // [sp+10h] [bp-1484h] BYREF
  _BYTE v7[4100]; // [sp+490h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
    192,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v7);
  memset(s, 0, sizeof(s));
  LODWORD(s[0]) = backend_init_base;
  HIDWORD(s[0]) = reset_base;
  LODWORD(s[2]) = dhash_mining_start_base;
  HIDWORD(s[2]) = dhash_mining_stop_base;
  LODWORD(s[3]) = dhash_mining_reset_base;
  HIDWORD(s[3]) = backend_exit_base;
  LODWORD(s[4]) = push_work_base;
  HIDWORD(s[4]) = async_push_work_base;
  LODWORD(s[5]) = pop_ans_base;
  HIDWORD(s[5]) = try_pop_ans_base;
  LODWORD(s[7]) = softreset_all_chip_ltc;
  HIDWORD(s[7]) = setup_all_chip_ltc;
  LODWORD(s[8]) = work_2_packet_ltc;
  HIDWORD(s[8]) = packet_2_nonce_ltc;
  LODWORD(s[9]) = check_nonce_ltc;
  HIDWORD(s[9]) = global_idx_init_ltc;
  LODWORD(s[10]) = global_idx_free_ltc;
  HIDWORD(s[10]) = set_baud_ltc;
  LODWORD(s[11]) = sub_F6338;
  HIDWORD(s[11]) = sub_F6220;
  LODWORD(s[12]) = sub_F4530;
  HIDWORD(s[12]) = sub_F3FC0;
  LODWORD(s[13]) = sub_F3FC8;
  HIDWORD(s[13]) = sub_F5F54;
  LODWORD(s[14]) = sub_F5310;
  HIDWORD(s[14]) = sub_F5B74;
  LODWORD(s[15]) = sub_F5B4C;
  LODWORD(s[16]) = get_chip_status_ltc;
  HIDWORD(s[16]) = get_theory_hashrate_ltc;
  LODWORD(s[17]) = get_sale_hashrate_ltc;
  HIDWORD(s[17]) = get_qualify_hashrate_ltc;
  LODWORD(s[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(s[18]) = set_sensor_extern_mode_ltc;
  *(_QWORD *)((char *)&s[38] + 4) = 0;
  LODWORD(s[19]) = read_sensor_temp_local_ltc;
  s[41] = 0x7800000001LL;
  LODWORD(s[43]) = 8;
  HIDWORD(s[19]) = read_sensor_temp_remote_ltc;
  LODWORD(s[20]) = parameter_update_ltc;
  HIDWORD(s[20]) = overclock_update_ltc;
  LODWORD(s[21]) = get_pcba_test_level_ltc;
  HIDWORD(s[21]) = get_packet_remain_len_ltc;
  LODWORD(s[23]) = adjust_working_freq_ltc;
  HIDWORD(s[23]) = sub_F5780;
  LODWORD(s[24]) = set_frequency_by_temp_single_base;
  HIDWORD(s[26]) = set_frequency_single_base;
  HIDWORD(s[27]) = sub_F6858;
  HIDWORD(s[28]) = sub_F4548;
  LODWORD(s[29]) = top_init_ltc;
  LODWORD(s[30]) = dhash_start_ltc;
  LODWORD(s[32]) = set_chipaddr_base;
  HIDWORD(s[32]) = set_inactive_base;
  LODWORD(s[33]) = set_chip_reg_ltc;
  HIDWORD(s[34]) = set_core_enable_ltc;
  LODWORD(s[35]) = sync_get_status_ltc;
  HIDWORD(s[35]) = sync_get_chip_reg_ltc;
  LODWORD(s[37]) = sync_get_core_reg_ltc;
  HIDWORD(s[37]) = 14156;
  HIDWORD(s[40]) = 5257;
  HIDWORD(s[39]) = 6517868;
  s[42] = 0x3A800000075LL;
  HIDWORD(s[33]) = set_core_reg_ltc;
  LODWORD(s[34]) = set_core_reg_ltc;
  LODWORD(s[44]) = 2;
  HIDWORD(s[53]) = 2;
  s[46] = 0x1F4000000D2LL;
  s[123] = 949793;
  HIDWORD(s[65]) = 2;
  LODWORD(s[106]) = 8;
  s[48] = sensor_info_ltc_1489;
  s[49] = qword_2E61D4;
  LODWORD(s[124]) = 1;
  LODWORD(s[54]) = 27;
  s[120] = 0x44D1600042480000LL;
  s[50] = qword_2E61DC;
  LODWORD(s[51]) = unk_2E61E4;
  HIDWORD(s[103]) = 216;
  s[104] = 0x400000070LL;
  s[105] = 0x900000056LL;
  LODWORD(s[121]) = 1500;
  v2 = calloc(1u, 0x480u);
  v3 = memcpy(v2, s, 0x480u);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
    192,
    "runtime_ctrl_ltc_1489",
    21,
    1064,
    40,
    v7);
  return v2;
}
