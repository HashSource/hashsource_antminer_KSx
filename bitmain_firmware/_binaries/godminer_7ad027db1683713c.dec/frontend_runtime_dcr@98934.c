void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2D302C = (int)stratum_connect;
  dword_2D3030 = (int)stratum_disconnect;
  dword_2D3034 = (int)stratum_recv_line;
  dword_2D3038 = (int)stratum_send_line;
  dword_2D303C = (int)stratum_login_base;
  dword_2D3040 = (int)stratum_handle_method_base;
  dword_2D3044 = (int)pre_stratum_handle_method_base;
  dword_2D3048 = (int)stratum_handle_response_base;
  dword_2D304C = (int)sub_9883C;
  dword_2D3050 = (int)sub_987D4;
  dword_2D3054 = (int)stratum_subscribe_base;
  dword_2D3058 = (int)stratum_authorize_base;
  dword_2D305C = (int)sub_97CD8;
  dword_2D3060 = (int)sub_97998;
  dword_2D3064 = (int)stratum_set_diff_or_target_base;
  dword_2D3068 = (int)target_to_diff_dcr;
  dword_2D306C = (int)diff_to_target_dcr;
  dword_2D3070 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D302C, 0x54u);
}
