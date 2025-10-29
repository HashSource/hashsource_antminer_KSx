int __fastcall softreset_hal(int a1)
{
  _BYTE v3[20]; // [sp+0h] [bp-14h] BYREF

  while ( uart_receive(g_chain_info[2 * a1], v3, 0x10u) != -1 )
    ;
  sleep(1u);
  while ( uart_receive(g_chain_info[2 * a1], v3, 0x10u) != -1 )
    ;
  return 0;
}
