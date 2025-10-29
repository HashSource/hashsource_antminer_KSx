void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2E805C = (int)stratum_connect;
  dword_2E8060 = (int)stratum_disconnect;
  dword_2E8064 = (int)stratum_recv_line;
  dword_2E8068 = (int)stratum_send_line;
  dword_2E806C = (int)stratum_login_base;
  dword_2E8070 = (int)stratum_handle_method_base;
  dword_2E8074 = (int)pre_stratum_handle_method_base;
  dword_2E8078 = (int)stratum_handle_response_base;
  dword_2E807C = (int)sub_9B97C;
  dword_2E8080 = (int)sub_9B914;
  dword_2E8084 = (int)stratum_subscribe_base;
  dword_2E8088 = (int)stratum_authorize_base;
  dword_2E808C = (int)sub_9AE18;
  dword_2E8090 = (int)sub_9AAD8;
  dword_2E8094 = (int)stratum_set_diff_or_target_base;
  dword_2E8098 = (int)target_to_diff_dcr;
  dword_2E809C = (int)diff_to_target_dcr;
  dword_2E80A0 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2E805C, 0x54u);
}
