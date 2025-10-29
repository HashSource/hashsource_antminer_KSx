void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2D465C = (int)stratum_connect;
  dword_2D4660 = (int)stratum_disconnect;
  dword_2D4664 = (int)stratum_recv_line;
  dword_2D4668 = (int)stratum_send_line;
  dword_2D466C = (int)stratum_login_base;
  dword_2D4670 = (int)stratum_handle_method_base;
  dword_2D4674 = (int)pre_stratum_handle_method_base;
  dword_2D4678 = (int)stratum_handle_response_kas;
  dword_2D467C = (int)sub_9D6AC;
  dword_2D4680 = (int)sub_9C988;
  dword_2D4684 = (int)sub_9E14C;
  dword_2D4688 = (int)stratum_authorize_kas;
  dword_2D468C = (int)sub_9CE10;
  dword_2D4690 = (int)sub_9CB24;
  dword_2D4694 = (int)stratum_set_diff_or_target_base;
  dword_2D4698 = (int)target_to_diff_kas;
  dword_2D469C = (int)diff_to_target_kas;
  dword_2D46A0 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D465C, 0x54u);
}
