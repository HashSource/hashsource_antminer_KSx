void *frontend_runtime_dash()
{
  void *v0; // r0

  dword_2EB328 = (int)stratum_connect;
  dword_2EB32C = (int)stratum_disconnect;
  dword_2EB330 = (int)stratum_recv_line;
  dword_2EB334 = (int)stratum_send_line;
  dword_2EB338 = (int)stratum_login_base;
  dword_2EB33C = (int)stratum_handle_method_base;
  dword_2EB340 = (int)pre_stratum_handle_method_base;
  dword_2EB344 = (int)stratum_handle_response_base;
  dword_2EB348 = (int)sub_9B08C;
  dword_2EB34C = (int)sub_9A3F0;
  dword_2EB350 = (int)stratum_subscribe_base;
  dword_2EB354 = (int)stratum_authorize_base;
  dword_2EB358 = (int)sub_9A45C;
  dword_2EB35C = (int)sub_9A0F0;
  dword_2EB360 = (int)stratum_set_diff_or_target_base;
  dword_2EB364 = (int)target_to_diff_dash;
  dword_2EB368 = (int)diff_to_target_dash;
  dword_2EB36C = (int)target_to_double_diff_dash;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB328, 0x54u);
}
