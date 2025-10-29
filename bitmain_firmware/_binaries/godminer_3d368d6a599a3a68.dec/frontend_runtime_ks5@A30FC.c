void *frontend_runtime_ks5()
{
  void *v0; // r0

  dword_2E9254 = (int)stratum_connect;
  dword_2E9258 = (int)stratum_disconnect;
  dword_2E925C = (int)stratum_recv_line;
  dword_2E9260 = (int)stratum_send_line;
  dword_2E9264 = (int)stratum_login_base;
  dword_2E9268 = (int)stratum_handle_method_base;
  dword_2E926C = (int)pre_stratum_handle_method_base;
  dword_2E9270 = (int)stratum_handle_response_ks5;
  dword_2E9274 = (int)sub_A2690;
  dword_2E9278 = (int)sub_A196C;
  dword_2E927C = (int)sub_A30E4;
  dword_2E9280 = (int)stratum_authorize_ks5;
  dword_2E9284 = (int)sub_A1DF4;
  dword_2E9288 = (int)sub_A1B08;
  dword_2E928C = (int)stratum_set_diff_or_target_base;
  dword_2E9290 = (int)target_to_diff_ks5;
  dword_2E9294 = (int)diff_to_target_ks5;
  dword_2E9298 = (int)target_to_double_diff_ks5;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E9254, 0x54u);
}
