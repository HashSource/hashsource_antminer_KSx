void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2E9200 = (int)stratum_connect;
  dword_2E9204 = (int)stratum_disconnect;
  dword_2E9208 = (int)stratum_recv_line;
  dword_2E920C = (int)stratum_send_line;
  dword_2E9210 = (int)stratum_login_base;
  dword_2E9214 = (int)stratum_handle_method_base;
  dword_2E9218 = (int)pre_stratum_handle_method_base;
  dword_2E921C = (int)stratum_handle_response_base;
  dword_2E9220 = (int)sub_A17D4;
  dword_2E9224 = (int)sub_A1244;
  dword_2E9228 = (int)stratum_subscribe_base;
  dword_2E922C = (int)stratum_authorize_base;
  dword_2E9230 = (int)sub_A1500;
  dword_2E9234 = (int)sub_A1278;
  dword_2E9238 = (int)stratum_set_diff_or_target_base;
  dword_2E923C = (int)target_to_diff_kda;
  dword_2E9240 = (int)diff_to_target_kda;
  dword_2E9244 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E9200, 0x54u);
}
