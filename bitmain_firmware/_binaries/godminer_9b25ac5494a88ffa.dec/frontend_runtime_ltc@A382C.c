void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2E8298 = (int)stratum_connect;
  dword_2E829C = (int)stratum_disconnect;
  dword_2E82A0 = (int)stratum_recv_line;
  dword_2E82A4 = (int)stratum_send_line;
  dword_2E82A8 = (int)stratum_login_base;
  dword_2E82AC = (int)stratum_handle_method_base;
  dword_2E82B0 = (int)pre_stratum_handle_method_base;
  dword_2E82B4 = (int)stratum_handle_response_base;
  dword_2E82B8 = (int)sub_A3764;
  dword_2E82BC = (int)sub_A2FC4;
  dword_2E82C0 = (int)stratum_subscribe_base;
  dword_2E82C4 = (int)stratum_authorize_base;
  dword_2E82C8 = (int)sub_A2FFC;
  dword_2E82CC = (int)sub_A2D04;
  dword_2E82D0 = (int)stratum_set_diff_or_target_base;
  dword_2E82D4 = (int)target_to_diff_ltc;
  dword_2E82D8 = (int)diff_to_target_ltc;
  dword_2E82DC = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E8298, 0x54u);
}
