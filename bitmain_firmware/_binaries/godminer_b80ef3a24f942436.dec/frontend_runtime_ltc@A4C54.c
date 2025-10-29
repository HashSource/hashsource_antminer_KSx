void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2F3A94 = (int)stratum_connect;
  dword_2F3A98 = (int)stratum_disconnect;
  dword_2F3A9C = (int)stratum_recv_line;
  dword_2F3AA0 = (int)stratum_send_line;
  dword_2F3AA4 = (int)stratum_login_base;
  dword_2F3AA8 = (int)stratum_handle_method_base;
  dword_2F3AAC = (int)pre_stratum_handle_method_base;
  dword_2F3AB0 = (int)stratum_handle_response_base;
  dword_2F3AB4 = (int)sub_A4B8C;
  dword_2F3AB8 = (int)sub_A43EC;
  dword_2F3ABC = (int)stratum_subscribe_base;
  dword_2F3AC0 = (int)stratum_authorize_base;
  dword_2F3AC4 = (int)sub_A4424;
  dword_2F3AC8 = (int)sub_A412C;
  dword_2F3ACC = (int)stratum_set_diff_or_target_base;
  dword_2F3AD0 = (int)target_to_diff_ltc;
  dword_2F3AD4 = (int)diff_to_target_ltc;
  dword_2F3AD8 = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3A94, 0x54u);
}
