void *frontend_runtime_hns()
{
  void *v0; // r0

  dword_2D4604 = (int)stratum_connect;
  dword_2D4608 = (int)stratum_disconnect;
  dword_2D460C = (int)stratum_recv_line;
  dword_2D4610 = (int)stratum_send_line;
  dword_2D4614 = (int)stratum_login_base;
  dword_2D4618 = (int)stratum_handle_method_base;
  dword_2D461C = (int)pre_stratum_handle_method_base;
  dword_2D4620 = (int)stratum_handle_response_hns;
  dword_2D4624 = (int)sub_9B6E8;
  dword_2D4628 = (int)sub_9B0F0;
  dword_2D462C = (int)stratum_subscribe_base;
  dword_2D4630 = (int)stratum_authorize_base;
  dword_2D4634 = (int)sub_9B7FC;
  dword_2D4638 = (int)sub_9B3FC;
  dword_2D463C = (int)stratum_set_diff_or_target_base;
  dword_2D4640 = (int)target_to_diff_word_hns;
  dword_2D4644 = (int)diff_to_target_hns;
  dword_2D4648 = (int)target_to_double_diff_hns;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D4604, 0x54u);
}
