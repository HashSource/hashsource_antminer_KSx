int __fastcall phy_rx_term_dc_enable_one_core(int a1, unsigned int a2, int a3)
{
  int v6; // r4
  int v7; // r10
  int v8; // r3
  unsigned __int16 v9; // r5
  int result; // r0

  v6 = 0;
  do
  {
    v7 = v6 | 0x1023;
    v8 = v6 | 0x1023;
    v6 = (unsigned __int16)(v6 + 512);
    v9 = serdes_apb_read(a1, a2, a3, v8) & 0xFEFF;
    sub_D8D10(a1, a3, v7, v9);
    result = sub_D8D10(a1, a3, v7, v9 | 0x200);
  }
  while ( (unsigned __int16)v6 != 2048 );
  return result;
}
