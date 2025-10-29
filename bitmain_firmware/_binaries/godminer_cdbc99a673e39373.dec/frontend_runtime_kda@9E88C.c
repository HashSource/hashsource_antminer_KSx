void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2D46B0 = (int)stratum_connect;
  dword_2D46B4 = (int)stratum_disconnect;
  dword_2D46B8 = (int)stratum_recv_line;
  dword_2D46BC = (int)stratum_send_line;
  dword_2D46C0 = (int)stratum_login_base;
  dword_2D46C4 = (int)stratum_handle_method_base;
  dword_2D46C8 = (int)pre_stratum_handle_method_base;
  dword_2D46CC = (int)stratum_handle_response_base;
  dword_2D46D0 = (int)sub_9E7F4;
  dword_2D46D4 = (int)sub_9E264;
  dword_2D46D8 = (int)stratum_subscribe_base;
  dword_2D46DC = (int)stratum_authorize_base;
  dword_2D46E0 = (int)sub_9E520;
  dword_2D46E4 = (int)sub_9E298;
  dword_2D46E8 = (int)stratum_set_diff_or_target_base;
  dword_2D46EC = (int)target_to_diff_kda;
  dword_2D46F0 = (int)diff_to_target_kda;
  dword_2D46F4 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D46B0, 0x54u);
}
