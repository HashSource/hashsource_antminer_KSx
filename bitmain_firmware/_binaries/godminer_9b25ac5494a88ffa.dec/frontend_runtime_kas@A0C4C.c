void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2E819C = (int)stratum_connect;
  dword_2E81A0 = (int)stratum_disconnect;
  dword_2E81A4 = (int)stratum_recv_line;
  dword_2E81A8 = (int)stratum_send_line;
  dword_2E81AC = (int)stratum_login_base;
  dword_2E81B0 = (int)stratum_handle_method_base;
  dword_2E81B4 = (int)pre_stratum_handle_method_base;
  dword_2E81B8 = (int)stratum_handle_response_kas;
  dword_2E81BC = (int)sub_A0194;
  dword_2E81C0 = (int)sub_9F470;
  dword_2E81C4 = (int)sub_A0C34;
  dword_2E81C8 = (int)stratum_authorize_kas;
  dword_2E81CC = (int)sub_9F8F8;
  dword_2E81D0 = (int)sub_9F60C;
  dword_2E81D4 = (int)stratum_set_diff_or_target_base;
  dword_2E81D8 = (int)target_to_diff_kas;
  dword_2E81DC = (int)diff_to_target_kas;
  dword_2E81E0 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E819C, 0x54u);
}
