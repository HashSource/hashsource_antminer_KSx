void *frontend_runtime_kas()
{
  void *v0; // r0

  dword_2D316C = (int)stratum_connect;
  dword_2D3170 = (int)stratum_disconnect;
  dword_2D3174 = (int)stratum_recv_line;
  dword_2D3178 = (int)stratum_send_line;
  dword_2D317C = (int)stratum_login_base;
  dword_2D3180 = (int)stratum_handle_method_base;
  dword_2D3184 = (int)pre_stratum_handle_method_base;
  dword_2D3188 = (int)stratum_handle_response_kas;
  dword_2D318C = (int)sub_9D044;
  dword_2D3190 = (int)sub_9C320;
  dword_2D3194 = (int)sub_9DAE4;
  dword_2D3198 = (int)stratum_authorize_kas;
  dword_2D319C = (int)sub_9C7A8;
  dword_2D31A0 = (int)sub_9C4BC;
  dword_2D31A4 = (int)stratum_set_diff_or_target_base;
  dword_2D31A8 = (int)target_to_diff_kas;
  dword_2D31AC = (int)diff_to_target_kas;
  dword_2D31B0 = (int)target_to_double_diff_kas;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D316C, 0x54u);
}
