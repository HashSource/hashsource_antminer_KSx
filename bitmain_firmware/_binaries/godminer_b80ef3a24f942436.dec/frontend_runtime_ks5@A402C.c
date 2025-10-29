void *frontend_runtime_ks5()
{
  void *v0; // r0

  dword_2F3A40 = (int)stratum_connect;
  dword_2F3A44 = (int)stratum_disconnect;
  dword_2F3A48 = (int)stratum_recv_line;
  dword_2F3A4C = (int)stratum_send_line;
  dword_2F3A50 = (int)stratum_login_base;
  dword_2F3A54 = (int)stratum_handle_method_base;
  dword_2F3A58 = (int)pre_stratum_handle_method_base;
  dword_2F3A5C = (int)stratum_handle_response_ks5;
  dword_2F3A60 = (int)sub_A3574;
  dword_2F3A64 = (int)sub_A2850;
  dword_2F3A68 = (int)sub_A4014;
  dword_2F3A6C = (int)stratum_authorize_ks5;
  dword_2F3A70 = (int)sub_A2CD8;
  dword_2F3A74 = (int)sub_A29EC;
  dword_2F3A78 = (int)stratum_set_diff_or_target_base;
  dword_2F3A7C = (int)target_to_diff_ks5;
  dword_2F3A80 = (int)diff_to_target_ks5;
  dword_2F3A84 = (int)target_to_double_diff_ks5;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3A40, 0x54u);
}
