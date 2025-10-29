void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2EA0C8 = (int)stratum_connect;
  dword_2EA0CC = (int)stratum_disconnect;
  dword_2EA0D0 = (int)stratum_recv_line;
  dword_2EA0D4 = (int)stratum_send_line;
  dword_2EA0D8 = (int)stratum_login_base;
  dword_2EA0DC = (int)stratum_handle_method_eth;
  dword_2EA0E0 = (int)pre_stratum_handle_method_eth;
  dword_2EA0E4 = (int)stratum_handle_response_eth;
  dword_2EA0E8 = (int)sub_9CFA8;
  dword_2EA0EC = (int)sub_9CED0;
  dword_2EA0F0 = (int)sub_9C09C;
  dword_2EA0F4 = (int)stratum_authorize_eth;
  dword_2EA0F8 = (int)sub_9CA08;
  dword_2EA0FC = (int)sub_9C820;
  dword_2EA100 = (int)sub_9C640;
  dword_2EA104 = (int)target_to_diff_eth;
  dword_2EA108 = (int)diff_to_target_eth;
  dword_2EA10C = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA0C8, 0x54u);
}
