int __fastcall phy_rx_term_dc_enable(int result, unsigned int a2, char *a3, int a4)
{
  int v5; // r8
  int v6; // r11
  char *v7; // r7
  int v8; // r4
  int v9; // r6
  int v10; // r3
  unsigned __int16 v11; // r5

  if ( a4 )
  {
    v5 = result;
    v6 = (int)&a3[(unsigned __int8)(a4 - 1) + 1];
    v7 = a3;
    do
    {
      v8 = 0;
      do
      {
        v9 = v8 | 0x1023;
        v10 = v8 | 0x1023;
        v8 = (unsigned __int16)(v8 + 512);
        v11 = serdes_apb_read(v5, a2, (unsigned __int8)*v7, v10) & 0xFEFF;
        sub_D78D4(v5, *v7, v9, v11);
        result = sub_D78D4(v5, *v7, v9, v11 | 0x200);
      }
      while ( (unsigned __int16)v8 != 2048 );
      ++v7;
    }
    while ( v7 != (char *)v6 );
  }
  return result;
}
