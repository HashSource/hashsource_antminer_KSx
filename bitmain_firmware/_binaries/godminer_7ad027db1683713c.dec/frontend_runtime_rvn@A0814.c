void *frontend_runtime_rvn()
{
  void *v0; // r0

  dword_2D3268 = (int)stratum_connect;
  dword_2D326C = (int)stratum_disconnect;
  dword_2D3270 = (int)stratum_recv_line;
  dword_2D3274 = (int)stratum_send_line;
  dword_2D3278 = (int)stratum_login_base;
  dword_2D327C = (int)stratum_handle_method_base;
  dword_2D3280 = (int)pre_stratum_handle_method_base;
  dword_2D3284 = (int)stratum_handle_response_rvn;
  dword_2D3288 = (int)sub_9F6AC;
  dword_2D328C = (int)sub_9F5D4;
  dword_2D3290 = (int)sub_A00EC;
  dword_2D3294 = (int)stratum_authorize_rvn;
  dword_2D3298 = (int)sub_9EF68;
  dword_2D329C = (int)sub_9EF50;
  dword_2D32A0 = (int)stratum_set_diff_or_target_base;
  dword_2D32A4 = (int)target_to_diff_rvn;
  dword_2D32A8 = (int)diff_to_target_rvn;
  dword_2D32AC = (int)target_to_double_diff_rvn;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D3268, 0x54u);
}
