void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2EA1B4 = (int)stratum_connect;
  dword_2EA1B8 = (int)stratum_disconnect;
  dword_2EA1BC = (int)stratum_recv_line;
  dword_2EA1C0 = (int)stratum_send_line;
  dword_2EA1C4 = (int)stratum_login_base;
  dword_2EA1C8 = (int)stratum_handle_method_base;
  dword_2EA1CC = (int)pre_stratum_handle_method_base;
  dword_2EA1D0 = (int)stratum_handle_response_kas;
  dword_2EA1D4 = (int)sub_A06BC;
  dword_2EA1D8 = (int)sub_9F998;
  dword_2EA1DC = (int)sub_A115C;
  dword_2EA1E0 = (int)stratum_authorize_kas;
  dword_2EA1E4 = (int)sub_9FE20;
  dword_2EA1E8 = (int)sub_9FB34;
  dword_2EA1EC = (int)stratum_set_diff_or_target_base;
  dword_2EA1F0 = (int)target_to_diff_kas;
  dword_2EA1F4 = (int)diff_to_target_kas;
  dword_2EA1F8 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA1B4, 0x54u);
}
