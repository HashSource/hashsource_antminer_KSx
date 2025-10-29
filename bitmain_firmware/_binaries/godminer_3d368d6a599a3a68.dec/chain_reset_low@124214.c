int __fastcall chain_reset_low(int a1)
{
  int v2; // r0

  v2 = hal_chain_reset_addr(a1);
  if ( v2 < 0 )
    return sub_1237D4(a1);
  else
    return gpio_write(v2, 0);
}
