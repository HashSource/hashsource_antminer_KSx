void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2EB4BC = (int)stratum_connect;
  dword_2EB4C0 = (int)stratum_disconnect;
  dword_2EB4C4 = (int)stratum_recv_line;
  dword_2EB4C8 = (int)stratum_send_line;
  dword_2EB4CC = (int)stratum_login_base;
  dword_2EB4D0 = (int)stratum_handle_method_base;
  dword_2EB4D4 = (int)pre_stratum_handle_method_base;
  dword_2EB4D8 = (int)stratum_handle_response_kas;
  dword_2EB4DC = (int)sub_A0914;
  dword_2EB4E0 = (int)sub_9FBF0;
  dword_2EB4E4 = (int)sub_A13B4;
  dword_2EB4E8 = (int)stratum_authorize_kas;
  dword_2EB4EC = (int)sub_A0078;
  dword_2EB4F0 = (int)sub_9FD8C;
  dword_2EB4F4 = (int)stratum_set_diff_or_target_base;
  dword_2EB4F8 = (int)target_to_diff_kas;
  dword_2EB4FC = (int)diff_to_target_kas;
  dword_2EB500 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB4BC, 0x54u);
}
