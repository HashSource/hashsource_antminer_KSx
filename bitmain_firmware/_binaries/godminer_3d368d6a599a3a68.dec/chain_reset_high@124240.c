int __fastcall chain_reset_high(int a1)
{
  int v2; // r0

  v2 = hal_chain_reset_addr(a1);
  if ( v2 < 0 )
    return sub_123864(a1);
  else
    return gpio_write(v2, 1);
}
