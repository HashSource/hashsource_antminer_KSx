void *frontend_runtime_ks5()
{
  void *v0; // r0

  dword_2EA25C = (int)stratum_connect;
  dword_2EA260 = (int)stratum_disconnect;
  dword_2EA264 = (int)stratum_recv_line;
  dword_2EA268 = (int)stratum_send_line;
  dword_2EA26C = (int)stratum_login_base;
  dword_2EA270 = (int)stratum_handle_method_base;
  dword_2EA274 = (int)pre_stratum_handle_method_base;
  dword_2EA278 = (int)stratum_handle_response_ks5;
  dword_2EA27C = (int)sub_A26C0;
  dword_2EA280 = (int)sub_A199C;
  dword_2EA284 = (int)sub_A3114;
  dword_2EA288 = (int)stratum_authorize_ks5;
  dword_2EA28C = (int)sub_A1E24;
  dword_2EA290 = (int)sub_A1B38;
  dword_2EA294 = (int)stratum_set_diff_or_target_base;
  dword_2EA298 = (int)target_to_diff_ks5;
  dword_2EA29C = (int)diff_to_target_ks5;
  dword_2EA2A0 = (int)target_to_double_diff_ks5;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA25C, 0x54u);
}
