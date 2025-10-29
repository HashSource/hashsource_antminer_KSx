void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2E92A0 = (int)stratum_connect;
  dword_2E92A4 = (int)stratum_disconnect;
  dword_2E92A8 = (int)stratum_recv_line;
  dword_2E92AC = (int)stratum_send_line;
  dword_2E92B0 = (int)stratum_login_base;
  dword_2E92B4 = (int)stratum_handle_method_base;
  dword_2E92B8 = (int)pre_stratum_handle_method_base;
  dword_2E92BC = (int)stratum_handle_response_base;
  dword_2E92C0 = (int)sub_A37EC;
  dword_2E92C4 = (int)sub_A304C;
  dword_2E92C8 = (int)stratum_subscribe_base;
  dword_2E92CC = (int)stratum_authorize_base;
  dword_2E92D0 = (int)sub_A3084;
  dword_2E92D4 = (int)sub_A2D8C;
  dword_2E92D8 = (int)stratum_set_diff_or_target_base;
  dword_2E92DC = (int)target_to_diff_ltc;
  dword_2E92E0 = (int)diff_to_target_ltc;
  dword_2E92E4 = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E92A0, 0x54u);
}
