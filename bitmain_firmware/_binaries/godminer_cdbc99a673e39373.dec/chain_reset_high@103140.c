int __fastcall chain_reset_high(int a1)
{
  if ( hal_chain_reset_addr(a1) < 0 )
    return sub_102764(a1);
  else
    return gpio_write();
}
