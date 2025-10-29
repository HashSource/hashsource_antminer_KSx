void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2E91A4 = (int)stratum_connect;
  dword_2E91A8 = (int)stratum_disconnect;
  dword_2E91AC = (int)stratum_recv_line;
  dword_2E91B0 = (int)stratum_send_line;
  dword_2E91B4 = (int)stratum_login_base;
  dword_2E91B8 = (int)stratum_handle_method_base;
  dword_2E91BC = (int)pre_stratum_handle_method_base;
  dword_2E91C0 = (int)stratum_handle_response_kas;
  dword_2E91C4 = (int)sub_A021C;
  dword_2E91C8 = (int)sub_9F4F8;
  dword_2E91CC = (int)sub_A0CBC;
  dword_2E91D0 = (int)stratum_authorize_kas;
  dword_2E91D4 = (int)sub_9F980;
  dword_2E91D8 = (int)sub_9F694;
  dword_2E91DC = (int)stratum_set_diff_or_target_base;
  dword_2E91E0 = (int)target_to_diff_kas;
  dword_2E91E4 = (int)diff_to_target_kas;
  dword_2E91E8 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E91A4, 0x54u);
}
