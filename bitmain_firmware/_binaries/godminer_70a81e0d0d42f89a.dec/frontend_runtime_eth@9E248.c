void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2EB3D0 = (int)stratum_connect;
  dword_2EB3D4 = (int)stratum_disconnect;
  dword_2EB3D8 = (int)stratum_recv_line;
  dword_2EB3DC = (int)stratum_send_line;
  dword_2EB3E0 = (int)stratum_login_base;
  dword_2EB3E4 = (int)stratum_handle_method_eth;
  dword_2EB3E8 = (int)pre_stratum_handle_method_eth;
  dword_2EB3EC = (int)stratum_handle_response_eth;
  dword_2EB3F0 = (int)sub_9D200;
  dword_2EB3F4 = (int)sub_9D128;
  dword_2EB3F8 = (int)sub_9C2F4;
  dword_2EB3FC = (int)stratum_authorize_eth;
  dword_2EB400 = (int)sub_9CC60;
  dword_2EB404 = (int)sub_9CA78;
  dword_2EB408 = (int)sub_9C898;
  dword_2EB40C = (int)target_to_diff_eth;
  dword_2EB410 = (int)diff_to_target_eth;
  dword_2EB414 = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB3D0, 0x54u);
}
