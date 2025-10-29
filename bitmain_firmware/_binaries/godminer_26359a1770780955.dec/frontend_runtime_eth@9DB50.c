void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2E90B8 = (int)stratum_connect;
  dword_2E90BC = (int)stratum_disconnect;
  dword_2E90C0 = (int)stratum_recv_line;
  dword_2E90C4 = (int)stratum_send_line;
  dword_2E90C8 = (int)stratum_login_base;
  dword_2E90CC = (int)stratum_handle_method_eth;
  dword_2E90D0 = (int)pre_stratum_handle_method_eth;
  dword_2E90D4 = (int)stratum_handle_response_eth;
  dword_2E90D8 = (int)sub_9CB08;
  dword_2E90DC = (int)sub_9CA30;
  dword_2E90E0 = (int)sub_9BBFC;
  dword_2E90E4 = (int)stratum_authorize_eth;
  dword_2E90E8 = (int)sub_9C568;
  dword_2E90EC = (int)sub_9C380;
  dword_2E90F0 = (int)sub_9C1A0;
  dword_2E90F4 = (int)target_to_diff_eth;
  dword_2E90F8 = (int)diff_to_target_eth;
  dword_2E90FC = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E90B8, 0x54u);
}
