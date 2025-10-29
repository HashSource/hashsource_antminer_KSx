void *frontend_runtime_hns()
{
  void *v0; // r0

  dword_2E8144 = (int)stratum_connect;
  dword_2E8148 = (int)stratum_disconnect;
  dword_2E814C = (int)stratum_recv_line;
  dword_2E8150 = (int)stratum_send_line;
  dword_2E8154 = (int)stratum_login_base;
  dword_2E8158 = (int)stratum_handle_method_base;
  dword_2E815C = (int)pre_stratum_handle_method_base;
  dword_2E8160 = (int)stratum_handle_response_hns;
  dword_2E8164 = (int)sub_9E1C0;
  dword_2E8168 = (int)sub_9DBC8;
  dword_2E816C = (int)stratum_subscribe_base;
  dword_2E8170 = (int)stratum_authorize_base;
  dword_2E8174 = (int)sub_9E2D4;
  dword_2E8178 = (int)sub_9DED4;
  dword_2E817C = (int)stratum_set_diff_or_target_base;
  dword_2E8180 = (int)target_to_diff_word_hns;
  dword_2E8184 = (int)diff_to_target_hns;
  dword_2E8188 = (int)target_to_double_diff_hns;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E8144, 0x54u);
}
