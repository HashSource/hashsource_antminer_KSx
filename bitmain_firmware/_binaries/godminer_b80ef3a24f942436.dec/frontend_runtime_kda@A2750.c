void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2F39EC = (int)stratum_connect;
  dword_2F39F0 = (int)stratum_disconnect;
  dword_2F39F4 = (int)stratum_recv_line;
  dword_2F39F8 = (int)stratum_send_line;
  dword_2F39FC = (int)stratum_login_base;
  dword_2F3A00 = (int)stratum_handle_method_base;
  dword_2F3A04 = (int)pre_stratum_handle_method_base;
  dword_2F3A08 = (int)stratum_handle_response_base;
  dword_2F3A0C = (int)sub_A26B8;
  dword_2F3A10 = (int)sub_A2128;
  dword_2F3A14 = (int)stratum_subscribe_base;
  dword_2F3A18 = (int)stratum_authorize_base;
  dword_2F3A1C = (int)sub_A23E4;
  dword_2F3A20 = (int)sub_A215C;
  dword_2F3A24 = (int)stratum_set_diff_or_target_base;
  dword_2F3A28 = (int)target_to_diff_kda;
  dword_2F3A2C = (int)diff_to_target_kda;
  dword_2F3A30 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F39EC, 0x54u);
}
