void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2D4704 = (int)stratum_connect;
  dword_2D4708 = (int)stratum_disconnect;
  dword_2D470C = (int)stratum_recv_line;
  dword_2D4710 = (int)stratum_send_line;
  dword_2D4714 = (int)stratum_login_base;
  dword_2D4718 = (int)stratum_handle_method_base;
  dword_2D471C = (int)pre_stratum_handle_method_base;
  dword_2D4720 = (int)stratum_handle_response_base;
  dword_2D4724 = (int)sub_9F3EC;
  dword_2D4728 = (int)sub_9EC4C;
  dword_2D472C = (int)stratum_subscribe_base;
  dword_2D4730 = (int)stratum_authorize_base;
  dword_2D4734 = (int)sub_9EC84;
  dword_2D4738 = (int)sub_9E98C;
  dword_2D473C = (int)stratum_set_diff_or_target_base;
  dword_2D4740 = (int)target_to_diff_ltc;
  dword_2D4744 = (int)diff_to_target_ltc;
  dword_2D4748 = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D4704, 0x54u);
}
