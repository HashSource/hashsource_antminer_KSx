void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2EB37C = (int)stratum_connect;
  dword_2EB380 = (int)stratum_disconnect;
  dword_2EB384 = (int)stratum_recv_line;
  dword_2EB388 = (int)stratum_send_line;
  dword_2EB38C = (int)stratum_login_base;
  dword_2EB390 = (int)stratum_handle_method_base;
  dword_2EB394 = (int)pre_stratum_handle_method_base;
  dword_2EB398 = (int)stratum_handle_response_base;
  dword_2EB39C = (int)sub_9C0FC;
  dword_2EB3A0 = (int)sub_9C094;
  dword_2EB3A4 = (int)stratum_subscribe_base;
  dword_2EB3A8 = (int)stratum_authorize_base;
  dword_2EB3AC = (int)sub_9B598;
  dword_2EB3B0 = (int)sub_9B258;
  dword_2EB3B4 = (int)stratum_set_diff_or_target_base;
  dword_2EB3B8 = (int)target_to_diff_dcr;
  dword_2EB3BC = (int)diff_to_target_dcr;
  dword_2EB3C0 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB37C, 0x54u);
}
