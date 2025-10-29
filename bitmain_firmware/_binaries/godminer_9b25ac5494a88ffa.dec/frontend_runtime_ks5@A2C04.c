void *frontend_runtime_ks5()
{
  void *v0; // r0

  dword_2E8244 = (int)stratum_connect;
  dword_2E8248 = (int)stratum_disconnect;
  dword_2E824C = (int)stratum_recv_line;
  dword_2E8250 = (int)stratum_send_line;
  dword_2E8254 = (int)stratum_login_base;
  dword_2E8258 = (int)stratum_handle_method_base;
  dword_2E825C = (int)pre_stratum_handle_method_base;
  dword_2E8260 = (int)stratum_handle_response_ks5;
  dword_2E8264 = (int)sub_A2198;
  dword_2E8268 = (int)sub_A1474;
  dword_2E826C = (int)sub_A2BEC;
  dword_2E8270 = (int)stratum_authorize_ks5;
  dword_2E8274 = (int)sub_A18FC;
  dword_2E8278 = (int)sub_A1610;
  dword_2E827C = (int)stratum_set_diff_or_target_base;
  dword_2E8280 = (int)target_to_diff_ks5;
  dword_2E8284 = (int)diff_to_target_ks5;
  dword_2E8288 = (int)target_to_double_diff_ks5;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E8244, 0x54u);
}
