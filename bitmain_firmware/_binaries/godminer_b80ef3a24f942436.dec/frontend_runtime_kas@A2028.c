void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2F3998 = (int)stratum_connect;
  dword_2F399C = (int)stratum_disconnect;
  dword_2F39A0 = (int)stratum_recv_line;
  dword_2F39A4 = (int)stratum_send_line;
  dword_2F39A8 = (int)stratum_login_base;
  dword_2F39AC = (int)stratum_handle_method_base;
  dword_2F39B0 = (int)pre_stratum_handle_method_base;
  dword_2F39B4 = (int)stratum_handle_response_kas;
  dword_2F39B8 = (int)sub_A1570;
  dword_2F39BC = (int)sub_A084C;
  dword_2F39C0 = (int)sub_A2010;
  dword_2F39C4 = (int)stratum_authorize_kas;
  dword_2F39C8 = (int)sub_A0CD4;
  dword_2F39CC = (int)sub_A09E8;
  dword_2F39D0 = (int)stratum_set_diff_or_target_base;
  dword_2F39D4 = (int)target_to_diff_kas;
  dword_2F39D8 = (int)diff_to_target_kas;
  dword_2F39DC = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3998, 0x54u);
}
