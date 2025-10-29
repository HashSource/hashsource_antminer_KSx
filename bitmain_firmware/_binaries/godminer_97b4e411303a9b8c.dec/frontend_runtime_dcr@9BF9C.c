void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2EA074 = (int)stratum_connect;
  dword_2EA078 = (int)stratum_disconnect;
  dword_2EA07C = (int)stratum_recv_line;
  dword_2EA080 = (int)stratum_send_line;
  dword_2EA084 = (int)stratum_login_base;
  dword_2EA088 = (int)stratum_handle_method_base;
  dword_2EA08C = (int)pre_stratum_handle_method_base;
  dword_2EA090 = (int)stratum_handle_response_base;
  dword_2EA094 = (int)sub_9BEA4;
  dword_2EA098 = (int)sub_9BE3C;
  dword_2EA09C = (int)stratum_subscribe_base;
  dword_2EA0A0 = (int)stratum_authorize_base;
  dword_2EA0A4 = (int)sub_9B340;
  dword_2EA0A8 = (int)sub_9B000;
  dword_2EA0AC = (int)stratum_set_diff_or_target_base;
  dword_2EA0B0 = (int)target_to_diff_dcr;
  dword_2EA0B4 = (int)diff_to_target_dcr;
  dword_2EA0B8 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA074, 0x54u);
}
