unsigned int __fastcall dev_send_work_cmd_hal(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r5
  char v4; // r10
  int v6; // r9
  int v7; // r11
  int v8; // r8
  int v9; // r4
  int v10; // r1

  v3 = a3 >> 7;
  v4 = a3;
  v6 = a2;
  if ( a3 >> 7 )
  {
    v7 = v3 << 7;
    v8 = a2 + (v3 << 7);
    v9 = a2;
    v3 = 0;
    do
    {
      v10 = v9;
      v9 += 128;
      v3 += uart_send(g_chain_info[2 * a1], v10, 0x80u);
    }
    while ( v8 != v9 );
    v6 += v7;
  }
  return uart_send(g_chain_info[2 * a1], v6, v4 & 0x7F) + v3;
}
