void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2EA2B0 = (int)stratum_connect;
  dword_2EA2B4 = (int)stratum_disconnect;
  dword_2EA2B8 = (int)stratum_recv_line;
  dword_2EA2BC = (int)stratum_send_line;
  dword_2EA2C0 = (int)stratum_login_base;
  dword_2EA2C4 = (int)stratum_handle_method_base;
  dword_2EA2C8 = (int)pre_stratum_handle_method_base;
  dword_2EA2CC = (int)stratum_handle_response_base;
  dword_2EA2D0 = (int)sub_A3C8C;
  dword_2EA2D4 = (int)sub_A34EC;
  dword_2EA2D8 = (int)stratum_subscribe_base;
  dword_2EA2DC = (int)stratum_authorize_base;
  dword_2EA2E0 = (int)sub_A3524;
  dword_2EA2E4 = (int)sub_A322C;
  dword_2EA2E8 = (int)stratum_set_diff_or_target_base;
  dword_2EA2EC = (int)target_to_diff_ltc;
  dword_2EA2F0 = (int)diff_to_target_ltc;
  dword_2EA2F4 = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA2B0, 0x54u);
}
