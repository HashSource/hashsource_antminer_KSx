void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_2D3080 = (int)stratum_connect;
  dword_2D3084 = (int)stratum_disconnect;
  dword_2D3088 = (int)stratum_recv_line;
  dword_2D308C = (int)stratum_send_line;
  dword_2D3090 = (int)stratum_login_base;
  dword_2D3094 = (int)stratum_handle_method_eth;
  dword_2D3098 = (int)pre_stratum_handle_method_eth;
  dword_2D309C = (int)stratum_handle_response_eth;
  dword_2D30A0 = (int)sub_99940;
  dword_2D30A4 = (int)sub_99868;
  dword_2D30A8 = (int)sub_98A34;
  dword_2D30AC = (int)stratum_authorize_eth;
  dword_2D30B0 = (int)sub_993A0;
  dword_2D30B4 = (int)sub_991B8;
  dword_2D30B8 = (int)sub_98FD8;
  dword_2D30BC = (int)target_to_diff_iron_2;
  dword_2D30C0 = (int)diff_to_target_eth;
  dword_2D30C4 = (int)target_to_double_diff_eth;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D3080, 0x54u);
}
