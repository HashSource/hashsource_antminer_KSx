void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2D4570 = (int)stratum_connect;
  dword_2D4574 = (int)stratum_disconnect;
  dword_2D4578 = (int)stratum_recv_line;
  dword_2D457C = (int)stratum_send_line;
  dword_2D4580 = (int)stratum_login_base;
  dword_2D4584 = (int)stratum_handle_method_eth;
  dword_2D4588 = (int)pre_stratum_handle_method_eth;
  dword_2D458C = (int)stratum_handle_response_eth;
  dword_2D4590 = (int)sub_99FA8;
  dword_2D4594 = (int)sub_99ED0;
  dword_2D4598 = (int)sub_9909C;
  dword_2D459C = (int)stratum_authorize_eth;
  dword_2D45A0 = (int)sub_99A08;
  dword_2D45A4 = (int)sub_99820;
  dword_2D45A8 = (int)sub_99640;
  dword_2D45AC = (int)target_to_diff_eth;
  dword_2D45B0 = (int)diff_to_target_eth;
  dword_2D45B4 = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D4570, 0x54u);
}
