void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2E81F0 = (int)stratum_connect;
  dword_2E81F4 = (int)stratum_disconnect;
  dword_2E81F8 = (int)stratum_recv_line;
  dword_2E81FC = (int)stratum_send_line;
  dword_2E8200 = (int)stratum_login_base;
  dword_2E8204 = (int)stratum_handle_method_base;
  dword_2E8208 = (int)pre_stratum_handle_method_base;
  dword_2E820C = (int)stratum_handle_response_base;
  dword_2E8210 = (int)sub_A12DC;
  dword_2E8214 = (int)sub_A0D4C;
  dword_2E8218 = (int)stratum_subscribe_base;
  dword_2E821C = (int)stratum_authorize_base;
  dword_2E8220 = (int)sub_A1008;
  dword_2E8224 = (int)sub_A0D80;
  dword_2E8228 = (int)stratum_set_diff_or_target_base;
  dword_2E822C = (int)target_to_diff_kda;
  dword_2E8230 = (int)diff_to_target_kda;
  dword_2E8234 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E81F0, 0x54u);
}
