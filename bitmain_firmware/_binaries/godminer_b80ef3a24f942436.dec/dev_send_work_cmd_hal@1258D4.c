unsigned int __fastcall dev_send_work_cmd_hal(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r5
  char v4; // r10
  int v6; // r9
  unsigned int v7; // r11
  _DWORD *v8; // r6
  int v9; // r8
  int v10; // r4
  int v11; // r1

  v3 = a3 >> 7;
  v4 = a3;
  v6 = a2;
  if ( a3 >> 7 )
  {
    v7 = v3 << 7;
    v8 = g_chain_info;
    v9 = a2 + (v3 << 7);
    v10 = a2;
    v3 = 0;
    do
    {
      v11 = v10;
      v10 += 128;
      v3 += uart_send(g_chain_info[2 * a1], v11, 0x80u);
    }
    while ( v9 != v10 );
    v6 += v7;
  }
  else
  {
    v8 = g_chain_info;
  }
  return uart_send(v8[2 * a1], v6, v4 & 0x7F) + v3;
}
