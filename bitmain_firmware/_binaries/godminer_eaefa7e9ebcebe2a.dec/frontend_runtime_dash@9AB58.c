void *frontend_runtime_dash()
{
  void *v0; // r0

  dword_2E9010 = (int)stratum_connect;
  dword_2E9014 = (int)stratum_disconnect;
  dword_2E9018 = (int)stratum_recv_line;
  dword_2E901C = (int)stratum_send_line;
  dword_2E9020 = (int)stratum_login_base;
  dword_2E9024 = (int)stratum_handle_method_base;
  dword_2E9028 = (int)pre_stratum_handle_method_base;
  dword_2E902C = (int)stratum_handle_response_base;
  dword_2E9030 = (int)sub_9AA8C;
  dword_2E9034 = (int)sub_99DF0;
  dword_2E9038 = (int)stratum_subscribe_base;
  dword_2E903C = (int)stratum_authorize_base;
  dword_2E9040 = (int)sub_99E5C;
  dword_2E9044 = (int)sub_99AF0;
  dword_2E9048 = (int)stratum_set_diff_or_target_base;
  dword_2E904C = (int)target_to_diff_dash;
  dword_2E9050 = (int)diff_to_target_dash;
  dword_2E9054 = (int)target_to_double_diff_dash;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E9010, 0x54u);
}
