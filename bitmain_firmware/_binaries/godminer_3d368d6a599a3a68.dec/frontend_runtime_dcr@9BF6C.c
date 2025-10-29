void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2E906C = (int)stratum_connect;
  dword_2E9070 = (int)stratum_disconnect;
  dword_2E9074 = (int)stratum_recv_line;
  dword_2E9078 = (int)stratum_send_line;
  dword_2E907C = (int)stratum_login_base;
  dword_2E9080 = (int)stratum_handle_method_base;
  dword_2E9084 = (int)pre_stratum_handle_method_base;
  dword_2E9088 = (int)stratum_handle_response_base;
  dword_2E908C = (int)sub_9BE74;
  dword_2E9090 = (int)sub_9BE0C;
  dword_2E9094 = (int)stratum_subscribe_base;
  dword_2E9098 = (int)stratum_authorize_base;
  dword_2E909C = (int)sub_9B310;
  dword_2E90A0 = (int)sub_9AFD0;
  dword_2E90A4 = (int)stratum_set_diff_or_target_base;
  dword_2E90A8 = (int)target_to_diff_dcr;
  dword_2E90AC = (int)diff_to_target_dcr;
  dword_2E90B0 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E906C, 0x54u);
}
