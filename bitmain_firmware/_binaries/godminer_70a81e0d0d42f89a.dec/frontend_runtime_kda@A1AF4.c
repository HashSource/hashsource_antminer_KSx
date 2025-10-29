void *frontend_runtime_kda()
{
  void *v0; // r0

  dword_2EB510 = (int)stratum_connect;
  dword_2EB514 = (int)stratum_disconnect;
  dword_2EB518 = (int)stratum_recv_line;
  dword_2EB51C = (int)stratum_send_line;
  dword_2EB520 = (int)stratum_login_base;
  dword_2EB524 = (int)stratum_handle_method_base;
  dword_2EB528 = (int)pre_stratum_handle_method_base;
  dword_2EB52C = (int)stratum_handle_response_base;
  dword_2EB530 = (int)sub_A1A5C;
  dword_2EB534 = (int)sub_A14CC;
  dword_2EB538 = (int)stratum_subscribe_base;
  dword_2EB53C = (int)stratum_authorize_base;
  dword_2EB540 = (int)sub_A1788;
  dword_2EB544 = (int)sub_A1500;
  dword_2EB548 = (int)stratum_set_diff_or_target_base;
  dword_2EB54C = (int)target_to_diff_kda;
  dword_2EB550 = (int)diff_to_target_kda;
  dword_2EB554 = (int)target_to_double_diff_kda;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB510, 0x54u);
}
