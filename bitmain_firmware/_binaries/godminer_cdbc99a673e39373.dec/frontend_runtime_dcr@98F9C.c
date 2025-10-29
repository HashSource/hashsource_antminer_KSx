void *frontend_runtime_dcr()
{
  void *v0; // r0

  dword_2D451C = (int)stratum_connect;
  dword_2D4520 = (int)stratum_disconnect;
  dword_2D4524 = (int)stratum_recv_line;
  dword_2D4528 = (int)stratum_send_line;
  dword_2D452C = (int)stratum_login_base;
  dword_2D4530 = (int)stratum_handle_method_base;
  dword_2D4534 = (int)pre_stratum_handle_method_base;
  dword_2D4538 = (int)stratum_handle_response_base;
  dword_2D453C = (int)sub_98EA4;
  dword_2D4540 = (int)sub_98E3C;
  dword_2D4544 = (int)stratum_subscribe_base;
  dword_2D4548 = (int)stratum_authorize_base;
  dword_2D454C = (int)sub_98340;
  dword_2D4550 = (int)sub_98000;
  dword_2D4554 = (int)stratum_set_diff_or_target_base;
  dword_2D4558 = (int)target_to_diff_dcr;
  dword_2D455C = (int)diff_to_target_dcr;
  dword_2D4560 = (int)target_to_double_diff_dcr;
  v0 = calloc(1u, 0x54u);
  return memcpy(v0, &dword_2D451C, 0x54u);
}
