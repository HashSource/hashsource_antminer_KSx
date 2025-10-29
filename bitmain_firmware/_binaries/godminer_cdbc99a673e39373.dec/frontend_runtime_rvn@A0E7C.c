void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2D4758 = (int)stratum_connect;
  dword_2D475C = (int)stratum_disconnect;
  dword_2D4760 = (int)stratum_recv_line;
  dword_2D4764 = (int)stratum_send_line;
  dword_2D4768 = (int)stratum_login_base;
  dword_2D476C = (int)stratum_handle_method_base;
  dword_2D4770 = (int)pre_stratum_handle_method_base;
  dword_2D4774 = (int)stratum_handle_response_rvn;
  dword_2D4778 = (int)sub_9FD14;
  dword_2D477C = (int)sub_9FC3C;
  dword_2D4780 = (int)sub_A0754;
  dword_2D4784 = (int)stratum_authorize_rvn;
  dword_2D4788 = (int)sub_9F5D0;
  dword_2D478C = (int)sub_9F5B8;
  dword_2D4790 = (int)stratum_set_diff_or_target_base;
  dword_2D4794 = (int)target_to_diff_rvn;
  dword_2D4798 = (int)diff_to_target_rvn;
  dword_2D479C = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D4758, 0x54u);
}
