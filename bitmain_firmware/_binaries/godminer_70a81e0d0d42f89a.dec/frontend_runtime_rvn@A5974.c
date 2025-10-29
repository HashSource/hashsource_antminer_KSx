void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2EB60C = (int)stratum_connect;
  dword_2EB610 = (int)stratum_disconnect;
  dword_2EB614 = (int)stratum_recv_line;
  dword_2EB618 = (int)stratum_send_line;
  dword_2EB61C = (int)stratum_login_base;
  dword_2EB620 = (int)stratum_handle_method_base;
  dword_2EB624 = (int)pre_stratum_handle_method_base;
  dword_2EB628 = (int)stratum_handle_response_rvn;
  dword_2EB62C = (int)sub_A480C;
  dword_2EB630 = (int)sub_A4734;
  dword_2EB634 = (int)sub_A524C;
  dword_2EB638 = (int)stratum_authorize_rvn;
  dword_2EB63C = (int)sub_A40C8;
  dword_2EB640 = (int)sub_A40B0;
  dword_2EB644 = (int)stratum_set_diff_or_target_base;
  dword_2EB648 = (int)target_to_diff_rvn;
  dword_2EB64C = (int)diff_to_target_rvn;
  dword_2EB650 = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EB60C, 0x54u);
}
