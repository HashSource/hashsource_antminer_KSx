void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2EA208 = (int)stratum_connect;
  dword_2EA20C = (int)stratum_disconnect;
  dword_2EA210 = (int)stratum_recv_line;
  dword_2EA214 = (int)stratum_send_line;
  dword_2EA218 = (int)stratum_login_base;
  dword_2EA21C = (int)stratum_handle_method_base;
  dword_2EA220 = (int)pre_stratum_handle_method_base;
  dword_2EA224 = (int)stratum_handle_response_base;
  dword_2EA228 = (int)sub_A1804;
  dword_2EA22C = (int)sub_A1274;
  dword_2EA230 = (int)stratum_subscribe_base;
  dword_2EA234 = (int)stratum_authorize_base;
  dword_2EA238 = (int)sub_A1530;
  dword_2EA23C = (int)sub_A12A8;
  dword_2EA240 = (int)stratum_set_diff_or_target_base;
  dword_2EA244 = (int)target_to_diff_kda;
  dword_2EA248 = (int)diff_to_target_kda;
  dword_2EA24C = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA208, 0x54u);
}
