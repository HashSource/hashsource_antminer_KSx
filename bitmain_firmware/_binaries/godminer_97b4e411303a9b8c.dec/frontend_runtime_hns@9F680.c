void *frontend_runtime_hns()
{
  void *v0; // r0

  dword_2EA15C = (int)stratum_connect;
  dword_2EA160 = (int)stratum_disconnect;
  dword_2EA164 = (int)stratum_recv_line;
  dword_2EA168 = (int)stratum_send_line;
  dword_2EA16C = (int)stratum_login_base;
  dword_2EA170 = (int)stratum_handle_method_base;
  dword_2EA174 = (int)pre_stratum_handle_method_base;
  dword_2EA178 = (int)stratum_handle_response_hns;
  dword_2EA17C = (int)sub_9E6E8;
  dword_2EA180 = (int)sub_9E0F0;
  dword_2EA184 = (int)stratum_subscribe_base;
  dword_2EA188 = (int)stratum_authorize_base;
  dword_2EA18C = (int)sub_9E7FC;
  dword_2EA190 = (int)sub_9E3FC;
  dword_2EA194 = (int)stratum_set_diff_or_target_base;
  dword_2EA198 = (int)target_to_diff_word_hns;
  dword_2EA19C = (int)diff_to_target_hns;
  dword_2EA1A0 = (int)target_to_double_diff_hns;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2EA15C, 0x54u);
}
