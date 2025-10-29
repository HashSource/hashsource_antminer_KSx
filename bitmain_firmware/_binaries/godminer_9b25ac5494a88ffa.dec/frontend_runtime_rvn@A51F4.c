void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2E82EC = (int)stratum_connect;
  dword_2E82F0 = (int)stratum_disconnect;
  dword_2E82F4 = (int)stratum_recv_line;
  dword_2E82F8 = (int)stratum_send_line;
  dword_2E82FC = (int)stratum_login_base;
  dword_2E8300 = (int)stratum_handle_method_base;
  dword_2E8304 = (int)pre_stratum_handle_method_base;
  dword_2E8308 = (int)stratum_handle_response_rvn;
  dword_2E830C = (int)sub_A408C;
  dword_2E8310 = (int)sub_A3FB4;
  dword_2E8314 = (int)sub_A4ACC;
  dword_2E8318 = (int)stratum_authorize_rvn;
  dword_2E831C = (int)sub_A3948;
  dword_2E8320 = (int)sub_A3930;
  dword_2E8324 = (int)stratum_set_diff_or_target_base;
  dword_2E8328 = (int)target_to_diff_rvn;
  dword_2E832C = (int)diff_to_target_rvn;
  dword_2E8330 = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E82EC, 0x54u);
}
