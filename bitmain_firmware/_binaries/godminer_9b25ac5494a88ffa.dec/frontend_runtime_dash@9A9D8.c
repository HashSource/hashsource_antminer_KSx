void *frontend_runtime_dash()
{
  void *v0; // r0

  dword_2E8008 = (int)stratum_connect;
  dword_2E800C = (int)stratum_disconnect;
  dword_2E8010 = (int)stratum_recv_line;
  dword_2E8014 = (int)stratum_send_line;
  dword_2E8018 = (int)stratum_login_base;
  dword_2E801C = (int)stratum_handle_method_base;
  dword_2E8020 = (int)pre_stratum_handle_method_base;
  dword_2E8024 = (int)stratum_handle_response_base;
  dword_2E8028 = (int)sub_9A90C;
  dword_2E802C = (int)sub_99C70;
  dword_2E8030 = (int)stratum_subscribe_base;
  dword_2E8034 = (int)stratum_authorize_base;
  dword_2E8038 = (int)sub_99CDC;
  dword_2E803C = (int)sub_99970;
  dword_2E8040 = (int)stratum_set_diff_or_target_base;
  dword_2E8044 = (int)target_to_diff_dash;
  dword_2E8048 = (int)diff_to_target_dash;
  dword_2E804C = (int)target_to_double_diff_dash;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E8008, 0x54u);
}
