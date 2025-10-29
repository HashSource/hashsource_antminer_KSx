void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2F3AE8 = (int)stratum_connect;
  dword_2F3AEC = (int)stratum_disconnect;
  dword_2F3AF0 = (int)stratum_recv_line;
  dword_2F3AF4 = (int)stratum_send_line;
  dword_2F3AF8 = (int)stratum_login_base;
  dword_2F3AFC = (int)stratum_handle_method_base;
  dword_2F3B00 = (int)pre_stratum_handle_method_base;
  dword_2F3B04 = (int)stratum_handle_response_rvn;
  dword_2F3B08 = (int)sub_A54B4;
  dword_2F3B0C = (int)sub_A53DC;
  dword_2F3B10 = (int)sub_A5EF4;
  dword_2F3B14 = (int)stratum_authorize_rvn;
  dword_2F3B18 = (int)sub_A4D70;
  dword_2F3B1C = (int)sub_A4D58;
  dword_2F3B20 = (int)stratum_set_diff_or_target_base;
  dword_2F3B24 = (int)target_to_diff_rvn;
  dword_2F3B28 = (int)diff_to_target_rvn;
  dword_2F3B2C = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3AE8, 0x54u);
}
