int __fastcall chain_reset_low(int a1)
{
  if ( hal_chain_reset_addr(a1) < 0 )
    return sub_1026D4(a1);
  else
    return gpio_write();
}
