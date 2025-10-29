void *frontend_runtime_dash()
{
  void *v0; // r0

  dword_2EA020 = (int)stratum_connect;
  dword_2EA024 = (int)stratum_disconnect;
  dword_2EA028 = (int)stratum_recv_line;
  dword_2EA02C = (int)stratum_send_line;
  dword_2EA030 = (int)stratum_login_base;
  dword_2EA034 = (int)stratum_handle_method_base;
  dword_2EA038 = (int)pre_stratum_handle_method_base;
  dword_2EA03C = (int)stratum_handle_response_base;
  dword_2EA040 = (int)sub_9AE34;
  dword_2EA044 = (int)sub_9A198;
  dword_2EA048 = (int)stratum_subscribe_base;
  dword_2EA04C = (int)stratum_authorize_base;
  dword_2EA050 = (int)sub_9A204;
  dword_2EA054 = (int)sub_99E98;
  dword_2EA058 = (int)stratum_set_diff_or_target_base;
  dword_2EA05C = (int)target_to_diff_dash;
  dword_2EA060 = (int)diff_to_target_dash;
  dword_2EA064 = (int)target_to_double_diff_dash;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA020, 0x54u);
}
