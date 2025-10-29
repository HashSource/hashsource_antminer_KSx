void *frontend_runtime_hns()
{
  void *v0; // r0

  dword_2E914C = (int)stratum_connect;
  dword_2E9150 = (int)stratum_disconnect;
  dword_2E9154 = (int)stratum_recv_line;
  dword_2E9158 = (int)stratum_send_line;
  dword_2E915C = (int)stratum_login_base;
  dword_2E9160 = (int)stratum_handle_method_base;
  dword_2E9164 = (int)pre_stratum_handle_method_base;
  dword_2E9168 = (int)stratum_handle_response_hns;
  dword_2E916C = (int)sub_9E248;
  dword_2E9170 = (int)sub_9DC50;
  dword_2E9174 = (int)stratum_subscribe_base;
  dword_2E9178 = (int)stratum_authorize_base;
  dword_2E917C = (int)sub_9E35C;
  dword_2E9180 = (int)sub_9DF5C;
  dword_2E9184 = (int)stratum_set_diff_or_target_base;
  dword_2E9188 = (int)target_to_diff_word_hns;
  dword_2E918C = (int)diff_to_target_hns;
  dword_2E9190 = (int)target_to_double_diff_hns;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E914C, 0x54u);
}
