unsigned int __fastcall dev_send_work_cmd_hal(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r5
  int v5; // r9
  int v6; // r11
  int v7; // r8
  int v8; // r4
  int v9; // r1

  v3 = a3 >> 7;
  v5 = a2;
  if ( a3 >> 7 )
  {
    v6 = v3 << 7;
    v7 = a2 + (v3 << 7);
    v8 = a2;
    v3 = 0;
    do
    {
      v9 = v8;
      v8 += 128;
      v3 += uart_send(g_chain_info[2 * a1], v9);
    }
    while ( v7 != v8 );
    v5 += v6;
  }
  return uart_send(g_chain_info[2 * a1], v5) + v3;
}
