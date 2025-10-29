void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2F3858 = (int)stratum_connect;
  dword_2F385C = (int)stratum_disconnect;
  dword_2F3860 = (int)stratum_recv_line;
  dword_2F3864 = (int)stratum_send_line;
  dword_2F3868 = (int)stratum_login_base;
  dword_2F386C = (int)stratum_handle_method_eth;
  dword_2F3870 = (int)pre_stratum_handle_method_eth;
  dword_2F3874 = (int)stratum_handle_response_eth;
  dword_2F3878 = (int)sub_9B698;
  dword_2F387C = (int)sub_9B5C0;
  dword_2F3880 = (int)sub_9A78C;
  dword_2F3884 = (int)stratum_authorize_eth;
  dword_2F3888 = (int)sub_9B0F8;
  dword_2F388C = (int)sub_9AF10;
  dword_2F3890 = (int)sub_9AD30;
  dword_2F3894 = (int)target_to_diff_iron_2;
  dword_2F3898 = (int)diff_to_target_eth;
  dword_2F389C = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2F3858, 0x54u);
}
