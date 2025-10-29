void *frontend_runtime_ltc()
{
  void *v0; // r0

  dword_2D3214 = (int)stratum_connect;
  dword_2D3218 = (int)stratum_disconnect;
  dword_2D321C = (int)stratum_recv_line;
  dword_2D3220 = (int)stratum_send_line;
  dword_2D3224 = (int)stratum_login_base;
  dword_2D3228 = (int)stratum_handle_method_base;
  dword_2D322C = (int)pre_stratum_handle_method_base;
  dword_2D3230 = (int)stratum_handle_response_base;
  dword_2D3234 = (int)sub_9ED84;
  dword_2D3238 = (int)sub_9E5E4;
  dword_2D323C = (int)stratum_subscribe_base;
  dword_2D3240 = (int)stratum_authorize_base;
  dword_2D3244 = (int)sub_9E61C;
  dword_2D3248 = (int)sub_9E324;
  dword_2D324C = (int)stratum_set_diff_or_target_base;
  dword_2D3250 = (int)target_to_diff_ltc;
  dword_2D3254 = (int)diff_to_target_ltc;
  dword_2D3258 = (int)target_to_double_diff_ltc;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D3214, 0x54u);
}
