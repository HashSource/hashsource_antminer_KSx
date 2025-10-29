void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2E92F4 = (int)stratum_connect;
  dword_2E92F8 = (int)stratum_disconnect;
  dword_2E92FC = (int)stratum_recv_line;
  dword_2E9300 = (int)stratum_send_line;
  dword_2E9304 = (int)stratum_login_base;
  dword_2E9308 = (int)stratum_handle_method_base;
  dword_2E930C = (int)pre_stratum_handle_method_base;
  dword_2E9310 = (int)stratum_handle_response_rvn;
  dword_2E9314 = (int)sub_A420C;
  dword_2E9318 = (int)sub_A4134;
  dword_2E931C = (int)sub_A4C4C;
  dword_2E9320 = (int)stratum_authorize_rvn;
  dword_2E9324 = (int)sub_A3AC8;
  dword_2E9328 = (int)sub_A3AB0;
  dword_2E932C = (int)stratum_set_diff_or_target_base;
  dword_2E9330 = (int)target_to_diff_rvn;
  dword_2E9334 = (int)diff_to_target_rvn;
  dword_2E9338 = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E92F4, 0x54u);
}
