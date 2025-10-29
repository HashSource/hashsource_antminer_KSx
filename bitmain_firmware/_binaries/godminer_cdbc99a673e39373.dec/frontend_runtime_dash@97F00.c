void *frontend_runtime_dash()
{
  void *v0; // r0

  dword_2D44C8 = (int)stratum_connect;
  dword_2D44CC = (int)stratum_disconnect;
  dword_2D44D0 = (int)stratum_recv_line;
  dword_2D44D4 = (int)stratum_send_line;
  dword_2D44D8 = (int)stratum_login_base;
  dword_2D44DC = (int)stratum_handle_method_base;
  dword_2D44E0 = (int)pre_stratum_handle_method_base;
  dword_2D44E4 = (int)stratum_handle_response_base;
  dword_2D44E8 = (int)sub_97E34;
  dword_2D44EC = (int)sub_970C0;
  dword_2D44F0 = (int)stratum_subscribe_base;
  dword_2D44F4 = (int)stratum_authorize_base;
  dword_2D44F8 = (int)sub_9712C;
  dword_2D44FC = (int)sub_96DC0;
  dword_2D4500 = (int)stratum_set_diff_or_target_base;
  dword_2D4504 = (int)target_to_diff_dash;
  dword_2D4508 = (int)diff_to_target_dash;
  dword_2D450C = (int)target_to_double_diff_dash;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D44C8, 0x54u);
}
