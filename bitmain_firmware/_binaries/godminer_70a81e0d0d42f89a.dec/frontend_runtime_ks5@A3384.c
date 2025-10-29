void *frontend_runtime_ks5()
{
  void *v0; // r0

  dword_2EB564 = (int)stratum_connect;
  dword_2EB568 = (int)stratum_disconnect;
  dword_2EB56C = (int)stratum_recv_line;
  dword_2EB570 = (int)stratum_send_line;
  dword_2EB574 = (int)stratum_login_base;
  dword_2EB578 = (int)stratum_handle_method_base;
  dword_2EB57C = (int)pre_stratum_handle_method_base;
  dword_2EB580 = (int)stratum_handle_response_ks5;
  dword_2EB584 = (int)sub_A2918;
  dword_2EB588 = (int)sub_A1BF4;
  dword_2EB58C = (int)sub_A336C;
  dword_2EB590 = (int)stratum_authorize_ks5;
  dword_2EB594 = (int)sub_A207C;
  dword_2EB598 = (int)sub_A1D90;
  dword_2EB59C = (int)stratum_set_diff_or_target_base;
  dword_2EB5A0 = (int)target_to_diff_ks5;
  dword_2EB5A4 = (int)diff_to_target_ks5;
  dword_2EB5A8 = (int)target_to_double_diff_ks5;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB564, 0x54u);
}
