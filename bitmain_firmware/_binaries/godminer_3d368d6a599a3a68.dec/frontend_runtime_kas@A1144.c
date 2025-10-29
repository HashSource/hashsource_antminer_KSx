void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2E91AC = (int)stratum_connect;
  dword_2E91B0 = (int)stratum_disconnect;
  dword_2E91B4 = (int)stratum_recv_line;
  dword_2E91B8 = (int)stratum_send_line;
  dword_2E91BC = (int)stratum_login_base;
  dword_2E91C0 = (int)stratum_handle_method_base;
  dword_2E91C4 = (int)pre_stratum_handle_method_base;
  dword_2E91C8 = (int)stratum_handle_response_kas;
  dword_2E91CC = (int)sub_A068C;
  dword_2E91D0 = (int)sub_9F968;
  dword_2E91D4 = (int)sub_A112C;
  dword_2E91D8 = (int)stratum_authorize_kas;
  dword_2E91DC = (int)sub_9FDF0;
  dword_2E91E0 = (int)sub_9FB04;
  dword_2E91E4 = (int)stratum_set_diff_or_target_base;
  dword_2E91E8 = (int)target_to_diff_kas;
  dword_2E91EC = (int)diff_to_target_kas;
  dword_2E91F0 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E91AC, 0x54u);
}
