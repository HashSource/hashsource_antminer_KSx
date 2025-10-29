void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2D31C0 = (int)stratum_connect;
  dword_2D31C4 = (int)stratum_disconnect;
  dword_2D31C8 = (int)stratum_recv_line;
  dword_2D31CC = (int)stratum_send_line;
  dword_2D31D0 = (int)stratum_login_base;
  dword_2D31D4 = (int)stratum_handle_method_base;
  dword_2D31D8 = (int)pre_stratum_handle_method_base;
  dword_2D31DC = (int)stratum_handle_response_base;
  dword_2D31E0 = (int)sub_9E18C;
  dword_2D31E4 = (int)sub_9DBFC;
  dword_2D31E8 = (int)stratum_subscribe_base;
  dword_2D31EC = (int)stratum_authorize_base;
  dword_2D31F0 = (int)sub_9DEB8;
  dword_2D31F4 = (int)sub_9DC30;
  dword_2D31F8 = (int)stratum_set_diff_or_target_base;
  dword_2D31FC = (int)target_to_diff_kda;
  dword_2D3200 = (int)diff_to_target_kda;
  dword_2D3204 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D31C0, 0x54u);
}
