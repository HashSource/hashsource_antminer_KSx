void *frontend_runtime_hns()
{
  void *v0; // r0

  dword_2EB464 = (int)stratum_connect;
  dword_2EB468 = (int)stratum_disconnect;
  dword_2EB46C = (int)stratum_recv_line;
  dword_2EB470 = (int)stratum_send_line;
  dword_2EB474 = (int)stratum_login_base;
  dword_2EB478 = (int)stratum_handle_method_base;
  dword_2EB47C = (int)pre_stratum_handle_method_base;
  dword_2EB480 = (int)stratum_handle_response_hns;
  dword_2EB484 = (int)sub_9E940;
  dword_2EB488 = (int)sub_9E348;
  dword_2EB48C = (int)stratum_subscribe_base;
  dword_2EB490 = (int)stratum_authorize_base;
  dword_2EB494 = (int)sub_9EA54;
  dword_2EB498 = (int)sub_9E654;
  dword_2EB49C = (int)stratum_set_diff_or_target_base;
  dword_2EB4A0 = (int)target_to_diff_word_hns;
  dword_2EB4A4 = (int)diff_to_target_hns;
  dword_2EB4A8 = (int)target_to_double_diff_hns;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB464, 0x54u);
}
