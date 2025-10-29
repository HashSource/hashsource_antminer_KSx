void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2EA304 = (int)stratum_connect;
  dword_2EA308 = (int)stratum_disconnect;
  dword_2EA30C = (int)stratum_recv_line;
  dword_2EA310 = (int)stratum_send_line;
  dword_2EA314 = (int)stratum_login_base;
  dword_2EA318 = (int)stratum_handle_method_base;
  dword_2EA31C = (int)pre_stratum_handle_method_base;
  dword_2EA320 = (int)stratum_handle_response_rvn;
  dword_2EA324 = (int)sub_A45B4;
  dword_2EA328 = (int)sub_A44DC;
  dword_2EA32C = (int)sub_A4FF4;
  dword_2EA330 = (int)stratum_authorize_rvn;
  dword_2EA334 = (int)sub_A3E70;
  dword_2EA338 = (int)sub_A3E58;
  dword_2EA33C = (int)stratum_set_diff_or_target_base;
  dword_2EA340 = (int)target_to_diff_rvn;
  dword_2EA344 = (int)diff_to_target_rvn;
  dword_2EA348 = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA304, 0x54u);
}
