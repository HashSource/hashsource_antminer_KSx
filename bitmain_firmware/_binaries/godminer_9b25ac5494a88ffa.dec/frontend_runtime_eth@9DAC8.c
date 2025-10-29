void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2E80B0 = (int)stratum_connect;
  dword_2E80B4 = (int)stratum_disconnect;
  dword_2E80B8 = (int)stratum_recv_line;
  dword_2E80BC = (int)stratum_send_line;
  dword_2E80C0 = (int)stratum_login_base;
  dword_2E80C4 = (int)stratum_handle_method_eth;
  dword_2E80C8 = (int)pre_stratum_handle_method_eth;
  dword_2E80CC = (int)stratum_handle_response_eth;
  dword_2E80D0 = (int)sub_9CA80;
  dword_2E80D4 = (int)sub_9C9A8;
  dword_2E80D8 = (int)sub_9BB74;
  dword_2E80DC = (int)stratum_authorize_eth;
  dword_2E80E0 = (int)sub_9C4E0;
  dword_2E80E4 = (int)sub_9C2F8;
  dword_2E80E8 = (int)sub_9C118;
  dword_2E80EC = (int)target_to_diff_eth;
  dword_2E80F0 = (int)diff_to_target_eth;
  dword_2E80F4 = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E80B0, 0x54u);
}
