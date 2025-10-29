void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2F3804 = (int)stratum_connect;
  dword_2F3808 = (int)stratum_disconnect;
  dword_2F380C = (int)stratum_recv_line;
  dword_2F3810 = (int)stratum_send_line;
  dword_2F3814 = (int)stratum_login_base;
  dword_2F3818 = (int)stratum_handle_method_base;
  dword_2F381C = (int)pre_stratum_handle_method_base;
  dword_2F3820 = (int)stratum_handle_response_base;
  dword_2F3824 = (int)sub_9A594;
  dword_2F3828 = (int)sub_9A52C;
  dword_2F382C = (int)stratum_subscribe_base;
  dword_2F3830 = (int)stratum_authorize_base;
  dword_2F3834 = (int)sub_99A30;
  dword_2F3838 = (int)sub_996F0;
  dword_2F383C = (int)stratum_set_diff_or_target_base;
  dword_2F3840 = (int)target_to_diff_dcr;
  dword_2F3844 = (int)diff_to_target_dcr;
  dword_2F3848 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3804, 0x54u);
}
