void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2EB5B8 = (int)stratum_connect;
  dword_2EB5BC = (int)stratum_disconnect;
  dword_2EB5C0 = (int)stratum_recv_line;
  dword_2EB5C4 = (int)stratum_send_line;
  dword_2EB5C8 = (int)stratum_login_base;
  dword_2EB5CC = (int)stratum_handle_method_base;
  dword_2EB5D0 = (int)pre_stratum_handle_method_base;
  dword_2EB5D4 = (int)stratum_handle_response_base;
  dword_2EB5D8 = (int)sub_A3EE4;
  dword_2EB5DC = (int)sub_A3744;
  dword_2EB5E0 = (int)stratum_subscribe_base;
  dword_2EB5E4 = (int)stratum_authorize_base;
  dword_2EB5E8 = (int)sub_A377C;
  dword_2EB5EC = (int)sub_A3484;
  dword_2EB5F0 = (int)stratum_set_diff_or_target_base;
  dword_2EB5F4 = (int)target_to_diff_ltc;
  dword_2EB5F8 = (int)diff_to_target_ltc;
  dword_2EB5FC = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB5B8, 0x54u);
}
