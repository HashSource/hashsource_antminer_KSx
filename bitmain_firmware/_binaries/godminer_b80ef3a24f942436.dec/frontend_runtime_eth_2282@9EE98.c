void *frontend_runtime_eth_2282()
{
  void *v0; // r0

  dword_2F38AC = (int)stratum_connect;
  dword_2F38B0 = (int)stratum_disconnect;
  dword_2F38B4 = (int)stratum_recv_line;
  dword_2F38B8 = (int)stratum_send_line;
  dword_2F38BC = (int)stratum_login_base;
  dword_2F38C0 = (int)stratum_handle_method_eth_2282;
  dword_2F38C4 = (int)pre_stratum_handle_method_eth_2282;
  dword_2F38C8 = (int)stratum_handle_response_eth_2282;
  dword_2F38CC = (int)sub_9DDE8;
  dword_2F38D0 = (int)sub_9DD10;
  dword_2F38D4 = (int)sub_9C7E0;
  dword_2F38D8 = (int)stratum_authorize_eth_2282;
  dword_2F38DC = (int)sub_9D4F4;
  dword_2F38E0 = (int)sub_9D260;
  dword_2F38E4 = (int)sub_9CD84;
  dword_2F38E8 = (int)target_to_diff_eth_2282;
  dword_2F38EC = (int)diff_to_target_eth_2282;
  dword_2F38F0 = (int)target_to_double_diff_eth_2282;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F38AC, 0x54u);
}
